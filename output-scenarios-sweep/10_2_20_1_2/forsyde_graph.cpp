#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
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
    const tuple<vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
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
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<21;j++)
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

void a3_func(tuple<vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
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

void a4_func(tuple<vector<array<int,1>>, vector<array<int,4>>>& out,
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<22;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void detectorcds_func(int& new_scenario,
    const unsigned int& previous_scenario,
    const tuple<>& inp) {
    // make a state machine for the detector that depending on the previous scenario transitions to a new scenario
    switch(previous_scenario) {
        case 0: {
            unsigned int trans_dests[] = {0};
            new_scenario = trans_dests[rand()%1];
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 1, 1, 2, 2, 1, 2, 3, 2, 1}}};

void detectorkss_func(tuple<vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>>& out,
    const unsigned int& current_scenario,
    const tuple<>& inp) {
    get<0>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][0],current_scenario);
    get<1>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][1],current_scenario);
    get<2>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][2],current_scenario);
    get<3>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][3],current_scenario);
    get<4>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][4],current_scenario);
    get<5>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][5],current_scenario);
    get<6>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][6],current_scenario);
    get<7>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][7],current_scenario);
    get<8>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][8],current_scenario);
    get<9>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][9],current_scenario);
}

SC_MODULE(sdf3_graph_repeatitions) {
    SC_CTOR(sdf3_graph_repeatitions) {
        auto ch0 = new SADF::signal<array<int,2>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,1>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,1>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,1>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,2>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,1>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,3>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,1>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,3>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,2>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,4>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,3>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,1>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,3>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,2>>("ch15", 16);
        auto a0_detectorsig = new SADF::signal<unsigned int>("a0_detectorsig", 16);
        auto a1_detectorsig = new SADF::signal<unsigned int>("a1_detectorsig", 16);
        auto a2_detectorsig = new SADF::signal<unsigned int>("a2_detectorsig", 16);
        auto a3_detectorsig = new SADF::signal<unsigned int>("a3_detectorsig", 16);
        auto a4_detectorsig = new SADF::signal<unsigned int>("a4_detectorsig", 16);
        auto a5_detectorsig = new SADF::signal<unsigned int>("a5_detectorsig", 16);
        auto a6_detectorsig = new SADF::signal<unsigned int>("a6_detectorsig", 16);
        auto a7_detectorsig = new SADF::signal<unsigned int>("a7_detectorsig", 16);
        auto a8_detectorsig = new SADF::signal<unsigned int>("a8_detectorsig", 16);
        auto a9_detectorsig = new SADF::signal<unsigned int>("a9_detectorsig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,1>>("ch5_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,3>>("ch6_delaysig", 16);
        auto ch7_delaysig = new SADF::signal<array<int,3>>("ch7_delaysig", 16);
        auto ch10_delaysig = new SADF::signal<array<int,2>>("ch10_delaysig", 16);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,1>{}, 4, *ch5_delaysig, *ch5);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,3>{}, 6, *ch6_delaysig, *ch6);
        auto ch7_delay = SADF::make_delayn("ch7_delay", array<int,3>{}, 6, *ch7_delaysig, *ch7);
        auto ch10_delay = SADF::make_delayn("ch10_delay", array<int,2>{}, 1, *ch10_delaysig, *ch10);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{1, 2}, {1}}}}, tie(*ch1), *a0_detectorsig, tie( *ch0, *ch13));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{2}, {2}}}}, tie(*ch0), *a1_detectorsig, tie( *ch3));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2}, {1, 2}}}}, tie(*ch9, *ch2), *a2_detectorsig, tie( *ch1));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{1, 1}, {2}}}}, tie(*ch5), *a3_detectorsig, tie( *ch2, *ch4));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1}, {1, 2}}}}, tie(*ch3, *ch11), *a4_detectorsig, tie( *ch15));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{1}, {2, 2}}}}, tie(*ch15, *ch4), *a5_detectorsig, tie( *ch10_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{2, 2, 3}, {1, 2, 2}}}}, tie(*ch8, *ch13, *ch12), *a6_detectorsig, tie( *ch5_delaysig, *ch11, *ch6_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{2}, {2, 2}}}}, tie(*ch7, *ch6), *a7_detectorsig, tie( *ch14));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{3, 2}, {3}}}}, tie(*ch14), *a8_detectorsig, tie( *ch7_delaysig, *ch12));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{2, 1}, {1}}}}, tie(*ch10), *a9_detectorsig, tie( *ch8, *ch9));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 1, 1, 2, 2, 1, 2, 3, 2, 1}}}, 0, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
