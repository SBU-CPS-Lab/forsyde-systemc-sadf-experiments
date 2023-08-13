#!/usr/bin/env python
'''\
This script performs the experiments on synthetic SADF graphs generated with SDF3 and simulated using ForSyDe-SystemC.
The user specifies the list of values for each parameter of the synthetic SADF graph and the script:
1- Generates the synthetic SADF graph using SDF3
2- Converts the synthetic SADF graph to a ForSyDe-SystemC graph
3- Generates the ForSyDe-SystemC code for the synthetic SADF graph
4- Compiles the generated code
5- Simulates the generated code byy running the executable file and measures the execution time
6- Saves the results in a CSV file
'''
import sys
import os
import xml.etree.ElementTree as ET
import subprocess
import time
import csv
import shutil
import argparse
import itertools
# import re
# import math
# import random
# import numpy as np

# Parse the command line arguments
def parse_args():
    # Create the parser
    parser = argparse.ArgumentParser(description='Perform experiments on synthetic SADF graphs generated with SDF3 and simulated using ForSyDe-SystemC.')
    parser.add_argument('-o', '--output', help='Path to the output directory', required=True)
    parser.add_argument('-p', '--params', help='Path to the parameters file', required=False, default='params.ini')
    parser.add_argument('-c', '--config', help='Path to the configuration file', required=False, default='config.ini')
    args = parser.parse_args()
    return args

# Read the parameters file
def read_params(args):
    # Create the dictionary of parameters
    params = {}
    
    # Open the parameters file
    with open(args.params, 'r') as f:
        for line in f:
            # Skip the comments
            if line.startswith('#'):
                continue
            
            # Skip the empty lines
            line = line.strip()
            if line == '':
                continue
            
            # Read the parameter
            key, value = line.split('=')
            params[key.strip()] = value.strip()
    
    # Return the dictionary of parameters
    return params

# Read the configuration file
def read_configs(args):
    # Create the dictionary of configurations
    configs = {}
    
    # Open the configurations file
    with open(args.config, 'r') as f:
        for line in f:
            # Skip the comments
            if line.startswith('#'):
                continue
            
            # Skip the empty lines
            line = line.strip()
            if line == '':
                continue
            
            # Read the configuration
            key, value = line.split('=',1)
            configs[key.strip()] = value.strip()
    
    # Return the dictionary of configurations
    return configs

# Generate the synthetic SADF graph using SDF3
def generate_sdf3_graph(args,params,configs):
    # Generate the options file for SDF3 graph generation
    options_file_str = '''\
<sdf3 type='fsmsadf' version='1.0'
    xsi:noNamespaceSchemaLocation='http://www.es.ele.tue.nl/sdf3/xsd/sdf3-sdf.xsd'>
    <settings type='generate'>
        <stronglyConnected/>
        <nrScenarioGraphs n='1' />
        <nrActors n='{nrActors}' />
        <degree avg='{degree}' var='1' min='{degree_min}' max='{degree_max}' />
        <iterCnt avg='2' var='1' min='1' max='5' />
        <initialTokenChannelProp p='0' />
        <initialTokenProp p='0' />
        <nrScenarios n='{nrScenarios}' />
        <nrProcTypes n='1' />
        <mapChance p='0.25' />
        <execTime avg='{execTime}' var='1' min='{execTime_min}' max='{execTime_max}' />
        <!--stateSize avg='1' var='1' min='1' max='1'/-->
        <tokenSize avg='{tokenSize}' var='1' min='{tokenSize_min}' max='{tokenSize_max}' />
        <throughputConstraint autoConcurrencyDegree='1' throughputScaleFactor='0.1' />
    </settings>
</sdf3>
'''.format(**params,
           degree_min=max(1,params['degree']-2), degree_max=params['degree']+2,
           execTime_min=max(1,params['execTime']-2), execTime_max=params['execTime']+2,
           tokenSize_min=max(1,params['tokenSize']-2), tokenSize_max=params['tokenSize']+2)
    with open(os.path.join(params['output_path'], 'sdf-options.xml'), 'w') as f:
        f.write(options_file_str)

    # Generate the SDF3 command
    cmd = [configs['sdf3_path'] + '/build/release/Linux/bin/sdf3generate-fsmsadf', '--settings', os.path.join(params['output_path'], 'sdf-options.xml'), '--output', os.path.join(params['output_path'], 'sdf3_graph.xml')]
    
    # Execute the SDF3 command
    subprocess.call(cmd)

'''\
Execute the (patched) SDF3 analysis command for extracting the repeatition vectors
'''
def sdf3_analysis(params,configs):
    # Generate the SDF3 analysis command for extracting the repeatition vectors
    cmd = [configs['sdf3_path'] + '/build/release/Linux/bin/sdf3analyze-fsmsadf', 
           '--graph', os.path.join(params['output_path'], 'sdf3_graph.xml'),
           '--algo', 'repeatitions',
           '--output', os.path.join(params['output_path'], 'sdf3_graph_repeatitions.txt')
    ]

    # Execute the SDF3 analysis command
    subprocess.call(cmd)

