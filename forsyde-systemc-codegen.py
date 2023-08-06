#!/usr/bin/env python
'''\
This script generates ForSyDe-SystemC code from a ForSyDe-XML SADF model.
The script takes as input the path to the ForSyDe-XML SADF model and the path to the output file.
'''

import sys
import os
import xml.etree.ElementTree as ET

'''\
Get the binded signals and ports of a given port
'''
def get_port_bindings(inproot, port, inparent):
    if port is None:
        return []
    bindings = []
    # Add binding to signals
    if port.attrib['direction'] == 'in':
        bindings = inproot.findall('signal/[@target="{}"][@target_port="{}"]'.format(inparent[port].attrib['name'], port.attrib['name']))
    else:
        bindings = inproot.findall('signal/[@source="{}"][@source_port="{}"]'.format(inparent[port].attrib['name'], port.attrib['name']))
    # Add binding to top-level ports
    bindings += inproot.findall('port/[@bound_process="{}"][@bound_port="{}"]'.format(inparent[port].attrib['name'], port.attrib['name']))
    return bindings

'''\
Generate the SystemC code for the given SADF model.
The function gets the root XML element of the SADF model as input and returns the SystemC code
as a string.
'''
def generate_code(inproot):
    inparent = {c:p for p in inproot.iter() for c in p}
    # Generate the header
    code = '''\
#include <forsyde.hpp>
//#include <iostream>

//using namespace sc_core;
using namespace ForSyDe;
'''

    # Generate the leaf process include files
    for lp in inproot.findall('leaf_process'):
        for pcarg in lp.findall('process_constructor/argument'):
            if pcarg.attrib['name'].endswith('_func'):
                code += '''\
#include "{}{}.hpp"
'''.format(lp.attrib['name'], pcarg.attrib['name'])
                
    code += '''
SC_MODULE({}) {{
'''.format(inproot.attrib['name'])
    
    # Generate the top-level ports
    for inport in inproot.findall('port'):
        port_attribs = inport.attrib
        code += '''\
    {}::{}_port<{}> {};
'''.format(port_attribs['moc'].upper(), port_attribs['direction'], port_attribs['type'], port_attribs['name'])

    # Generate the top-leve signals
    for insignal in inproot.findall('signal'):
        signal_attribs = insignal.attrib
        code += '''\
    {}::signal<{}> {};
'''.format(signal_attribs['moc'].upper(), signal_attribs['type'], signal_attribs['name'])
        
    # Generate the top-level leaf processes
    for lp in inproot.findall('leaf_process'):
        lp_attribs = lp.attrib
        lp_pc_attribs = lp.find('process_constructor').attrib
        lp_inps = lp.findall('port/[@direction="in"]')
        lp_outs = lp.findall('port/[@direction="out"]')
        # print("out port binding:", get_port_bindings(inproot, lp_outs[0], inparent))
        # print("inp port binding:", get_port_bindings(inproot, lp_inps[0], inparent))
        code += '''\
    auto {0} = {1}::make_{2}("{0}", {3}{4}{5});
'''.format(
            lp_attribs['name'],
            lp_pc_attribs['moc'].upper(),
            lp_pc_attribs['name'],
            ','.join(arg.attrib['value'] for arg in lp.findall('process_constructor/argument')),
            # (',' + getbindings(lp_outs)[0].attrib['name']) if lp_outs is not None else '',
            (','+(','.join(get_port_bindings(inproot, p, inparent)[0].attrib['name'] for p in lp_outs))) if len(lp_outs)>0 else '',
            (','+(','.join(get_port_bindings(inproot, p, inparent)[0].attrib['name'] for p in lp_inps))) if len(lp_inps)>0 else ''
    )
        
    # Generate the footer
    code += '''\
    }
};

int sc_main(int argc, char* argv[]) {{
    sc_start();
    return 0;
}}
'''

    return code

'''\
Main function of the script.
'''
def main():
    # Check the number of arguments
    if len(sys.argv) != 3:
        print('Usage: {} <input> <output>'.format(sys.argv[0]))
        sys.exit(1)
    
    # Check the input file
    if not os.path.isfile(sys.argv[1]):
        print('Error: input file {} does not exist'.format(sys.argv[1]))
        sys.exit(1)
    
    # Parse the input file
    inproot = ET.parse(sys.argv[1]).getroot()
    
    # Generate the code
    code = generate_code(inproot)
    
    # Write the code to the output file
    with open(sys.argv[2], 'w') as outfile:
        outfile.write(code)
    
    # Exit the script
    sys.exit(0)

if __name__ == "__main__":
    main()