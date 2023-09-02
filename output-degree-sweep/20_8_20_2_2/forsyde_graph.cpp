#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a0_func iter: "<<i++<<std::endl;
}

void a1_func(tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a3_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,4>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<19;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a10_func iter: "<<i++<<std::endl;
}

void a11_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>>& inp) {
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a13_func iter: "<<i++<<std::endl;
}

void a14_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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

void a15_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<21;j++)
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>>& inp) {
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
    
    // std::cout<<"from: a18_func iter: "<<i++<<std::endl;
}

void a19_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 4, 2, 1, 2, 1, 3, 2, 1, 2, 2, 2, 2, 2, 1, 3, 1, 2, 1, 3}},{1,{2, 4, 2, 1, 2, 1, 3, 2, 1, 2, 2, 2, 2, 2, 1, 3, 1, 2, 1, 3}}};

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
        auto ch1 = new SADF::signal<array<int,1>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,3>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,3>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,4>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,2>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,4>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,2>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,2>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,2>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,4>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,2>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,3>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,3>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,3>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,1>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,2>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,1>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,3>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,2>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,2>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,2>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,4>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,2>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,3>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,1>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,1>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,2>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,3>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,2>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,1>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,2>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,3>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,1>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,2>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,2>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,1>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,1>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,3>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,3>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,3>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,4>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,2>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,3>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,3>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,2>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,3>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,2>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,3>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,2>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,2>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,1>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,3>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,2>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,4>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,3>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,2>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,2>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,2>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,1>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,2>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,2>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,2>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,3>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,3>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,2>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,2>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,2>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,3>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,1>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,1>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,2>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,2>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,2>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,2>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,4>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,2>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,3>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,2>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,2>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,2>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,1>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,1>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,3>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,3>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,3>>("ch89", 16);
        auto ch90 = new SADF::signal<array<int,2>>("ch90", 16);
        auto ch91 = new SADF::signal<array<int,3>>("ch91", 16);
        auto ch92 = new SADF::signal<array<int,1>>("ch92", 16);
        auto ch93 = new SADF::signal<array<int,2>>("ch93", 16);
        auto ch94 = new SADF::signal<array<int,3>>("ch94", 16);
        auto ch95 = new SADF::signal<array<int,1>>("ch95", 16);
        auto ch96 = new SADF::signal<array<int,4>>("ch96", 16);
        auto ch97 = new SADF::signal<array<int,2>>("ch97", 16);
        auto ch98 = new SADF::signal<array<int,2>>("ch98", 16);
        auto ch99 = new SADF::signal<array<int,2>>("ch99", 16);
        auto ch100 = new SADF::signal<array<int,2>>("ch100", 16);
        auto ch101 = new SADF::signal<array<int,2>>("ch101", 16);
        auto ch102 = new SADF::signal<array<int,1>>("ch102", 16);
        auto ch103 = new SADF::signal<array<int,1>>("ch103", 16);
        auto ch104 = new SADF::signal<array<int,3>>("ch104", 16);
        auto ch105 = new SADF::signal<array<int,2>>("ch105", 16);
        auto ch106 = new SADF::signal<array<int,2>>("ch106", 16);
        auto ch107 = new SADF::signal<array<int,2>>("ch107", 16);
        auto ch108 = new SADF::signal<array<int,3>>("ch108", 16);
        auto ch109 = new SADF::signal<array<int,3>>("ch109", 16);
        auto ch110 = new SADF::signal<array<int,3>>("ch110", 16);
        auto ch111 = new SADF::signal<array<int,2>>("ch111", 16);
        auto ch112 = new SADF::signal<array<int,2>>("ch112", 16);
        auto ch113 = new SADF::signal<array<int,4>>("ch113", 16);
        auto ch114 = new SADF::signal<array<int,2>>("ch114", 16);
        auto ch115 = new SADF::signal<array<int,2>>("ch115", 16);
        auto ch116 = new SADF::signal<array<int,1>>("ch116", 16);
        auto ch117 = new SADF::signal<array<int,1>>("ch117", 16);
        auto ch118 = new SADF::signal<array<int,3>>("ch118", 16);
        auto ch119 = new SADF::signal<array<int,3>>("ch119", 16);
        auto ch120 = new SADF::signal<array<int,3>>("ch120", 16);
        auto ch121 = new SADF::signal<array<int,2>>("ch121", 16);
        auto ch122 = new SADF::signal<array<int,2>>("ch122", 16);
        auto ch123 = new SADF::signal<array<int,2>>("ch123", 16);
        auto ch124 = new SADF::signal<array<int,2>>("ch124", 16);
        auto ch125 = new SADF::signal<array<int,2>>("ch125", 16);
        auto ch126 = new SADF::signal<array<int,2>>("ch126", 16);
        auto ch127 = new SADF::signal<array<int,2>>("ch127", 16);
        auto ch128 = new SADF::signal<array<int,2>>("ch128", 16);
        auto ch129 = new SADF::signal<array<int,1>>("ch129", 16);
        auto ch130 = new SADF::signal<array<int,2>>("ch130", 16);
        auto ch131 = new SADF::signal<array<int,2>>("ch131", 16);
        auto ch132 = new SADF::signal<array<int,4>>("ch132", 16);
        auto ch133 = new SADF::signal<array<int,1>>("ch133", 16);
        auto ch134 = new SADF::signal<array<int,1>>("ch134", 16);
        auto ch135 = new SADF::signal<array<int,2>>("ch135", 16);
        auto ch136 = new SADF::signal<array<int,2>>("ch136", 16);
        auto ch137 = new SADF::signal<array<int,2>>("ch137", 16);
        auto ch138 = new SADF::signal<array<int,2>>("ch138", 16);
        auto ch139 = new SADF::signal<array<int,2>>("ch139", 16);
        auto ch140 = new SADF::signal<array<int,3>>("ch140", 16);
        auto ch141 = new SADF::signal<array<int,2>>("ch141", 16);
        auto ch142 = new SADF::signal<array<int,2>>("ch142", 16);
        auto ch143 = new SADF::signal<array<int,3>>("ch143", 16);
        auto ch144 = new SADF::signal<array<int,1>>("ch144", 16);
        auto ch145 = new SADF::signal<array<int,2>>("ch145", 16);
        auto ch146 = new SADF::signal<array<int,2>>("ch146", 16);
        auto ch147 = new SADF::signal<array<int,3>>("ch147", 16);
        auto ch148 = new SADF::signal<array<int,3>>("ch148", 16);
        auto ch149 = new SADF::signal<array<int,2>>("ch149", 16);
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
        auto ch1_delaysig = new SADF::signal<array<int,1>>("ch1_delaysig", 16);
        auto ch2_delaysig = new SADF::signal<array<int,3>>("ch2_delaysig", 16);
        auto ch3_delaysig = new SADF::signal<array<int,3>>("ch3_delaysig", 16);
        auto ch4_delaysig = new SADF::signal<array<int,3>>("ch4_delaysig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,4>>("ch5_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,3>>("ch6_delaysig", 16);
        auto ch7_delaysig = new SADF::signal<array<int,2>>("ch7_delaysig", 16);
        auto ch8_delaysig = new SADF::signal<array<int,3>>("ch8_delaysig", 16);
        auto ch11_delaysig = new SADF::signal<array<int,2>>("ch11_delaysig", 16);
        auto ch13_delaysig = new SADF::signal<array<int,4>>("ch13_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,2>>("ch14_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,3>>("ch16_delaysig", 16);
        auto ch17_delaysig = new SADF::signal<array<int,3>>("ch17_delaysig", 16);
        auto ch18_delaysig = new SADF::signal<array<int,1>>("ch18_delaysig", 16);
        auto ch20_delaysig = new SADF::signal<array<int,1>>("ch20_delaysig", 16);
        auto ch22_delaysig = new SADF::signal<array<int,2>>("ch22_delaysig", 16);
        auto ch23_delaysig = new SADF::signal<array<int,2>>("ch23_delaysig", 16);
        auto ch24_delaysig = new SADF::signal<array<int,2>>("ch24_delaysig", 16);
        auto ch25_delaysig = new SADF::signal<array<int,4>>("ch25_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,2>>("ch26_delaysig", 16);
        auto ch29_delaysig = new SADF::signal<array<int,1>>("ch29_delaysig", 16);
        auto ch30_delaysig = new SADF::signal<array<int,1>>("ch30_delaysig", 16);
        auto ch31_delaysig = new SADF::signal<array<int,2>>("ch31_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,2>>("ch33_delaysig", 16);
        auto ch34_delaysig = new SADF::signal<array<int,1>>("ch34_delaysig", 16);
        auto ch35_delaysig = new SADF::signal<array<int,2>>("ch35_delaysig", 16);
        auto ch36_delaysig = new SADF::signal<array<int,3>>("ch36_delaysig", 16);
        auto ch37_delaysig = new SADF::signal<array<int,1>>("ch37_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,2>>("ch38_delaysig", 16);
        auto ch39_delaysig = new SADF::signal<array<int,2>>("ch39_delaysig", 16);
        auto ch40_delaysig = new SADF::signal<array<int,1>>("ch40_delaysig", 16);
        auto ch44_delaysig = new SADF::signal<array<int,3>>("ch44_delaysig", 16);
        auto ch45_delaysig = new SADF::signal<array<int,4>>("ch45_delaysig", 16);
        auto ch46_delaysig = new SADF::signal<array<int,2>>("ch46_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,3>>("ch47_delaysig", 16);
        auto ch48_delaysig = new SADF::signal<array<int,3>>("ch48_delaysig", 16);
        auto ch49_delaysig = new SADF::signal<array<int,2>>("ch49_delaysig", 16);
        auto ch50_delaysig = new SADF::signal<array<int,3>>("ch50_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,2>>("ch51_delaysig", 16);
        auto ch53_delaysig = new SADF::signal<array<int,2>>("ch53_delaysig", 16);
        auto ch55_delaysig = new SADF::signal<array<int,1>>("ch55_delaysig", 16);
        auto ch56_delaysig = new SADF::signal<array<int,3>>("ch56_delaysig", 16);
        auto ch57_delaysig = new SADF::signal<array<int,2>>("ch57_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,4>>("ch58_delaysig", 16);
        auto ch61_delaysig = new SADF::signal<array<int,2>>("ch61_delaysig", 16);
        auto ch62_delaysig = new SADF::signal<array<int,2>>("ch62_delaysig", 16);
        auto ch63_delaysig = new SADF::signal<array<int,1>>("ch63_delaysig", 16);
        auto ch65_delaysig = new SADF::signal<array<int,2>>("ch65_delaysig", 16);
        auto ch67_delaysig = new SADF::signal<array<int,3>>("ch67_delaysig", 16);
        auto ch68_delaysig = new SADF::signal<array<int,3>>("ch68_delaysig", 16);
        auto ch69_delaysig = new SADF::signal<array<int,2>>("ch69_delaysig", 16);
        auto ch70_delaysig = new SADF::signal<array<int,2>>("ch70_delaysig", 16);
        auto ch73_delaysig = new SADF::signal<array<int,1>>("ch73_delaysig", 16);
        auto ch74_delaysig = new SADF::signal<array<int,1>>("ch74_delaysig", 16);
        auto ch76_delaysig = new SADF::signal<array<int,2>>("ch76_delaysig", 16);
        auto ch77_delaysig = new SADF::signal<array<int,2>>("ch77_delaysig", 16);
        auto ch80_delaysig = new SADF::signal<array<int,2>>("ch80_delaysig", 16);
        auto ch81_delaysig = new SADF::signal<array<int,3>>("ch81_delaysig", 16);
        auto ch82_delaysig = new SADF::signal<array<int,2>>("ch82_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,2>>("ch83_delaysig", 16);
        auto ch84_delaysig = new SADF::signal<array<int,2>>("ch84_delaysig", 16);
        auto ch88_delaysig = new SADF::signal<array<int,3>>("ch88_delaysig", 16);
        auto ch89_delaysig = new SADF::signal<array<int,3>>("ch89_delaysig", 16);
        auto ch90_delaysig = new SADF::signal<array<int,2>>("ch90_delaysig", 16);
        auto ch91_delaysig = new SADF::signal<array<int,3>>("ch91_delaysig", 16);
        auto ch92_delaysig = new SADF::signal<array<int,1>>("ch92_delaysig", 16);
        auto ch95_delaysig = new SADF::signal<array<int,1>>("ch95_delaysig", 16);
        auto ch97_delaysig = new SADF::signal<array<int,2>>("ch97_delaysig", 16);
        auto ch101_delaysig = new SADF::signal<array<int,2>>("ch101_delaysig", 16);
        auto ch102_delaysig = new SADF::signal<array<int,1>>("ch102_delaysig", 16);
        auto ch103_delaysig = new SADF::signal<array<int,1>>("ch103_delaysig", 16);
        auto ch104_delaysig = new SADF::signal<array<int,3>>("ch104_delaysig", 16);
        auto ch105_delaysig = new SADF::signal<array<int,2>>("ch105_delaysig", 16);
        auto ch106_delaysig = new SADF::signal<array<int,2>>("ch106_delaysig", 16);
        auto ch110_delaysig = new SADF::signal<array<int,3>>("ch110_delaysig", 16);
        auto ch111_delaysig = new SADF::signal<array<int,2>>("ch111_delaysig", 16);
        auto ch112_delaysig = new SADF::signal<array<int,2>>("ch112_delaysig", 16);
        auto ch115_delaysig = new SADF::signal<array<int,2>>("ch115_delaysig", 16);
        auto ch116_delaysig = new SADF::signal<array<int,1>>("ch116_delaysig", 16);
        auto ch117_delaysig = new SADF::signal<array<int,1>>("ch117_delaysig", 16);
        auto ch120_delaysig = new SADF::signal<array<int,3>>("ch120_delaysig", 16);
        auto ch123_delaysig = new SADF::signal<array<int,2>>("ch123_delaysig", 16);
        auto ch124_delaysig = new SADF::signal<array<int,2>>("ch124_delaysig", 16);
        auto ch125_delaysig = new SADF::signal<array<int,2>>("ch125_delaysig", 16);
        auto ch126_delaysig = new SADF::signal<array<int,2>>("ch126_delaysig", 16);
        auto ch127_delaysig = new SADF::signal<array<int,2>>("ch127_delaysig", 16);
        auto ch130_delaysig = new SADF::signal<array<int,2>>("ch130_delaysig", 16);
        auto ch131_delaysig = new SADF::signal<array<int,2>>("ch131_delaysig", 16);
        auto ch132_delaysig = new SADF::signal<array<int,4>>("ch132_delaysig", 16);
        auto ch134_delaysig = new SADF::signal<array<int,1>>("ch134_delaysig", 16);
        auto ch135_delaysig = new SADF::signal<array<int,2>>("ch135_delaysig", 16);
        auto ch136_delaysig = new SADF::signal<array<int,2>>("ch136_delaysig", 16);
        auto ch137_delaysig = new SADF::signal<array<int,2>>("ch137_delaysig", 16);
        auto ch138_delaysig = new SADF::signal<array<int,2>>("ch138_delaysig", 16);
        auto ch139_delaysig = new SADF::signal<array<int,2>>("ch139_delaysig", 16);
        auto ch141_delaysig = new SADF::signal<array<int,2>>("ch141_delaysig", 16);
        auto ch143_delaysig = new SADF::signal<array<int,3>>("ch143_delaysig", 16);
        auto ch144_delaysig = new SADF::signal<array<int,1>>("ch144_delaysig", 16);
        auto ch145_delaysig = new SADF::signal<array<int,2>>("ch145_delaysig", 16);
        auto ch147_delaysig = new SADF::signal<array<int,3>>("ch147_delaysig", 16);
        auto ch1_delay = SADF::make_delayn("ch1_delay", array<int,1>{}, 8, *ch1_delaysig, *ch1);
        auto ch2_delay = SADF::make_delayn("ch2_delay", array<int,3>{}, 4, *ch2_delaysig, *ch2);
        auto ch3_delay = SADF::make_delayn("ch3_delay", array<int,3>{}, 4, *ch3_delaysig, *ch3);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,3>{}, 2, *ch4_delaysig, *ch4);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,4>{}, 6, *ch5_delaysig, *ch5);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,3>{}, 2, *ch6_delaysig, *ch6);
        auto ch7_delay = SADF::make_delayn("ch7_delay", array<int,2>{}, 2, *ch7_delaysig, *ch7);
        auto ch8_delay = SADF::make_delayn("ch8_delay", array<int,3>{}, 2, *ch8_delaysig, *ch8);
        auto ch11_delay = SADF::make_delayn("ch11_delay", array<int,2>{}, 4, *ch11_delaysig, *ch11);
        auto ch13_delay = SADF::make_delayn("ch13_delay", array<int,4>{}, 1, *ch13_delaysig, *ch13);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,2>{}, 6, *ch14_delaysig, *ch14);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,3>{}, 4, *ch16_delaysig, *ch16);
        auto ch17_delay = SADF::make_delayn("ch17_delay", array<int,3>{}, 1, *ch17_delaysig, *ch17);
        auto ch18_delay = SADF::make_delayn("ch18_delay", array<int,1>{}, 6, *ch18_delaysig, *ch18);
        auto ch20_delay = SADF::make_delayn("ch20_delay", array<int,1>{}, 2, *ch20_delaysig, *ch20);
        auto ch22_delay = SADF::make_delayn("ch22_delay", array<int,2>{}, 2, *ch22_delaysig, *ch22);
        auto ch23_delay = SADF::make_delayn("ch23_delay", array<int,2>{}, 4, *ch23_delaysig, *ch23);
        auto ch24_delay = SADF::make_delayn("ch24_delay", array<int,2>{}, 1, *ch24_delaysig, *ch24);
        auto ch25_delay = SADF::make_delayn("ch25_delay", array<int,4>{}, 6, *ch25_delaysig, *ch25);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,2>{}, 4, *ch26_delaysig, *ch26);
        auto ch29_delay = SADF::make_delayn("ch29_delay", array<int,1>{}, 2, *ch29_delaysig, *ch29);
        auto ch30_delay = SADF::make_delayn("ch30_delay", array<int,1>{}, 4, *ch30_delaysig, *ch30);
        auto ch31_delay = SADF::make_delayn("ch31_delay", array<int,2>{}, 3, *ch31_delaysig, *ch31);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,2>{}, 3, *ch33_delaysig, *ch33);
        auto ch34_delay = SADF::make_delayn("ch34_delay", array<int,1>{}, 6, *ch34_delaysig, *ch34);
        auto ch35_delay = SADF::make_delayn("ch35_delay", array<int,2>{}, 1, *ch35_delaysig, *ch35);
        auto ch36_delay = SADF::make_delayn("ch36_delay", array<int,3>{}, 2, *ch36_delaysig, *ch36);
        auto ch37_delay = SADF::make_delayn("ch37_delay", array<int,1>{}, 6, *ch37_delaysig, *ch37);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,2>{}, 2, *ch38_delaysig, *ch38);
        auto ch39_delay = SADF::make_delayn("ch39_delay", array<int,2>{}, 6, *ch39_delaysig, *ch39);
        auto ch40_delay = SADF::make_delayn("ch40_delay", array<int,1>{}, 2, *ch40_delaysig, *ch40);
        auto ch44_delay = SADF::make_delayn("ch44_delay", array<int,3>{}, 2, *ch44_delaysig, *ch44);
        auto ch45_delay = SADF::make_delayn("ch45_delay", array<int,4>{}, 4, *ch45_delaysig, *ch45);
        auto ch46_delay = SADF::make_delayn("ch46_delay", array<int,2>{}, 4, *ch46_delaysig, *ch46);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,3>{}, 3, *ch47_delaysig, *ch47);
        auto ch48_delay = SADF::make_delayn("ch48_delay", array<int,3>{}, 2, *ch48_delaysig, *ch48);
        auto ch49_delay = SADF::make_delayn("ch49_delay", array<int,2>{}, 8, *ch49_delaysig, *ch49);
        auto ch50_delay = SADF::make_delayn("ch50_delay", array<int,3>{}, 12, *ch50_delaysig, *ch50);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,2>{}, 4, *ch51_delaysig, *ch51);
        auto ch53_delay = SADF::make_delayn("ch53_delay", array<int,2>{}, 2, *ch53_delaysig, *ch53);
        auto ch55_delay = SADF::make_delayn("ch55_delay", array<int,1>{}, 4, *ch55_delaysig, *ch55);
        auto ch56_delay = SADF::make_delayn("ch56_delay", array<int,3>{}, 4, *ch56_delaysig, *ch56);
        auto ch57_delay = SADF::make_delayn("ch57_delay", array<int,2>{}, 2, *ch57_delaysig, *ch57);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,4>{}, 4, *ch58_delaysig, *ch58);
        auto ch61_delay = SADF::make_delayn("ch61_delay", array<int,2>{}, 1, *ch61_delaysig, *ch61);
        auto ch62_delay = SADF::make_delayn("ch62_delay", array<int,2>{}, 6, *ch62_delaysig, *ch62);
        auto ch63_delay = SADF::make_delayn("ch63_delay", array<int,1>{}, 2, *ch63_delaysig, *ch63);
        auto ch65_delay = SADF::make_delayn("ch65_delay", array<int,2>{}, 4, *ch65_delaysig, *ch65);
        auto ch67_delay = SADF::make_delayn("ch67_delay", array<int,3>{}, 2, *ch67_delaysig, *ch67);
        auto ch68_delay = SADF::make_delayn("ch68_delay", array<int,3>{}, 6, *ch68_delaysig, *ch68);
        auto ch69_delay = SADF::make_delayn("ch69_delay", array<int,2>{}, 6, *ch69_delaysig, *ch69);
        auto ch70_delay = SADF::make_delayn("ch70_delay", array<int,2>{}, 2, *ch70_delaysig, *ch70);
        auto ch73_delay = SADF::make_delayn("ch73_delay", array<int,1>{}, 6, *ch73_delaysig, *ch73);
        auto ch74_delay = SADF::make_delayn("ch74_delay", array<int,1>{}, 4, *ch74_delaysig, *ch74);
        auto ch76_delay = SADF::make_delayn("ch76_delay", array<int,2>{}, 2, *ch76_delaysig, *ch76);
        auto ch77_delay = SADF::make_delayn("ch77_delay", array<int,2>{}, 2, *ch77_delaysig, *ch77);
        auto ch80_delay = SADF::make_delayn("ch80_delay", array<int,2>{}, 2, *ch80_delaysig, *ch80);
        auto ch81_delay = SADF::make_delayn("ch81_delay", array<int,3>{}, 4, *ch81_delaysig, *ch81);
        auto ch82_delay = SADF::make_delayn("ch82_delay", array<int,2>{}, 6, *ch82_delaysig, *ch82);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,2>{}, 2, *ch83_delaysig, *ch83);
        auto ch84_delay = SADF::make_delayn("ch84_delay", array<int,2>{}, 4, *ch84_delaysig, *ch84);
        auto ch88_delay = SADF::make_delayn("ch88_delay", array<int,3>{}, 4, *ch88_delaysig, *ch88);
        auto ch89_delay = SADF::make_delayn("ch89_delay", array<int,3>{}, 2, *ch89_delaysig, *ch89);
        auto ch90_delay = SADF::make_delayn("ch90_delay", array<int,2>{}, 6, *ch90_delaysig, *ch90);
        auto ch91_delay = SADF::make_delayn("ch91_delay", array<int,3>{}, 6, *ch91_delaysig, *ch91);
        auto ch92_delay = SADF::make_delayn("ch92_delay", array<int,1>{}, 4, *ch92_delaysig, *ch92);
        auto ch95_delay = SADF::make_delayn("ch95_delay", array<int,1>{}, 4, *ch95_delaysig, *ch95);
        auto ch97_delay = SADF::make_delayn("ch97_delay", array<int,2>{}, 6, *ch97_delaysig, *ch97);
        auto ch101_delay = SADF::make_delayn("ch101_delay", array<int,2>{}, 4, *ch101_delaysig, *ch101);
        auto ch102_delay = SADF::make_delayn("ch102_delay", array<int,1>{}, 2, *ch102_delaysig, *ch102);
        auto ch103_delay = SADF::make_delayn("ch103_delay", array<int,1>{}, 4, *ch103_delaysig, *ch103);
        auto ch104_delay = SADF::make_delayn("ch104_delay", array<int,3>{}, 2, *ch104_delaysig, *ch104);
        auto ch105_delay = SADF::make_delayn("ch105_delay", array<int,2>{}, 12, *ch105_delaysig, *ch105);
        auto ch106_delay = SADF::make_delayn("ch106_delay", array<int,2>{}, 9, *ch106_delaysig, *ch106);
        auto ch110_delay = SADF::make_delayn("ch110_delay", array<int,3>{}, 6, *ch110_delaysig, *ch110);
        auto ch111_delay = SADF::make_delayn("ch111_delay", array<int,2>{}, 2, *ch111_delaysig, *ch111);
        auto ch112_delay = SADF::make_delayn("ch112_delay", array<int,2>{}, 4, *ch112_delaysig, *ch112);
        auto ch115_delay = SADF::make_delayn("ch115_delay", array<int,2>{}, 2, *ch115_delaysig, *ch115);
        auto ch116_delay = SADF::make_delayn("ch116_delay", array<int,1>{}, 8, *ch116_delaysig, *ch116);
        auto ch117_delay = SADF::make_delayn("ch117_delay", array<int,1>{}, 8, *ch117_delaysig, *ch117);
        auto ch120_delay = SADF::make_delayn("ch120_delay", array<int,3>{}, 2, *ch120_delaysig, *ch120);
        auto ch123_delay = SADF::make_delayn("ch123_delay", array<int,2>{}, 3, *ch123_delaysig, *ch123);
        auto ch124_delay = SADF::make_delayn("ch124_delay", array<int,2>{}, 6, *ch124_delaysig, *ch124);
        auto ch125_delay = SADF::make_delayn("ch125_delay", array<int,2>{}, 4, *ch125_delaysig, *ch125);
        auto ch126_delay = SADF::make_delayn("ch126_delay", array<int,2>{}, 6, *ch126_delaysig, *ch126);
        auto ch127_delay = SADF::make_delayn("ch127_delay", array<int,2>{}, 4, *ch127_delaysig, *ch127);
        auto ch130_delay = SADF::make_delayn("ch130_delay", array<int,2>{}, 1, *ch130_delaysig, *ch130);
        auto ch131_delay = SADF::make_delayn("ch131_delay", array<int,2>{}, 12, *ch131_delaysig, *ch131);
        auto ch132_delay = SADF::make_delayn("ch132_delay", array<int,4>{}, 2, *ch132_delaysig, *ch132);
        auto ch134_delay = SADF::make_delayn("ch134_delay", array<int,1>{}, 3, *ch134_delaysig, *ch134);
        auto ch135_delay = SADF::make_delayn("ch135_delay", array<int,2>{}, 9, *ch135_delaysig, *ch135);
        auto ch136_delay = SADF::make_delayn("ch136_delay", array<int,2>{}, 2, *ch136_delaysig, *ch136);
        auto ch137_delay = SADF::make_delayn("ch137_delay", array<int,2>{}, 6, *ch137_delaysig, *ch137);
        auto ch138_delay = SADF::make_delayn("ch138_delay", array<int,2>{}, 9, *ch138_delaysig, *ch138);
        auto ch139_delay = SADF::make_delayn("ch139_delay", array<int,2>{}, 4, *ch139_delaysig, *ch139);
        auto ch141_delay = SADF::make_delayn("ch141_delay", array<int,2>{}, 2, *ch141_delaysig, *ch141);
        auto ch143_delay = SADF::make_delayn("ch143_delay", array<int,3>{}, 1, *ch143_delaysig, *ch143);
        auto ch144_delay = SADF::make_delayn("ch144_delay", array<int,1>{}, 6, *ch144_delaysig, *ch144);
        auto ch145_delay = SADF::make_delayn("ch145_delay", array<int,2>{}, 1, *ch145_delaysig, *ch145);
        auto ch147_delay = SADF::make_delayn("ch147_delay", array<int,3>{}, 6, *ch147_delaysig, *ch147);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{1, 2, 1, 3, 1, 2, 2, 1, 4}, {1, 3, 2, 1, 2, 2}}}, {1, {{1, 2, 1, 3, 1, 2, 2, 1, 4}, {1, 3, 2, 1, 2, 2}}}}, tie(*ch54, *ch82, *ch94, *ch63, *ch129, *ch52), *a0_detectorsig, tie( *ch44_delaysig, *ch101_delaysig, *ch66, *ch5_delaysig, *ch121, *ch84_delaysig, *ch11_delaysig, *ch98, *ch0));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 1, 1, 1, 2, 3, 2}, {2, 2, 3, 2, 2, 2, 3}}}, {1, {{1, 1, 1, 1, 2, 3, 2}, {2, 2, 3, 2, 2, 2, 3}}}}, tie(*ch0, *ch117, *ch131, *ch49, *ch116, *ch43, *ch105), *a1_detectorsig, tie( *ch46_delaysig, *ch81_delaysig, *ch2_delaysig, *ch113, *ch12, *ch50_delaysig, *ch1_delaysig));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{1, 1, 2, 3, 1, 3, 1, 2, 1}, {1, 1, 2, 2, 2, 4, 3}}}, {1, {{1, 1, 2, 3, 1, 3, 1, 2, 1}, {1, 1, 2, 2, 2, 4, 3}}}}, tie(*ch21, *ch100, *ch78, *ch101, *ch42, *ch1, *ch75), *a2_detectorsig, tie( *ch4_delaysig, *ch29_delaysig, *ch3_delaysig, *ch37_delaysig, *ch83_delaysig, *ch34_delaysig, *ch136_delaysig, *ch65_delaysig, *ch38_delaysig));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 2, 2, 1, 2, 3, 1}, {2, 1, 1, 2, 2, 2, 1, 4}}}, {1, {{2, 2, 2, 1, 2, 3, 1}, {2, 1, 1, 2, 2, 2, 1, 4}}}}, tie(*ch9, *ch130, *ch61, *ch86, *ch6, *ch83, *ch96, *ch2), *a3_detectorsig, tie( *ch100, *ch107, *ch77_delaysig, *ch59, *ch54, *ch149, *ch61_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 2, 3, 2, 2, 4, 1}, {3, 2, 1, 2, 1, 2, 3, 2}}}, {1, {{1, 2, 3, 2, 2, 4, 1}, {3, 2, 1, 2, 1, 2, 3, 2}}}}, tie(*ch90, *ch3, *ch53, *ch30, *ch132, *ch85, *ch97, *ch28), *a4_detectorsig, tie( *ch141_delaysig, *ch93, *ch137_delaysig, *ch92_delaysig, *ch112_delaysig, *ch49_delaysig, *ch76_delaysig));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{3, 2, 2, 1, 2, 1, 1, 1, 2}, {3, 1, 2, 2, 2, 1, 2}}}, {1, {{3, 2, 2, 1, 2, 1, 1, 1, 2}, {3, 1, 2, 2, 2, 1, 2}}}}, tie(*ch47, *ch35, *ch4, *ch40, *ch98, *ch13, *ch140), *a5_detectorsig, tie( *ch31_delaysig, *ch48_delaysig, *ch89_delaysig, *ch41, *ch132_delaysig, *ch15, *ch17_delaysig, *ch108, *ch8_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{2, 1, 2, 2, 2, 2, 2, 2}, {1, 2, 3, 2, 3, 1, 3}}}, {1, {{2, 1, 2, 2, 2, 2, 2, 2}, {1, 2, 3, 2, 3, 1, 3}}}}, tie(*ch31, *ch144, *ch138, *ch5, *ch135, *ch33, *ch19), *a6_detectorsig, tie( *ch124_delaysig, *ch47_delaysig, *ch82_delaysig, *ch126_delaysig, *ch69_delaysig, *ch73_delaysig, *ch91_delaysig, *ch114));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{2, 2, 2, 2, 1, 1, 2}, {2, 2, 2, 1, 2, 3, 3, 1}}}, {1, {{2, 2, 2, 2, 1, 1, 2}, {2, 2, 2, 1, 2, 3, 3, 1}}}}, tie(*ch142, *ch74, *ch55, *ch80, *ch84, *ch69, *ch14, *ch99), *a7_detectorsig, tie( *ch87, *ch52, *ch51_delaysig, *ch55_delaysig, *ch7_delaysig, *ch6_delaysig, *ch42));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{1, 2, 1, 1, 3, 2, 2}, {2, 2, 4, 1, 1, 2, 2}}}, {1, {{1, 2, 1, 1, 3, 2, 2}, {2, 2, 4, 1, 1, 2, 2}}}}, tie(*ch7, *ch57, *ch46, *ch24, *ch59, *ch121, *ch136), *a8_detectorsig, tie( *ch79, *ch63_delaysig, *ch24_delaysig, *ch143_delaysig, *ch64, *ch80_delaysig, *ch10));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{2, 2, 2, 2, 2, 1, 2}, {2, 3, 1, 2, 2, 1, 1, 2, 2}}}, {1, {{2, 2, 2, 2, 2, 1, 2}, {2, 3, 1, 2, 2, 1, 1, 2, 2}}}}, tie(*ch88, *ch147, *ch48, *ch92, *ch109, *ch8, *ch111, *ch87, *ch139), *a9_detectorsig, tie( *ch16_delaysig, *ch95_delaysig, *ch103_delaysig, *ch74_delaysig, *ch58_delaysig, *ch140, *ch45_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 2, 2, 1, 2, 2, 2, 2}, {3, 3, 3, 3, 1, 3, 1, 2}}}, {1, {{2, 2, 2, 1, 2, 2, 2, 2}, {3, 3, 3, 3, 1, 3, 1, 2}}}}, tie(*ch91, *ch124, *ch126, *ch73, *ch22, *ch68, *ch77, *ch23), *a10_detectorsig, tie( *ch85, *ch129, *ch23_delaysig, *ch9, *ch119, *ch109, *ch94, *ch148));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{1, 2, 3, 2, 3, 3}, {3, 2, 1, 2, 2, 1, 3}}}, {1, {{1, 2, 3, 2, 3, 3}, {3, 2, 1, 2, 2, 1, 3}}}}, tie(*ch39, *ch127, *ch10, *ch95, *ch65, *ch36, *ch25), *a11_detectorsig, tie( *ch72, *ch88_delaysig, *ch128, *ch30_delaysig, *ch62_delaysig, *ch110_delaysig));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{3, 1, 2, 1, 1, 4, 3}, {2, 1, 2, 1, 2, 2, 2, 1, 2}}}, {1, {{3, 1, 2, 1, 1, 4, 3}, {2, 1, 2, 1, 2, 2, 2, 1, 2}}}}, tie(*ch125, *ch107, *ch11, *ch115, *ch58, *ch146, *ch26, *ch67, *ch112), *a12_detectorsig, tie( *ch27, *ch60, *ch127_delaysig, *ch40_delaysig, *ch57_delaysig, *ch117_delaysig, *ch133));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{2, 1, 1, 2, 1, 4, 2, 3, 2}, {2, 1, 4, 3, 2, 3, 2}}}, {1, {{2, 1, 1, 2, 1, 4, 2, 3, 2}, {2, 1, 4, 3, 2, 3, 2}}}}, tie(*ch93, *ch20, *ch12, *ch18, *ch119, *ch114, *ch45), *a13_detectorsig, tie( *ch56_delaysig, *ch70_delaysig, *ch32, *ch26_delaysig, *ch102_delaysig, *ch116_delaysig, *ch78, *ch144_delaysig, *ch125_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{1, 2, 2, 2, 2, 1, 1}, {2, 2, 1, 1, 4, 2, 1, 2}}}, {1, {{1, 2, 2, 2, 2, 1, 1}, {2, 2, 1, 1, 4, 2, 1, 2}}}}, tie(*ch32, *ch141, *ch108, *ch79, *ch113, *ch66, *ch145, *ch76), *a14_detectorsig, tie( *ch130_delaysig, *ch67_delaysig, *ch115_delaysig, *ch53_delaysig, *ch22_delaysig, *ch13_delaysig, *ch35_delaysig));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{2, 3, 3, 2, 3, 1, 2, 2, 3}, {1, 2, 2, 2, 3, 1, 1, 2}}}, {1, {{2, 3, 3, 2, 3, 1, 2, 2, 3}, {1, 2, 2, 2, 3, 1, 1, 2}}}}, tie(*ch64, *ch34, *ch137, *ch133, *ch106, *ch123, *ch134, *ch128), *a15_detectorsig, tie( *ch14_delaysig, *ch135_delaysig, *ch118, *ch90_delaysig, *ch106_delaysig, *ch71, *ch75, *ch39_delaysig, *ch138_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{1, 2, 2, 2, 2, 3}, {1, 2, 3, 2, 1, 2}}}, {1, {{1, 2, 2, 2, 2, 3}, {1, 2, 3, 2, 1, 2}}}}, tie(*ch41, *ch60, *ch71, *ch72, *ch15, *ch29), *a16_detectorsig, tie( *ch145_delaysig, *ch111_delaysig, *ch21, *ch20_delaysig, *ch104_delaysig, *ch123_delaysig));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{4, 2, 2, 2, 2, 1}, {1, 2, 2, 2, 1, 2, 1, 2}}}, {1, {{4, 2, 2, 2, 2, 1}, {1, 2, 2, 2, 1, 2, 1, 2}}}}, tie(*ch89, *ch148, *ch51, *ch16, *ch120, *ch103, *ch104, *ch56), *a17_detectorsig, tie( *ch43, *ch146, *ch28, *ch139_delaysig, *ch142, *ch86));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{3, 3, 2, 3, 2, 2, 1}, {2, 2, 1, 2, 2, 1, 4}}}, {1, {{3, 3, 2, 3, 2, 2, 1}, {2, 2, 1, 2, 2, 1, 4}}}}, tie(*ch102, *ch38, *ch17, *ch70, *ch44, *ch143, *ch81), *a18_detectorsig, tie( *ch122, *ch33_delaysig, *ch120_delaysig, *ch134_delaysig, *ch36_delaysig, *ch99, *ch96));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{4, 2, 3, 2, 2, 2, 2, 4}, {4, 3, 1, 2, 2, 2, 2, 1}}}, {1, {{4, 2, 3, 2, 2, 2, 2, 4}, {4, 3, 1, 2, 2, 2, 2, 1}}}}, tie(*ch50, *ch118, *ch122, *ch62, *ch110, *ch37, *ch27, *ch149), *a19_detectorsig, tie( *ch105_delaysig, *ch97_delaysig, *ch19, *ch18_delaysig, *ch25_delaysig, *ch147_delaysig, *ch68_delaysig, *ch131_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 4, 2, 1, 2, 1, 3, 2, 1, 2, 2, 2, 2, 2, 1, 3, 1, 2, 1, 3}},{1,{2, 4, 2, 1, 2, 1, 3, 2, 1, 2, 2, 2, 2, 2, 1, 3, 1, 2, 1, 3}}}, 0, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
