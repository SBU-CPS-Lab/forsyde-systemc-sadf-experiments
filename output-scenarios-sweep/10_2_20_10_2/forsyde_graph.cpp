#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<21;j++)
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
        case 2: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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

void a1_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
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
        case 2: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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

void a2_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 2: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<22;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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

void a3_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
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
        case 2: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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

void a4_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 2: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
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
        case 2: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
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
        case 2: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
        case 2: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,3>>>& out,
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
        case 1: {
            for(j=0;j<21;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 2: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<22;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
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
        case 2: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 3: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 4: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 5: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 6: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 7: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 8: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 9: {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void detectorcds_func(int& new_scenario,
    const unsigned int& previous_scenario,
    const tuple<>& inp) {
    // make a state machine for the detector that depending on the previous scenario transitions to a new scenario
    switch(previous_scenario) {
        case 0: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 1: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 2: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 3: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 4: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 5: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 6: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 7: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 8: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
            break;
        }
        case 9: {
            unsigned int trans_dests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            new_scenario = trans_dests[rand()%10];
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{1,{2, 1, 1, 3, 2, 2, 2, 1, 1, 3}},{2,{2, 1, 1, 3, 2, 2, 1, 1, 1, 3}},{3,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{4,{2, 1, 1, 3, 2, 2, 2, 1, 1, 3}},{5,{2, 1, 1, 3, 2, 2, 1, 1, 1, 3}},{6,{2, 5, 1, 3, 2, 2, 4, 1, 1, 3}},{7,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{8,{2, 2, 1, 3, 2, 2, 2, 1, 1, 3}},{9,{2, 3, 1, 3, 2, 2, 1, 1, 1, 3}}};

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
        auto ch0 = new SADF::signal<array<int,3>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,3>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,3>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,2>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,3>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,3>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,3>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,3>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,2>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,3>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,3>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,3>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,3>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,3>>("ch16", 16);
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
        auto ch4_delaysig = new SADF::signal<array<int,2>>("ch4_delaysig", 16);
        auto ch13_delaysig = new SADF::signal<array<int,3>>("ch13_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,3>>("ch14_delaysig", 16);
        auto ch15_delaysig = new SADF::signal<array<int,3>>("ch15_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,3>>("ch16_delaysig", 16);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,2>{}, 4, *ch4_delaysig, *ch4);
        auto ch13_delay = SADF::make_delayn("ch13_delay", array<int,3>{}, 3, *ch13_delaysig, *ch13);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,3>{}, 3, *ch14_delaysig, *ch14);
        auto ch15_delay = SADF::make_delayn("ch15_delay", array<int,3>{}, 9, *ch15_delaysig, *ch15);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,3>{}, 2, *ch16_delaysig, *ch16);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{3, 3}, {1, 1, 2}}}, {1, {{3, 3}, {1, 1, 2}}}, {2, {{3, 3}, {1, 1, 2}}}, {3, {{3, 3}, {1, 1, 2}}}, {4, {{3, 3}, {1, 1, 2}}}, {5, {{3, 3}, {1, 5, 2}}}, {6, {{3, 3}, {1, 1, 2}}}, {7, {{3, 3}, {1, 1, 2}}}, {8, {{3, 3}, {1, 2, 2}}}, {9, {{3, 3}, {1, 3, 2}}}}, tie(*ch16, *ch0, *ch11), *a0_detectorsig, tie( *ch2, *ch9));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{2}, {1}}}, {1, {{2}, {1}}}, {2, {{2}, {1}}}, {3, {{2}, {1}}}, {4, {{2}, {1}}}, {5, {{2}, {1}}}, {6, {{2}, {1}}}, {7, {{2}, {1}}}, {8, {{2}, {1}}}, {9, {{2}, {1}}}}, tie(*ch1), *a1_detectorsig, tie( *ch0));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2, 1, 1}, {3, 3, 3}}}, {1, {{2, 1, 1}, {3, 2, 2}}}, {2, {{2, 1, 1}, {3, 3, 3}}}, {3, {{2, 1, 1}, {3, 1, 1}}}, {4, {{2, 1, 1}, {3, 1, 1}}}, {5, {{2, 5, 1}, {3, 4, 4}}}, {6, {{2, 1, 1}, {3, 3, 3}}}, {7, {{2, 1, 1}, {3, 2, 2}}}, {8, {{2, 2, 1}, {3, 2, 2}}}, {9, {{2, 3, 1}, {3, 1, 1}}}}, tie(*ch13, *ch10, *ch12), *a2_detectorsig, tie( *ch3, *ch1, *ch7));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{1, 3}, {2, 1, 2, 3}}}, {1, {{1, 3}, {2, 1, 2, 3}}}, {2, {{1, 3}, {2, 1, 2, 3}}}, {3, {{1, 3}, {2, 1, 2, 3}}}, {4, {{1, 3}, {2, 1, 2, 3}}}, {5, {{1, 3}, {2, 1, 2, 3}}}, {6, {{1, 3}, {2, 1, 2, 3}}}, {7, {{1, 3}, {2, 1, 2, 3}}}, {8, {{1, 3}, {2, 1, 2, 3}}}, {9, {{1, 3}, {2, 1, 2, 3}}}}, tie(*ch9, *ch14, *ch2, *ch15), *a3_detectorsig, tie( *ch6, *ch15_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{2, 2}, {1}}}, {1, {{2, 2}, {1}}}, {2, {{2, 2}, {1}}}, {3, {{2, 2}, {1}}}, {4, {{2, 2}, {1}}}, {5, {{2, 2}, {1}}}, {6, {{2, 2}, {1}}}, {7, {{2, 2}, {1}}}, {8, {{2, 2}, {1}}}, {9, {{2, 2}, {1}}}}, tie(*ch3), *a4_detectorsig, tie( *ch4_delaysig, *ch11));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{3}, {2}}}, {1, {{2}, {2}}}, {2, {{3}, {2}}}, {3, {{1}, {2}}}, {4, {{1}, {2}}}, {5, {{4}, {2}}}, {6, {{3}, {2}}}, {7, {{2}, {2}}}, {8, {{2}, {2}}}, {9, {{1}, {2}}}}, tie(*ch4), *a5_detectorsig, tie( *ch5));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{1, 1}, {2}}}, {1, {{1, 1}, {2}}}, {2, {{1, 1}, {2}}}, {3, {{1, 1}, {2}}}, {4, {{1, 1}, {2}}}, {5, {{1, 1}, {2}}}, {6, {{1, 1}, {2}}}, {7, {{1, 1}, {2}}}, {8, {{1, 1}, {2}}}, {9, {{1, 1}, {2}}}}, tie(*ch5), *a6_detectorsig, tie( *ch12, *ch10));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{2, 3}, {3}}}, {1, {{2, 3}, {3}}}, {2, {{2, 3}, {3}}}, {3, {{2, 3}, {3}}}, {4, {{2, 3}, {3}}}, {5, {{2, 3}, {3}}}, {6, {{2, 3}, {3}}}, {7, {{2, 3}, {3}}}, {8, {{2, 3}, {3}}}, {9, {{2, 3}, {3}}}}, tie(*ch6), *a7_detectorsig, tie( *ch16_delaysig, *ch8));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{3}, {1}}}, {1, {{3}, {1}}}, {2, {{3}, {1}}}, {3, {{3}, {1}}}, {4, {{3}, {1}}}, {5, {{3}, {1}}}, {6, {{3}, {1}}}, {7, {{3}, {1}}}, {8, {{3}, {1}}}, {9, {{3}, {1}}}}, tie(*ch7), *a8_detectorsig, tie( *ch14_delaysig));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{1}, {1}}}, {1, {{1}, {1}}}, {2, {{1}, {1}}}, {3, {{1}, {1}}}, {4, {{1}, {1}}}, {5, {{1}, {1}}}, {6, {{1}, {1}}}, {7, {{1}, {1}}}, {8, {{1}, {1}}}, {9, {{1}, {1}}}}, tie(*ch8), *a9_detectorsig, tie( *ch13_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{1,{2, 1, 1, 3, 2, 2, 2, 1, 1, 3}},{2,{2, 1, 1, 3, 2, 2, 1, 1, 1, 3}},{3,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{4,{2, 1, 1, 3, 2, 2, 2, 1, 1, 3}},{5,{2, 1, 1, 3, 2, 2, 1, 1, 1, 3}},{6,{2, 5, 1, 3, 2, 2, 4, 1, 1, 3}},{7,{2, 1, 1, 3, 2, 2, 3, 1, 1, 3}},{8,{2, 2, 1, 3, 2, 2, 2, 1, 1, 3}},{9,{2, 3, 1, 3, 2, 2, 1, 1, 1, 3}}}, 4, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
