#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a0_func iter: "<<i++<<std::endl;
}

void a1_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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

void a4_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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

void a8_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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
    
    // std::cout<<"from: a10_func iter: "<<i++<<std::endl;
}

void a11_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<18;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a13_func iter: "<<i++<<std::endl;
}

void a14_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,3>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a18_func iter: "<<i++<<std::endl;
}

void a19_func(tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a19_func iter: "<<i++<<std::endl;
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{1, 2, 1, 1, 3, 3, 3, 2, 3, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 1}},{1,{1, 2, 1, 1, 3, 3, 3, 2, 3, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 1}}};

void detectorkss_func(tuple<vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>>& out,
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
    get<10>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][10],current_scenario);
    get<11>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][11],current_scenario);
    get<12>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][12],current_scenario);
    get<13>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][13],current_scenario);
    get<14>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][14],current_scenario);
    get<15>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][15],current_scenario);
    get<16>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][16],current_scenario);
    get<17>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][17],current_scenario);
    get<18>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][18],current_scenario);
    get<19>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][19],current_scenario);
}

SC_MODULE(sdf3_graph_repeatitions) {
    SC_CTOR(sdf3_graph_repeatitions) {
        auto ch0 = new SADF::signal<array<int,1>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,2>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,1>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,3>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,3>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,2>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,2>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,4>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,1>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,3>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,3>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,2>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,2>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,1>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,3>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,2>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,2>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,3>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,2>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,3>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,2>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,2>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,3>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,2>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,1>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,1>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,4>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,2>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,4>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,2>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,2>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,3>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,3>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,3>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,3>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,3>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,2>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,2>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,4>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,2>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,2>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,2>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,3>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,2>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,3>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,4>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,3>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,2>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,4>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,3>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,2>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,2>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,2>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,2>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,3>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,1>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,3>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,3>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,3>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,2>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,4>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,3>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,3>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,2>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,2>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,2>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,1>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,2>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,2>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,3>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,2>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,1>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,3>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,1>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,2>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,2>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,2>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,3>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,2>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,2>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,1>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,3>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,3>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,1>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,1>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,1>>("ch89", 16);
        auto ch90 = new SADF::signal<array<int,4>>("ch90", 16);
        auto ch91 = new SADF::signal<array<int,1>>("ch91", 16);
        auto ch92 = new SADF::signal<array<int,3>>("ch92", 16);
        auto ch93 = new SADF::signal<array<int,2>>("ch93", 16);
        auto ch94 = new SADF::signal<array<int,1>>("ch94", 16);
        auto ch95 = new SADF::signal<array<int,3>>("ch95", 16);
        auto ch96 = new SADF::signal<array<int,3>>("ch96", 16);
        auto ch97 = new SADF::signal<array<int,2>>("ch97", 16);
        auto ch98 = new SADF::signal<array<int,3>>("ch98", 16);
        auto ch99 = new SADF::signal<array<int,3>>("ch99", 16);
        auto ch100 = new SADF::signal<array<int,2>>("ch100", 16);
        auto ch101 = new SADF::signal<array<int,1>>("ch101", 16);
        auto ch102 = new SADF::signal<array<int,1>>("ch102", 16);
        auto ch103 = new SADF::signal<array<int,2>>("ch103", 16);
        auto ch104 = new SADF::signal<array<int,2>>("ch104", 16);
        auto ch105 = new SADF::signal<array<int,3>>("ch105", 16);
        auto ch106 = new SADF::signal<array<int,3>>("ch106", 16);
        auto ch107 = new SADF::signal<array<int,1>>("ch107", 16);
        auto ch108 = new SADF::signal<array<int,2>>("ch108", 16);
        auto ch109 = new SADF::signal<array<int,2>>("ch109", 16);
        auto ch110 = new SADF::signal<array<int,2>>("ch110", 16);
        auto ch111 = new SADF::signal<array<int,4>>("ch111", 16);
        auto ch112 = new SADF::signal<array<int,1>>("ch112", 16);
        auto ch113 = new SADF::signal<array<int,2>>("ch113", 16);
        auto ch114 = new SADF::signal<array<int,3>>("ch114", 16);
        auto ch115 = new SADF::signal<array<int,4>>("ch115", 16);
        auto ch116 = new SADF::signal<array<int,4>>("ch116", 16);
        auto ch117 = new SADF::signal<array<int,1>>("ch117", 16);
        auto ch118 = new SADF::signal<array<int,3>>("ch118", 16);
        auto ch119 = new SADF::signal<array<int,2>>("ch119", 16);
        auto ch120 = new SADF::signal<array<int,3>>("ch120", 16);
        auto ch121 = new SADF::signal<array<int,1>>("ch121", 16);
        auto ch122 = new SADF::signal<array<int,2>>("ch122", 16);
        auto ch123 = new SADF::signal<array<int,3>>("ch123", 16);
        auto ch124 = new SADF::signal<array<int,2>>("ch124", 16);
        auto ch125 = new SADF::signal<array<int,1>>("ch125", 16);
        auto ch126 = new SADF::signal<array<int,2>>("ch126", 16);
        auto ch127 = new SADF::signal<array<int,3>>("ch127", 16);
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
        auto a10_detectorsig = new SADF::signal<unsigned int>("a10_detectorsig", 16);
        auto a11_detectorsig = new SADF::signal<unsigned int>("a11_detectorsig", 16);
        auto a12_detectorsig = new SADF::signal<unsigned int>("a12_detectorsig", 16);
        auto a13_detectorsig = new SADF::signal<unsigned int>("a13_detectorsig", 16);
        auto a14_detectorsig = new SADF::signal<unsigned int>("a14_detectorsig", 16);
        auto a15_detectorsig = new SADF::signal<unsigned int>("a15_detectorsig", 16);
        auto a16_detectorsig = new SADF::signal<unsigned int>("a16_detectorsig", 16);
        auto a17_detectorsig = new SADF::signal<unsigned int>("a17_detectorsig", 16);
        auto a18_detectorsig = new SADF::signal<unsigned int>("a18_detectorsig", 16);
        auto a19_detectorsig = new SADF::signal<unsigned int>("a19_detectorsig", 16);
        auto ch1_delaysig = new SADF::signal<array<int,2>>("ch1_delaysig", 16);
        auto ch2_delaysig = new SADF::signal<array<int,3>>("ch2_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,3>>("ch6_delaysig", 16);
        auto ch10_delaysig = new SADF::signal<array<int,4>>("ch10_delaysig", 16);
        auto ch11_delaysig = new SADF::signal<array<int,1>>("ch11_delaysig", 16);
        auto ch12_delaysig = new SADF::signal<array<int,3>>("ch12_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,2>>("ch14_delaysig", 16);
        auto ch18_delaysig = new SADF::signal<array<int,2>>("ch18_delaysig", 16);
        auto ch21_delaysig = new SADF::signal<array<int,2>>("ch21_delaysig", 16);
        auto ch22_delaysig = new SADF::signal<array<int,3>>("ch22_delaysig", 16);
        auto ch23_delaysig = new SADF::signal<array<int,2>>("ch23_delaysig", 16);
        auto ch24_delaysig = new SADF::signal<array<int,2>>("ch24_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,2>>("ch26_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,2>>("ch28_delaysig", 16);
        auto ch30_delaysig = new SADF::signal<array<int,4>>("ch30_delaysig", 16);
        auto ch31_delaysig = new SADF::signal<array<int,2>>("ch31_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,2>>("ch33_delaysig", 16);
        auto ch34_delaysig = new SADF::signal<array<int,2>>("ch34_delaysig", 16);
        auto ch35_delaysig = new SADF::signal<array<int,3>>("ch35_delaysig", 16);
        auto ch36_delaysig = new SADF::signal<array<int,3>>("ch36_delaysig", 16);
        auto ch37_delaysig = new SADF::signal<array<int,3>>("ch37_delaysig", 16);
        auto ch39_delaysig = new SADF::signal<array<int,3>>("ch39_delaysig", 16);
        auto ch40_delaysig = new SADF::signal<array<int,2>>("ch40_delaysig", 16);
        auto ch41_delaysig = new SADF::signal<array<int,2>>("ch41_delaysig", 16);
        auto ch42_delaysig = new SADF::signal<array<int,4>>("ch42_delaysig", 16);
        auto ch43_delaysig = new SADF::signal<array<int,2>>("ch43_delaysig", 16);
        auto ch46_delaysig = new SADF::signal<array<int,3>>("ch46_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,2>>("ch47_delaysig", 16);
        auto ch48_delaysig = new SADF::signal<array<int,3>>("ch48_delaysig", 16);
        auto ch49_delaysig = new SADF::signal<array<int,4>>("ch49_delaysig", 16);
        auto ch50_delaysig = new SADF::signal<array<int,3>>("ch50_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,2>>("ch51_delaysig", 16);
        auto ch52_delaysig = new SADF::signal<array<int,4>>("ch52_delaysig", 16);
        auto ch56_delaysig = new SADF::signal<array<int,2>>("ch56_delaysig", 16);
        auto ch57_delaysig = new SADF::signal<array<int,2>>("ch57_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,3>>("ch58_delaysig", 16);
        auto ch59_delaysig = new SADF::signal<array<int,1>>("ch59_delaysig", 16);
        auto ch62_delaysig = new SADF::signal<array<int,3>>("ch62_delaysig", 16);
        auto ch63_delaysig = new SADF::signal<array<int,2>>("ch63_delaysig", 16);
        auto ch66_delaysig = new SADF::signal<array<int,3>>("ch66_delaysig", 16);
        auto ch69_delaysig = new SADF::signal<array<int,2>>("ch69_delaysig", 16);
        auto ch70_delaysig = new SADF::signal<array<int,1>>("ch70_delaysig", 16);
        auto ch71_delaysig = new SADF::signal<array<int,2>>("ch71_delaysig", 16);
        auto ch72_delaysig = new SADF::signal<array<int,2>>("ch72_delaysig", 16);
        auto ch74_delaysig = new SADF::signal<array<int,2>>("ch74_delaysig", 16);
        auto ch75_delaysig = new SADF::signal<array<int,1>>("ch75_delaysig", 16);
        auto ch78_delaysig = new SADF::signal<array<int,2>>("ch78_delaysig", 16);
        auto ch80_delaysig = new SADF::signal<array<int,2>>("ch80_delaysig", 16);
        auto ch81_delaysig = new SADF::signal<array<int,3>>("ch81_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,2>>("ch83_delaysig", 16);
        auto ch85_delaysig = new SADF::signal<array<int,3>>("ch85_delaysig", 16);
        auto ch86_delaysig = new SADF::signal<array<int,3>>("ch86_delaysig", 16);
        auto ch87_delaysig = new SADF::signal<array<int,1>>("ch87_delaysig", 16);
        auto ch88_delaysig = new SADF::signal<array<int,1>>("ch88_delaysig", 16);
        auto ch90_delaysig = new SADF::signal<array<int,4>>("ch90_delaysig", 16);
        auto ch91_delaysig = new SADF::signal<array<int,1>>("ch91_delaysig", 16);
        auto ch93_delaysig = new SADF::signal<array<int,2>>("ch93_delaysig", 16);
        auto ch95_delaysig = new SADF::signal<array<int,3>>("ch95_delaysig", 16);
        auto ch96_delaysig = new SADF::signal<array<int,3>>("ch96_delaysig", 16);
        auto ch98_delaysig = new SADF::signal<array<int,3>>("ch98_delaysig", 16);
        auto ch100_delaysig = new SADF::signal<array<int,2>>("ch100_delaysig", 16);
        auto ch101_delaysig = new SADF::signal<array<int,1>>("ch101_delaysig", 16);
        auto ch102_delaysig = new SADF::signal<array<int,1>>("ch102_delaysig", 16);
        auto ch107_delaysig = new SADF::signal<array<int,1>>("ch107_delaysig", 16);
        auto ch110_delaysig = new SADF::signal<array<int,2>>("ch110_delaysig", 16);
        auto ch112_delaysig = new SADF::signal<array<int,1>>("ch112_delaysig", 16);
        auto ch114_delaysig = new SADF::signal<array<int,3>>("ch114_delaysig", 16);
        auto ch115_delaysig = new SADF::signal<array<int,4>>("ch115_delaysig", 16);
        auto ch116_delaysig = new SADF::signal<array<int,4>>("ch116_delaysig", 16);
        auto ch117_delaysig = new SADF::signal<array<int,1>>("ch117_delaysig", 16);
        auto ch118_delaysig = new SADF::signal<array<int,3>>("ch118_delaysig", 16);
        auto ch119_delaysig = new SADF::signal<array<int,2>>("ch119_delaysig", 16);
        auto ch120_delaysig = new SADF::signal<array<int,3>>("ch120_delaysig", 16);
        auto ch122_delaysig = new SADF::signal<array<int,2>>("ch122_delaysig", 16);
        auto ch123_delaysig = new SADF::signal<array<int,3>>("ch123_delaysig", 16);
        auto ch124_delaysig = new SADF::signal<array<int,2>>("ch124_delaysig", 16);
        auto ch125_delaysig = new SADF::signal<array<int,1>>("ch125_delaysig", 16);
        auto ch126_delaysig = new SADF::signal<array<int,2>>("ch126_delaysig", 16);
        auto ch127_delaysig = new SADF::signal<array<int,3>>("ch127_delaysig", 16);
        auto ch1_delay = SADF::make_delayn("ch1_delay", array<int,2>{}, 1, *ch1_delaysig, *ch1);
        auto ch2_delay = SADF::make_delayn("ch2_delay", array<int,3>{}, 1, *ch2_delaysig, *ch2);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,3>{}, 6, *ch6_delaysig, *ch6);
        auto ch10_delay = SADF::make_delayn("ch10_delay", array<int,4>{}, 2, *ch10_delaysig, *ch10);
        auto ch11_delay = SADF::make_delayn("ch11_delay", array<int,1>{}, 3, *ch11_delaysig, *ch11);
        auto ch12_delay = SADF::make_delayn("ch12_delay", array<int,3>{}, 3, *ch12_delaysig, *ch12);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,2>{}, 3, *ch14_delaysig, *ch14);
        auto ch18_delay = SADF::make_delayn("ch18_delay", array<int,2>{}, 1, *ch18_delaysig, *ch18);
        auto ch21_delay = SADF::make_delayn("ch21_delay", array<int,2>{}, 1, *ch21_delaysig, *ch21);
        auto ch22_delay = SADF::make_delayn("ch22_delay", array<int,3>{}, 3, *ch22_delaysig, *ch22);
        auto ch23_delay = SADF::make_delayn("ch23_delay", array<int,2>{}, 3, *ch23_delaysig, *ch23);
        auto ch24_delay = SADF::make_delayn("ch24_delay", array<int,2>{}, 1, *ch24_delaysig, *ch24);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,2>{}, 1, *ch26_delaysig, *ch26);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,2>{}, 3, *ch28_delaysig, *ch28);
        auto ch30_delay = SADF::make_delayn("ch30_delay", array<int,4>{}, 3, *ch30_delaysig, *ch30);
        auto ch31_delay = SADF::make_delayn("ch31_delay", array<int,2>{}, 4, *ch31_delaysig, *ch31);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,2>{}, 4, *ch33_delaysig, *ch33);
        auto ch34_delay = SADF::make_delayn("ch34_delay", array<int,2>{}, 1, *ch34_delaysig, *ch34);
        auto ch35_delay = SADF::make_delayn("ch35_delay", array<int,3>{}, 6, *ch35_delaysig, *ch35);
        auto ch36_delay = SADF::make_delayn("ch36_delay", array<int,3>{}, 9, *ch36_delaysig, *ch36);
        auto ch37_delay = SADF::make_delayn("ch37_delay", array<int,3>{}, 2, *ch37_delaysig, *ch37);
        auto ch39_delay = SADF::make_delayn("ch39_delay", array<int,3>{}, 3, *ch39_delaysig, *ch39);
        auto ch40_delay = SADF::make_delayn("ch40_delay", array<int,2>{}, 3, *ch40_delaysig, *ch40);
        auto ch41_delay = SADF::make_delayn("ch41_delay", array<int,2>{}, 4, *ch41_delaysig, *ch41);
        auto ch42_delay = SADF::make_delayn("ch42_delay", array<int,4>{}, 6, *ch42_delaysig, *ch42);
        auto ch43_delay = SADF::make_delayn("ch43_delay", array<int,2>{}, 2, *ch43_delaysig, *ch43);
        auto ch46_delay = SADF::make_delayn("ch46_delay", array<int,3>{}, 2, *ch46_delaysig, *ch46);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,2>{}, 9, *ch47_delaysig, *ch47);
        auto ch48_delay = SADF::make_delayn("ch48_delay", array<int,3>{}, 9, *ch48_delaysig, *ch48);
        auto ch49_delay = SADF::make_delayn("ch49_delay", array<int,4>{}, 1, *ch49_delaysig, *ch49);
        auto ch50_delay = SADF::make_delayn("ch50_delay", array<int,3>{}, 3, *ch50_delaysig, *ch50);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,2>{}, 3, *ch51_delaysig, *ch51);
        auto ch52_delay = SADF::make_delayn("ch52_delay", array<int,4>{}, 6, *ch52_delaysig, *ch52);
        auto ch56_delay = SADF::make_delayn("ch56_delay", array<int,2>{}, 3, *ch56_delaysig, *ch56);
        auto ch57_delay = SADF::make_delayn("ch57_delay", array<int,2>{}, 3, *ch57_delaysig, *ch57);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,3>{}, 9, *ch58_delaysig, *ch58);
        auto ch59_delay = SADF::make_delayn("ch59_delay", array<int,1>{}, 3, *ch59_delaysig, *ch59);
        auto ch62_delay = SADF::make_delayn("ch62_delay", array<int,3>{}, 2, *ch62_delaysig, *ch62);
        auto ch63_delay = SADF::make_delayn("ch63_delay", array<int,2>{}, 3, *ch63_delaysig, *ch63);
        auto ch66_delay = SADF::make_delayn("ch66_delay", array<int,3>{}, 4, *ch66_delaysig, *ch66);
        auto ch69_delay = SADF::make_delayn("ch69_delay", array<int,2>{}, 3, *ch69_delaysig, *ch69);
        auto ch70_delay = SADF::make_delayn("ch70_delay", array<int,1>{}, 1, *ch70_delaysig, *ch70);
        auto ch71_delay = SADF::make_delayn("ch71_delay", array<int,2>{}, 1, *ch71_delaysig, *ch71);
        auto ch72_delay = SADF::make_delayn("ch72_delay", array<int,2>{}, 6, *ch72_delaysig, *ch72);
        auto ch74_delay = SADF::make_delayn("ch74_delay", array<int,2>{}, 2, *ch74_delaysig, *ch74);
        auto ch75_delay = SADF::make_delayn("ch75_delay", array<int,1>{}, 3, *ch75_delaysig, *ch75);
        auto ch78_delay = SADF::make_delayn("ch78_delay", array<int,2>{}, 2, *ch78_delaysig, *ch78);
        auto ch80_delay = SADF::make_delayn("ch80_delay", array<int,2>{}, 2, *ch80_delaysig, *ch80);
        auto ch81_delay = SADF::make_delayn("ch81_delay", array<int,3>{}, 1, *ch81_delaysig, *ch81);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,2>{}, 6, *ch83_delaysig, *ch83);
        auto ch85_delay = SADF::make_delayn("ch85_delay", array<int,3>{}, 2, *ch85_delaysig, *ch85);
        auto ch86_delay = SADF::make_delayn("ch86_delay", array<int,3>{}, 2, *ch86_delaysig, *ch86);
        auto ch87_delay = SADF::make_delayn("ch87_delay", array<int,1>{}, 2, *ch87_delaysig, *ch87);
        auto ch88_delay = SADF::make_delayn("ch88_delay", array<int,1>{}, 2, *ch88_delaysig, *ch88);
        auto ch90_delay = SADF::make_delayn("ch90_delay", array<int,4>{}, 2, *ch90_delaysig, *ch90);
        auto ch91_delay = SADF::make_delayn("ch91_delay", array<int,1>{}, 9, *ch91_delaysig, *ch91);
        auto ch93_delay = SADF::make_delayn("ch93_delay", array<int,2>{}, 6, *ch93_delaysig, *ch93);
        auto ch95_delay = SADF::make_delayn("ch95_delay", array<int,3>{}, 1, *ch95_delaysig, *ch95);
        auto ch96_delay = SADF::make_delayn("ch96_delay", array<int,3>{}, 1, *ch96_delaysig, *ch96);
        auto ch98_delay = SADF::make_delayn("ch98_delay", array<int,3>{}, 9, *ch98_delaysig, *ch98);
        auto ch100_delay = SADF::make_delayn("ch100_delay", array<int,2>{}, 2, *ch100_delaysig, *ch100);
        auto ch101_delay = SADF::make_delayn("ch101_delay", array<int,1>{}, 3, *ch101_delaysig, *ch101);
        auto ch102_delay = SADF::make_delayn("ch102_delay", array<int,1>{}, 1, *ch102_delaysig, *ch102);
        auto ch107_delay = SADF::make_delayn("ch107_delay", array<int,1>{}, 3, *ch107_delaysig, *ch107);
        auto ch110_delay = SADF::make_delayn("ch110_delay", array<int,2>{}, 1, *ch110_delaysig, *ch110);
        auto ch112_delay = SADF::make_delayn("ch112_delay", array<int,1>{}, 1, *ch112_delaysig, *ch112);
        auto ch114_delay = SADF::make_delayn("ch114_delay", array<int,3>{}, 2, *ch114_delaysig, *ch114);
        auto ch115_delay = SADF::make_delayn("ch115_delay", array<int,4>{}, 1, *ch115_delaysig, *ch115);
        auto ch116_delay = SADF::make_delayn("ch116_delay", array<int,4>{}, 2, *ch116_delaysig, *ch116);
        auto ch117_delay = SADF::make_delayn("ch117_delay", array<int,1>{}, 2, *ch117_delaysig, *ch117);
        auto ch118_delay = SADF::make_delayn("ch118_delay", array<int,3>{}, 2, *ch118_delaysig, *ch118);
        auto ch119_delay = SADF::make_delayn("ch119_delay", array<int,2>{}, 2, *ch119_delaysig, *ch119);
        auto ch120_delay = SADF::make_delayn("ch120_delay", array<int,3>{}, 9, *ch120_delaysig, *ch120);
        auto ch122_delay = SADF::make_delayn("ch122_delay", array<int,2>{}, 2, *ch122_delaysig, *ch122);
        auto ch123_delay = SADF::make_delayn("ch123_delay", array<int,3>{}, 4, *ch123_delaysig, *ch123);
        auto ch124_delay = SADF::make_delayn("ch124_delay", array<int,2>{}, 4, *ch124_delaysig, *ch124);
        auto ch125_delay = SADF::make_delayn("ch125_delay", array<int,1>{}, 2, *ch125_delaysig, *ch125);
        auto ch126_delay = SADF::make_delayn("ch126_delay", array<int,2>{}, 2, *ch126_delaysig, *ch126);
        auto ch127_delay = SADF::make_delayn("ch127_delay", array<int,3>{}, 2, *ch127_delaysig, *ch127);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{1, 3, 3, 2, 1, 2}, {1, 1, 1, 3, 1, 3}}}, {1, {{1, 3, 3, 2, 1, 2}, {1, 1, 1, 3, 1, 3}}}}, tie(*ch2, *ch96, *ch1, *ch3, *ch70, *ch60), *a0_detectorsig, tie( *ch105, *ch7, *ch103, *ch0, *ch53, *ch99));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{2, 1, 1, 2, 2, 2}, {1, 1, 1, 3, 2, 1, 3}}}, {1, {{2, 1, 1, 2, 2, 2}, {1, 1, 1, 3, 2, 1, 3}}}}, tie(*ch0, *ch46, *ch65, *ch4, *ch66, *ch116, *ch77), *a1_detectorsig, tie( *ch124_delaysig, *ch117_delaysig, *ch87_delaysig, *ch66_delaysig, *ch123_delaysig, *ch41_delaysig));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{1, 2, 2, 1, 2, 3, 1}, {3, 1, 1, 1, 2, 1, 1}}}, {1, {{1, 2, 2, 1, 2, 3, 1}, {3, 1, 1, 1, 2, 1, 1}}}}, tie(*ch94, *ch34, *ch25, *ch54, *ch87, *ch20, *ch110), *a2_detectorsig, tie( *ch115_delaysig, *ch46_delaysig, *ch84, *ch110_delaysig, *ch127_delaysig, *ch28_delaysig, *ch1_delaysig));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 1, 3, 1, 1, 1}, {3, 2, 1, 2, 1, 2}}}, {1, {{2, 1, 3, 1, 1, 1}, {3, 2, 1, 2, 1, 2}}}}, tie(*ch73, *ch122, *ch95, *ch114, *ch109, *ch100), *a3_detectorsig, tie( *ch32, *ch76, *ch101_delaysig, *ch8, *ch2_delaysig, *ch95_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 1, 3, 3, 3, 2, 3}, {1, 1, 3, 1, 1, 2, 3}}}, {1, {{1, 1, 3, 3, 3, 2, 3}, {1, 1, 3, 1, 1, 2, 3}}}}, tie(*ch9, *ch28, *ch98, *ch30, *ch57, *ch93, *ch97), *a4_detectorsig, tie( *ch3, *ch75_delaysig, *ch91_delaysig, *ch98_delaysig, *ch47_delaysig, *ch72_delaysig, *ch120_delaysig));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{2, 2, 2, 3, 1, 3}, {1, 2, 1, 2, 2, 1, 2, 3}}}, {1, {{2, 2, 2, 3, 1, 3}, {1, 2, 1, 2, 2, 1, 2, 3}}}}, tie(*ch69, *ch16, *ch50, *ch38, *ch27, *ch63, *ch42, *ch5), *a5_detectorsig, tie( *ch6_delaysig, *ch4, *ch35_delaysig, *ch79, *ch23_delaysig, *ch97));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{1, 2, 2, 2, 3, 2}, {1, 1, 3, 1, 2, 3}}}, {1, {{1, 2, 2, 2, 3, 2}, {1, 1, 3, 1, 2, 3}}}}, tie(*ch82, *ch68, *ch120, *ch101, *ch52, *ch91), *a6_detectorsig, tie( *ch94, *ch77, *ch92, *ch29, *ch5, *ch67));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{1, 2, 3, 1, 1, 1}, {1, 1, 2, 3, 1, 1}}}, {1, {{1, 2, 3, 1, 1, 1}, {1, 1, 2, 3, 1, 1}}}}, tie(*ch32, *ch99, *ch33, *ch6, *ch84, *ch118), *a7_detectorsig, tie( *ch62_delaysig, *ch33_delaysig, *ch42_delaysig, *ch100_delaysig, *ch89, *ch122_delaysig));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{1, 3, 1, 1, 3, 1, 1}, {1, 1, 3, 1, 1, 1, 1}}}, {1, {{1, 3, 1, 1, 3, 1, 1}, {1, 1, 3, 1, 1, 1, 1}}}}, tie(*ch7, *ch56, *ch47, *ch14, *ch11, *ch103, *ch51), *a8_detectorsig, tie( *ch22_delaysig, *ch48_delaysig, *ch59_delaysig, *ch39_delaysig, *ch36_delaysig, *ch12_delaysig, *ch73));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{3, 1, 1, 1, 1, 1, 1, 3}, {1, 1, 2, 3, 1}}}, {1, {{3, 1, 1, 1, 1, 1, 1, 3}, {1, 1, 2, 3, 1}}}}, tie(*ch64, *ch45, *ch15, *ch19, *ch8), *a9_detectorsig, tie( *ch30_delaysig, *ch70_delaysig, *ch20, *ch24_delaysig, *ch112_delaysig, *ch96_delaysig, *ch21_delaysig, *ch57_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{1, 3, 3, 3, 1, 2, 3}, {2, 1, 2, 2, 2, 2, 1}}}, {1, {{1, 3, 3, 3, 1, 2, 3}, {2, 1, 2, 2, 2, 2, 1}}}}, tie(*ch10, *ch26, *ch119, *ch44, *ch88, *ch126, *ch71), *a10_detectorsig, tie( *ch64, *ch63_delaysig, *ch9, *ch69_delaysig, *ch81_delaysig, *ch108, *ch51_delaysig));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{1, 1, 1, 1, 1, 1}, {1, 3, 1, 1, 3, 1}}}, {1, {{1, 1, 1, 1, 1, 1}, {1, 3, 1, 1, 3, 1}}}}, tie(*ch106, *ch17, *ch86, *ch125, *ch67, *ch43), *a11_detectorsig, tie( *ch88_delaysig, *ch61, *ch37_delaysig, *ch114_delaysig, *ch10_delaysig, *ch121));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{2, 3, 1, 3, 3, 1, 1}, {1, 3, 1, 3, 3, 1}}}, {1, {{2, 3, 1, 3, 3, 1, 1}, {1, 3, 1, 3, 3, 1}}}}, tie(*ch53, *ch23, *ch13, *ch39, *ch75, *ch18), *a12_detectorsig, tie( *ch116_delaysig, *ch50_delaysig, *ch25, *ch56_delaysig, *ch11_delaysig, *ch26_delaysig, *ch102_delaysig));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{2, 2, 1, 2, 1}, {1, 2, 3, 3, 1}}}, {1, {{2, 2, 1, 2, 1}, {1, 2, 3, 3, 1}}}}, tie(*ch104, *ch89, *ch12, *ch22, *ch102), *a13_detectorsig, tie( *ch86_delaysig, *ch78_delaysig, *ch113, *ch43_delaysig, *ch49_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{2, 3, 1, 2, 1, 1, 3}, {2, 3, 1, 1, 3, 1, 3}}}, {1, {{2, 3, 1, 2, 1, 1, 3}, {2, 3, 1, 1, 3, 1, 3}}}}, tie(*ch74, *ch59, *ch112, *ch49, *ch107, *ch24, *ch40), *a14_detectorsig, tie( *ch111, *ch82, *ch13, *ch106, *ch104, *ch55, *ch68));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{2, 2, 1, 2, 3}, {2, 1, 1, 1, 1, 2}}}, {1, {{2, 2, 1, 2, 3}, {2, 1, 1, 1, 1, 2}}}}, tie(*ch37, *ch115, *ch76, *ch21, *ch113, *ch80), *a15_detectorsig, tie( *ch65, *ch125_delaysig, *ch34_delaysig, *ch90_delaysig, *ch14_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{3, 1, 1, 3, 2, 3, 1}, {3, 2, 1, 2, 2, 1}}}, {1, {{3, 1, 1, 3, 2, 3, 1}, {3, 2, 1, 2, 2, 1}}}}, tie(*ch35, *ch124, *ch90, *ch31, *ch41, *ch108), *a16_detectorsig, tie( *ch83_delaysig, *ch15, *ch126_delaysig, *ch93_delaysig, *ch31_delaysig, *ch38, *ch119_delaysig));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{3, 3, 1, 1, 3, 1}, {1, 1, 1, 3, 3, 3, 1, 2}}}, {1, {{3, 3, 1, 1, 3, 1}, {1, 1, 1, 3, 3, 3, 1, 2}}}}, tie(*ch127, *ch85, *ch111, *ch72, *ch29, *ch92, *ch78, *ch123), *a17_detectorsig, tie( *ch16, *ch27, *ch74_delaysig, *ch44, *ch52_delaysig, *ch80_delaysig));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{1, 1, 3, 2, 1, 1}, {3, 3, 3, 2, 3}}}, {1, {{1, 1, 3, 2, 1, 1}, {3, 3, 3, 2, 3}}}}, tie(*ch36, *ch48, *ch79, *ch83, *ch58), *a18_detectorsig, tie( *ch19, *ch40_delaysig, *ch58_delaysig, *ch17, *ch107_delaysig, *ch60));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{1, 2, 1, 2, 1, 1, 1}, {2, 2, 2, 1, 1, 1, 2}}}, {1, {{1, 2, 1, 2, 1, 1, 1}, {2, 2, 2, 1, 1, 1, 2}}}}, tie(*ch61, *ch121, *ch62, *ch55, *ch105, *ch81, *ch117), *a19_detectorsig, tie( *ch54, *ch85_delaysig, *ch45, *ch118_delaysig, *ch18_delaysig, *ch109, *ch71_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{1, 2, 1, 1, 3, 3, 3, 2, 3, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 1}},{1,{1, 2, 1, 1, 3, 3, 3, 2, 3, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 1}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
