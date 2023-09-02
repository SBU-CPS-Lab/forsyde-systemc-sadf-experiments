#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a0_func iter: "<<i++<<std::endl;
}

void a1_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void detectorcds_func(int& new_scenario,
    const unsigned int& previous_scenario,
    const tuple<>& inp) {
    // make a state machine for the detector that depending on the previous scenario transitions to a new scenario
    switch(previous_scenario) {
        case 0: {
            unsigned int trans_dests[] = {0, 1};
            new_scenario = trans_dests[rand()%2];
            break;
        }
        case 1: {
            unsigned int trans_dests[] = {0, 1};
            new_scenario = trans_dests[rand()%2];
            break;
        }
        default: {
            ;
            break;
        }
    }
    // Increment a static variable to count the number of iterations and stop the simulation after a certain number of iterations
    static int i=0;
    if(i++==100) wait();
}
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 3, 1, 2, 3}},{1,{2, 3, 1, 2, 3}}};

void detectorkss_func(tuple<vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>>& out,
    const unsigned int& current_scenario,
    const tuple<>& inp) {
    get<0>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][0],current_scenario);
    get<1>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][1],current_scenario);
    get<2>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][2],current_scenario);
    get<3>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][3],current_scenario);
    get<4>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][4],current_scenario);
}

SC_MODULE(sdf3_graph_repeatitions) {
    SC_CTOR(sdf3_graph_repeatitions) {
        auto ch0 = new SADF::signal<array<int,2>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,2>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,1>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,2>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,2>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,3>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,1>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,3>>("ch7", 16);
        auto a0_detectorsig = new SADF::signal<unsigned int>("a0_detectorsig", 16);
        auto a1_detectorsig = new SADF::signal<unsigned int>("a1_detectorsig", 16);
        auto a2_detectorsig = new SADF::signal<unsigned int>("a2_detectorsig", 16);
        auto a3_detectorsig = new SADF::signal<unsigned int>("a3_detectorsig", 16);
        auto a4_detectorsig = new SADF::signal<unsigned int>("a4_detectorsig", 16);
        auto ch2_delaysig = new SADF::signal<array<int,1>>("ch2_delaysig", 16);
        auto ch4_delaysig = new SADF::signal<array<int,2>>("ch4_delaysig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,3>>("ch5_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,1>>("ch6_delaysig", 16);
        auto ch2_delay = SADF::make_delayn("ch2_delay", array<int,1>{}, 4, *ch2_delaysig, *ch2);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,2>{}, 4, *ch4_delaysig, *ch4);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,3>{}, 3, *ch5_delaysig, *ch5);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,1>{}, 6, *ch6_delaysig, *ch6);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{3}, {1, 2}}}, {1, {{3}, {1, 2}}}}, tie(*ch1, *ch2), *a0_detectorsig, tie( *ch0));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 2}, {2}}}, {1, {{1, 2}, {2}}}}, tie(*ch0), *a1_detectorsig, tie( *ch5_delaysig, *ch7));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2}, {3}}}, {1, {{2}, {3}}}}, tie(*ch5), *a2_detectorsig, tie( *ch1));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 3, 2}, {3, 2, 3}}}, {1, {{2, 3, 2}, {3, 2, 3}}}}, tie(*ch6, *ch4, *ch7), *a3_detectorsig, tie( *ch4_delaysig, *ch3, *ch2_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{2}, {2}}}, {1, {{2}, {2}}}}, tie(*ch3), *a4_detectorsig, tie( *ch6_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 3, 1, 2, 3}},{1,{2, 3, 1, 2, 3}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