# Convert the synthetic SADF graph from SDF3 format to ForSyDe-XDF format
def sdf3_to_forsyde(args,params,configs):
    # Generate the sdf3-sadf-to-forsyde.py command
    cmd = ['python',
           './sdf3-sadf-to-forsyde.py',
           os.path.join(params['output_path'],'sdf3_graph.xml'),
           os.path.join(params['output_path'], 'sdf3_graph_repeatitions.txt'),
           os.path.join(params['output_path'], 'forsyde_graph.xml')
    ]    
    
    # Execute the SDF3 command
    subprocess.call(cmd)

# Generate the ForSyDe-SystemC code for the synthetic SADF graph
def generate_forsyde_systemc_code(args,params,configs):
    # Genera the forsyde-systemc-codegen.py command
    cmd = ['python', './forsyde-systemc-codegen.py', os.path.join(params['output_path'], 'forsyde_graph.xml'), os.path.join(params['output_path'], 'sdf3_graph.xml'), os.path.join(params['output_path'], 'forsyde_graph.cpp')]
    
    # Execute the SDF3 command
    subprocess.call(cmd)

# Compile the generated code
def compile_forsyde_systemc_code(args,params,configs):
    # Generate the compile command for the generated code using the C++ compiler
    cmd = [configs['cpp_compiler'], *configs['cpp_flags'].split(), *configs['cpp_include_paths'].split(), *configs['cpp_libs'].split(), os.path.join(params['output_path'], 'forsyde_graph.cpp'), '-o', os.path.join(params['output_path'], 'forsyde_graph')]
    
    # Execute the SDF3 command
    subprocess.call(cmd)

# Simulate the generated code and measure the execution time
def simulate_forsyde_systemc_code(args,params):
    # Generate the execution command for the generated and compiled code
    cmd = [os.path.join(params['output_path'], 'forsyde_graph')]
    
    # Execute the simulation model and measure the execution time
    start_time = time.time()
    subprocess.call(cmd)
    end_time = time.time()
    
    # Return the execution time
    return end_time - start_time

# Run the experiments. Iterate over all the possible combinations of the parameters
def run_experiments(args,params,config,csv_writer):
    params_sep = {}
    # Split the comma-sperates parameter values to a list of values
    for key, value in params.items():
        params_sep[key] = value.split(',')
    # Iterate over all the possible combinations of the parameters
    for params_values in itertools.product(*params_sep.values()):
        # Create a dictionary of the parameters
        params_dict = {}
        for key, value in zip(params_sep.keys(), params_values):
            params_dict[key] = int(value)
        
        # Create a folder in the output folder, named after a combination of parameter values
        params_dict['output_path'] = os.path.join(args.output, '_'.join([str(value) for value in params_values]))
        if not os.path.exists(params_dict['output_path']):
            os.makedirs(params_dict['output_path'])
        
        # Generate the synthetic SADF graph using SDF3
        generate_sdf3_graph(args,params_dict,config)

        # Generate the repeatition vectors file from the generated SADF graph
        sdf3_analysis(params_dict,config)

        # Convert the SDF3 graph to the ForSyDe-XML format
        sdf3_to_forsyde(args,params_dict,config)
        
        # Generate the ForSyDe-SystemC code for the synthetic SADF graph
        generate_forsyde_systemc_code(args,params_dict,config)
        
        # Compile the generated code
        compile_forsyde_systemc_code(args,params_dict,config)
        
        # Simulate the generated code and measure the execution time
        exec_time = simulate_forsyde_systemc_code(args,params_dict)
        
        # Write the results in the CSV file
        csv_writer.writerow([*params_values, exec_time])

# Prepare the CSV file
def prepare_csv_file(args, params):
    # Create the CSV file
    csv_file = open(os.path.join(args.output, 'results.csv'), 'w')
    csv_writer = csv.writer(csv_file, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
    
    # Write the header of the CSV file
    
    # Write the parameters
    csv_writer.writerow([*params.keys(), 'simTime'])
        
    return csv_file, csv_writer

# Main function
def main():
    # Parse the command line arguments
    args = parse_args()
    
    # Read the parameters file
    params = read_params(args)
    
    # Read the configuration file
    configs = read_configs(args)

    # Create the output directory
    if os.path.exists(args.output):
        shutil.rmtree(args.output)
    os.makedirs(args.output)

    # Add the SDF3 library path to the LD_LIBRARY_PATH environment variable
    os.environ['LD_LIBRARY_PATH'] = configs['sdf3_path'] + '/build/release/Linux/lib'

    # Prepare the CSV file
    csv_file, csv_writer = prepare_csv_file(args, params)
    
    # Run the experiments
    run_experiments(args, params, configs, csv_writer)

    # Close the CSV file
    csv_file.close()

# Entry point of the script
if __name__ == "__main__":
    main()
