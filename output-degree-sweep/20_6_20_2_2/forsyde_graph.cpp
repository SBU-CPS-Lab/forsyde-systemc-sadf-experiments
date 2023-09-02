#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a1_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a10_func iter: "<<i++<<std::endl;
}

void a11_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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

void a14_func(tuple<vector<array<int,4>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,4>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a18_func iter: "<<i++<<std::endl;
}

void a19_func(tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<21;j++)
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 2, 1, 1, 3, 1, 1, 1, 2, 3, 2, 1, 1, 1, 1, 2, 1, 3, 2, 2}},{1,{2, 2, 1, 1, 3, 1, 1, 1, 2, 3, 2, 1, 1, 1, 1, 2, 1, 3, 2, 2}}};

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
        auto ch0 = new SADF::signal<array<int,2>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,1>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,1>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,1>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,3>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,2>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,2>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,1>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,4>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,2>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,3>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,2>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,2>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,1>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,3>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,2>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,2>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,3>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,2>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,2>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,1>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,1>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,2>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,3>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,2>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,3>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,1>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,1>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,2>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,2>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,2>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,4>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,4>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,2>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,4>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,4>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,3>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,2>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,3>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,3>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,2>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,1>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,3>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,2>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,2>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,2>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,3>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,3>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,2>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,3>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,1>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,2>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,1>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,1>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,4>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,2>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,3>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,2>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,4>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,4>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,2>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,1>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,2>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,2>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,4>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,2>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,2>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,4>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,2>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,4>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,3>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,2>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,2>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,2>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,1>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,2>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,3>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,2>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,3>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,2>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,2>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,3>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,2>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,1>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,2>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,3>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,2>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,2>>("ch89", 16);
        auto ch90 = new SADF::signal<array<int,3>>("ch90", 16);
        auto ch91 = new SADF::signal<array<int,2>>("ch91", 16);
        auto ch92 = new SADF::signal<array<int,2>>("ch92", 16);
        auto ch93 = new SADF::signal<array<int,3>>("ch93", 16);
        auto ch94 = new SADF::signal<array<int,3>>("ch94", 16);
        auto ch95 = new SADF::signal<array<int,2>>("ch95", 16);
        auto ch96 = new SADF::signal<array<int,2>>("ch96", 16);
        auto ch97 = new SADF::signal<array<int,2>>("ch97", 16);
        auto ch98 = new SADF::signal<array<int,1>>("ch98", 16);
        auto ch99 = new SADF::signal<array<int,2>>("ch99", 16);
        auto ch100 = new SADF::signal<array<int,2>>("ch100", 16);
        auto ch101 = new SADF::signal<array<int,4>>("ch101", 16);
        auto ch102 = new SADF::signal<array<int,2>>("ch102", 16);
        auto ch103 = new SADF::signal<array<int,3>>("ch103", 16);
        auto ch104 = new SADF::signal<array<int,3>>("ch104", 16);
        auto ch105 = new SADF::signal<array<int,2>>("ch105", 16);
        auto ch106 = new SADF::signal<array<int,1>>("ch106", 16);
        auto ch107 = new SADF::signal<array<int,2>>("ch107", 16);
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
        auto ch4_delaysig = new SADF::signal<array<int,1>>("ch4_delaysig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,3>>("ch5_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,2>>("ch6_delaysig", 16);
        auto ch8_delaysig = new SADF::signal<array<int,3>>("ch8_delaysig", 16);
        auto ch9_delaysig = new SADF::signal<array<int,1>>("ch9_delaysig", 16);
        auto ch10_delaysig = new SADF::signal<array<int,4>>("ch10_delaysig", 16);
        auto ch12_delaysig = new SADF::signal<array<int,3>>("ch12_delaysig", 16);
        auto ch13_delaysig = new SADF::signal<array<int,2>>("ch13_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,2>>("ch14_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,3>>("ch16_delaysig", 16);
        auto ch20_delaysig = new SADF::signal<array<int,2>>("ch20_delaysig", 16);
        auto ch22_delaysig = new SADF::signal<array<int,1>>("ch22_delaysig", 16);
        auto ch24_delaysig = new SADF::signal<array<int,2>>("ch24_delaysig", 16);
        auto ch25_delaysig = new SADF::signal<array<int,3>>("ch25_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,1>>("ch28_delaysig", 16);
        auto ch29_delaysig = new SADF::signal<array<int,1>>("ch29_delaysig", 16);
        auto ch30_delaysig = new SADF::signal<array<int,2>>("ch30_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,4>>("ch33_delaysig", 16);
        auto ch34_delaysig = new SADF::signal<array<int,4>>("ch34_delaysig", 16);
        auto ch35_delaysig = new SADF::signal<array<int,2>>("ch35_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,3>>("ch38_delaysig", 16);
        auto ch39_delaysig = new SADF::signal<array<int,2>>("ch39_delaysig", 16);
        auto ch40_delaysig = new SADF::signal<array<int,3>>("ch40_delaysig", 16);
        auto ch41_delaysig = new SADF::signal<array<int,3>>("ch41_delaysig", 16);
        auto ch42_delaysig = new SADF::signal<array<int,2>>("ch42_delaysig", 16);
        auto ch45_delaysig = new SADF::signal<array<int,2>>("ch45_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,2>>("ch47_delaysig", 16);
        auto ch50_delaysig = new SADF::signal<array<int,2>>("ch50_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,3>>("ch51_delaysig", 16);
        auto ch53_delaysig = new SADF::signal<array<int,2>>("ch53_delaysig", 16);
        auto ch54_delaysig = new SADF::signal<array<int,1>>("ch54_delaysig", 16);
        auto ch55_delaysig = new SADF::signal<array<int,1>>("ch55_delaysig", 16);
        auto ch56_delaysig = new SADF::signal<array<int,4>>("ch56_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,3>>("ch58_delaysig", 16);
        auto ch60_delaysig = new SADF::signal<array<int,4>>("ch60_delaysig", 16);
        auto ch62_delaysig = new SADF::signal<array<int,2>>("ch62_delaysig", 16);
        auto ch66_delaysig = new SADF::signal<array<int,4>>("ch66_delaysig", 16);
        auto ch68_delaysig = new SADF::signal<array<int,2>>("ch68_delaysig", 16);
        auto ch69_delaysig = new SADF::signal<array<int,4>>("ch69_delaysig", 16);
        auto ch70_delaysig = new SADF::signal<array<int,2>>("ch70_delaysig", 16);
        auto ch71_delaysig = new SADF::signal<array<int,4>>("ch71_delaysig", 16);
        auto ch72_delaysig = new SADF::signal<array<int,3>>("ch72_delaysig", 16);
        auto ch75_delaysig = new SADF::signal<array<int,2>>("ch75_delaysig", 16);
        auto ch77_delaysig = new SADF::signal<array<int,2>>("ch77_delaysig", 16);
        auto ch78_delaysig = new SADF::signal<array<int,3>>("ch78_delaysig", 16);
        auto ch79_delaysig = new SADF::signal<array<int,2>>("ch79_delaysig", 16);
        auto ch82_delaysig = new SADF::signal<array<int,2>>("ch82_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,3>>("ch83_delaysig", 16);
        auto ch84_delaysig = new SADF::signal<array<int,2>>("ch84_delaysig", 16);
        auto ch85_delaysig = new SADF::signal<array<int,1>>("ch85_delaysig", 16);
        auto ch86_delaysig = new SADF::signal<array<int,2>>("ch86_delaysig", 16);
        auto ch87_delaysig = new SADF::signal<array<int,3>>("ch87_delaysig", 16);
        auto ch89_delaysig = new SADF::signal<array<int,2>>("ch89_delaysig", 16);
        auto ch91_delaysig = new SADF::signal<array<int,2>>("ch91_delaysig", 16);
        auto ch95_delaysig = new SADF::signal<array<int,2>>("ch95_delaysig", 16);
        auto ch100_delaysig = new SADF::signal<array<int,2>>("ch100_delaysig", 16);
        auto ch101_delaysig = new SADF::signal<array<int,4>>("ch101_delaysig", 16);
        auto ch103_delaysig = new SADF::signal<array<int,3>>("ch103_delaysig", 16);
        auto ch105_delaysig = new SADF::signal<array<int,2>>("ch105_delaysig", 16);
        auto ch106_delaysig = new SADF::signal<array<int,1>>("ch106_delaysig", 16);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,1>{}, 2, *ch4_delaysig, *ch4);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,3>{}, 1, *ch5_delaysig, *ch5);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,2>{}, 3, *ch6_delaysig, *ch6);
        auto ch8_delay = SADF::make_delayn("ch8_delay", array<int,3>{}, 3, *ch8_delaysig, *ch8);
        auto ch9_delay = SADF::make_delayn("ch9_delay", array<int,1>{}, 2, *ch9_delaysig, *ch9);
        auto ch10_delay = SADF::make_delayn("ch10_delay", array<int,4>{}, 3, *ch10_delaysig, *ch10);
        auto ch12_delay = SADF::make_delayn("ch12_delay", array<int,3>{}, 1, *ch12_delaysig, *ch12);
        auto ch13_delay = SADF::make_delayn("ch13_delay", array<int,2>{}, 2, *ch13_delaysig, *ch13);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,2>{}, 4, *ch14_delaysig, *ch14);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,3>{}, 3, *ch16_delaysig, *ch16);
        auto ch20_delay = SADF::make_delayn("ch20_delay", array<int,2>{}, 2, *ch20_delaysig, *ch20);
        auto ch22_delay = SADF::make_delayn("ch22_delay", array<int,1>{}, 1, *ch22_delaysig, *ch22);
        auto ch24_delay = SADF::make_delayn("ch24_delay", array<int,2>{}, 4, *ch24_delaysig, *ch24);
        auto ch25_delay = SADF::make_delayn("ch25_delay", array<int,3>{}, 2, *ch25_delaysig, *ch25);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,1>{}, 3, *ch28_delaysig, *ch28);
        auto ch29_delay = SADF::make_delayn("ch29_delay", array<int,1>{}, 1, *ch29_delaysig, *ch29);
        auto ch30_delay = SADF::make_delayn("ch30_delay", array<int,2>{}, 2, *ch30_delaysig, *ch30);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,4>{}, 2, *ch33_delaysig, *ch33);
        auto ch34_delay = SADF::make_delayn("ch34_delay", array<int,4>{}, 9, *ch34_delaysig, *ch34);
        auto ch35_delay = SADF::make_delayn("ch35_delay", array<int,2>{}, 4, *ch35_delaysig, *ch35);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,3>{}, 6, *ch38_delaysig, *ch38);
        auto ch39_delay = SADF::make_delayn("ch39_delay", array<int,2>{}, 1, *ch39_delaysig, *ch39);
        auto ch40_delay = SADF::make_delayn("ch40_delay", array<int,3>{}, 2, *ch40_delaysig, *ch40);
        auto ch41_delay = SADF::make_delayn("ch41_delay", array<int,3>{}, 2, *ch41_delaysig, *ch41);
        auto ch42_delay = SADF::make_delayn("ch42_delay", array<int,2>{}, 1, *ch42_delaysig, *ch42);
        auto ch45_delay = SADF::make_delayn("ch45_delay", array<int,2>{}, 3, *ch45_delaysig, *ch45);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,2>{}, 1, *ch47_delaysig, *ch47);
        auto ch50_delay = SADF::make_delayn("ch50_delay", array<int,2>{}, 1, *ch50_delaysig, *ch50);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,3>{}, 6, *ch51_delaysig, *ch51);
        auto ch53_delay = SADF::make_delayn("ch53_delay", array<int,2>{}, 1, *ch53_delaysig, *ch53);
        auto ch54_delay = SADF::make_delayn("ch54_delay", array<int,1>{}, 4, *ch54_delaysig, *ch54);
        auto ch55_delay = SADF::make_delayn("ch55_delay", array<int,1>{}, 1, *ch55_delaysig, *ch55);
        auto ch56_delay = SADF::make_delayn("ch56_delay", array<int,4>{}, 2, *ch56_delaysig, *ch56);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,3>{}, 6, *ch58_delaysig, *ch58);
        auto ch60_delay = SADF::make_delayn("ch60_delay", array<int,4>{}, 2, *ch60_delaysig, *ch60);
        auto ch62_delay = SADF::make_delayn("ch62_delay", array<int,2>{}, 6, *ch62_delaysig, *ch62);
        auto ch66_delay = SADF::make_delayn("ch66_delay", array<int,4>{}, 4, *ch66_delaysig, *ch66);
        auto ch68_delay = SADF::make_delayn("ch68_delay", array<int,2>{}, 2, *ch68_delaysig, *ch68);
        auto ch69_delay = SADF::make_delayn("ch69_delay", array<int,4>{}, 2, *ch69_delaysig, *ch69);
        auto ch70_delay = SADF::make_delayn("ch70_delay", array<int,2>{}, 2, *ch70_delaysig, *ch70);
        auto ch71_delay = SADF::make_delayn("ch71_delay", array<int,4>{}, 1, *ch71_delaysig, *ch71);
        auto ch72_delay = SADF::make_delayn("ch72_delay", array<int,3>{}, 3, *ch72_delaysig, *ch72);
        auto ch75_delay = SADF::make_delayn("ch75_delay", array<int,2>{}, 1, *ch75_delaysig, *ch75);
        auto ch77_delay = SADF::make_delayn("ch77_delay", array<int,2>{}, 2, *ch77_delaysig, *ch77);
        auto ch78_delay = SADF::make_delayn("ch78_delay", array<int,3>{}, 3, *ch78_delaysig, *ch78);
        auto ch79_delay = SADF::make_delayn("ch79_delay", array<int,2>{}, 3, *ch79_delaysig, *ch79);
        auto ch82_delay = SADF::make_delayn("ch82_delay", array<int,2>{}, 3, *ch82_delaysig, *ch82);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,3>{}, 1, *ch83_delaysig, *ch83);
        auto ch84_delay = SADF::make_delayn("ch84_delay", array<int,2>{}, 4, *ch84_delaysig, *ch84);
        auto ch85_delay = SADF::make_delayn("ch85_delay", array<int,1>{}, 1, *ch85_delaysig, *ch85);
        auto ch86_delay = SADF::make_delayn("ch86_delay", array<int,2>{}, 2, *ch86_delaysig, *ch86);
        auto ch87_delay = SADF::make_delayn("ch87_delay", array<int,3>{}, 2, *ch87_delaysig, *ch87);
        auto ch89_delay = SADF::make_delayn("ch89_delay", array<int,2>{}, 2, *ch89_delaysig, *ch89);
        auto ch91_delay = SADF::make_delayn("ch91_delay", array<int,2>{}, 2, *ch91_delaysig, *ch91);
        auto ch95_delay = SADF::make_delayn("ch95_delay", array<int,2>{}, 3, *ch95_delaysig, *ch95);
        auto ch100_delay = SADF::make_delayn("ch100_delay", array<int,2>{}, 2, *ch100_delaysig, *ch100);
        auto ch101_delay = SADF::make_delayn("ch101_delay", array<int,4>{}, 9, *ch101_delaysig, *ch101);
        auto ch103_delay = SADF::make_delayn("ch103_delay", array<int,3>{}, 2, *ch103_delaysig, *ch103);
        auto ch105_delay = SADF::make_delayn("ch105_delay", array<int,2>{}, 1, *ch105_delaysig, *ch105);
        auto ch106_delay = SADF::make_delayn("ch106_delay", array<int,1>{}, 6, *ch106_delaysig, *ch106);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{2, 3, 1, 2, 3, 1}, {3, 2, 2, 1, 1, 2}}}, {1, {{2, 3, 1, 2, 3, 1}, {3, 2, 2, 1, 1, 2}}}}, tie(*ch3, *ch0, *ch7, *ch63, *ch1, *ch23), *a0_detectorsig, tie( *ch24_delaysig, *ch67, *ch93, *ch65, *ch62_delaysig, *ch89_delaysig));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 2, 1, 2, 1, 1}, {1, 1, 1, 1, 1, 1}}}, {1, {{1, 2, 1, 2, 1, 1}, {1, 1, 1, 1, 1, 1}}}}, tie(*ch13, *ch70, *ch86, *ch4, *ch77, *ch40), *a1_detectorsig, tie( *ch87_delaysig, *ch14_delaysig, *ch69_delaysig, *ch0, *ch80, *ch2));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2, 1, 2, 2, 1}, {1, 1, 2, 1, 2, 2}}}, {1, {{2, 1, 2, 2, 1}, {1, 1, 2, 1, 2, 2}}}}, tie(*ch50, *ch47, *ch87, *ch26, *ch68, *ch96), *a2_detectorsig, tie( *ch1, *ch102, *ch77_delaysig, *ch63, *ch50_delaysig));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 1, 2, 3, 2}, {2, 2, 1, 1, 3}}}, {1, {{2, 1, 2, 3, 2}, {2, 2, 1, 1, 3}}}}, tie(*ch41, *ch2, *ch74, *ch42, *ch45), *a3_detectorsig, tie( *ch70_delaysig, *ch5_delaysig, *ch61, *ch64, *ch9_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{3, 1, 3, 2, 1, 1}, {2, 3, 2, 1, 1, 1}}}, {1, {{3, 1, 3, 2, 1, 1}, {2, 3, 2, 1, 1, 1}}}}, tie(*ch62, *ch88, *ch51, *ch64, *ch6, *ch73), *a4_detectorsig, tie( *ch34_delaysig, *ch45_delaysig, *ch101_delaysig, *ch3, *ch31, *ch21));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{2, 2, 1, 1, 3}, {3, 2, 1, 1, 2, 3}}}, {1, {{2, 2, 1, 1, 3}, {3, 2, 1, 1, 2, 3}}}}, tie(*ch8, *ch80, *ch90, *ch83, *ch48, *ch52), *a5_detectorsig, tie( *ch18, *ch4_delaysig, *ch83_delaysig, *ch59, *ch79_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{2, 2, 1, 1, 1, 1, 2}, {1, 3, 1, 3, 1}}}, {1, {{2, 2, 1, 1, 1, 1, 2}, {1, 3, 1, 3, 1}}}}, tie(*ch43, *ch37, *ch12, *ch78, *ch5), *a6_detectorsig, tie( *ch56_delaysig, *ch104, *ch39_delaysig, *ch53_delaysig, *ch94, *ch47_delaysig, *ch100_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{1, 3, 1, 3}, {1, 1, 1, 1, 3, 2}}}, {1, {{1, 3, 1, 3}, {1, 1, 1, 1, 3, 2}}}}, tie(*ch94, *ch75, *ch59, *ch46, *ch72, *ch93), *a7_detectorsig, tie( *ch42_delaysig, *ch95_delaysig, *ch75_delaysig, *ch6_delaysig));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{1, 1, 1, 2, 2}, {1, 2, 2, 1}}}, {1, {{1, 1, 1, 2, 2}, {1, 2, 2, 1}}}}, tie(*ch25, *ch24, *ch54, *ch20), *a8_detectorsig, tie( *ch48, *ch81, *ch96, *ch54_delaysig, *ch7));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{1, 2, 1, 1, 1}, {1, 2, 2, 1, 1, 2}}}, {1, {{1, 2, 1, 1, 1}, {1, 2, 2, 1, 1, 2}}}}, tie(*ch98, *ch57, *ch67, *ch11, *ch95, *ch107), *a9_detectorsig, tie( *ch72_delaysig, *ch58_delaysig, *ch8_delaysig, *ch10_delaysig, *ch78_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 2, 1, 2, 3}, {2, 1, 2, 2}}}, {1, {{2, 2, 1, 2, 3}, {2, 1, 2, 2}}}}, tie(*ch84, *ch9, *ch35, *ch66), *a10_detectorsig, tie( *ch35_delaysig, *ch27, *ch60_delaysig, *ch23, *ch107));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{3, 2, 2, 1, 2, 2, 1, 3}, {3, 1, 3, 1, 2, 1}}}, {1, {{3, 2, 2, 1, 2, 2, 1, 3}, {3, 1, 3, 1, 2, 1}}}}, tie(*ch31, *ch102, *ch10, *ch15, *ch103, *ch29), *a11_detectorsig, tie( *ch82_delaysig, *ch40_delaysig, *ch25_delaysig, *ch46, *ch99, *ch92, *ch55_delaysig, *ch16_delaysig));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{3, 1, 3, 1}, {3, 2, 2, 1, 2}}}, {1, {{3, 1, 3, 1}, {3, 2, 2, 1, 2}}}}, tie(*ch21, *ch19, *ch17, *ch22, *ch91), *a12_detectorsig, tie( *ch98, *ch90, *ch11, *ch29_delaysig));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{1, 2, 1, 1, 1, 1, 2}, {1, 2, 1, 1, 1, 2}}}, {1, {{1, 2, 1, 1, 1, 1, 2}, {1, 2, 1, 1, 1, 2}}}}, tie(*ch71, *ch97, *ch85, *ch105, *ch39, *ch76), *a13_detectorsig, tie( *ch71_delaysig, *ch44, *ch22_delaysig, *ch12_delaysig, *ch105_delaysig, *ch85_delaysig, *ch86_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{3, 1, 1, 2}, {2, 2, 1, 1, 2, 1}}}, {1, {{3, 1, 1, 2}, {2, 2, 1, 1, 2, 1}}}}, tie(*ch69, *ch60, *ch55, *ch53, *ch89, *ch49), *a14_detectorsig, tie( *ch73, *ch43, *ch26, *ch13_delaysig));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{3, 3, 2, 2, 1, 1}, {1, 1, 2, 2, 1}}}, {1, {{3, 3, 2, 2, 1, 1}, {1, 1, 2, 2, 1}}}}, tie(*ch92, *ch44, *ch14, *ch65, *ch61), *a15_detectorsig, tie( *ch51_delaysig, *ch57, *ch66_delaysig, *ch84_delaysig, *ch33_delaysig, *ch30_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{2, 3, 1, 1, 2, 1}, {3, 2, 2, 2}}}, {1, {{2, 3, 1, 1, 2, 1}, {3, 2, 2, 2}}}}, tie(*ch28, *ch81, *ch33, *ch30), *a16_detectorsig, tie( *ch20_delaysig, *ch32, *ch15, *ch74, *ch36, *ch49));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{2, 1, 3, 1, 1}, {3, 3, 1, 2, 1, 1, 1}}}, {1, {{2, 1, 3, 1, 1}, {3, 3, 1, 2, 1, 1, 1}}}}, tie(*ch34, *ch101, *ch82, *ch106, *ch79, *ch16, *ch32), *a17_detectorsig, tie( *ch38_delaysig, *ch52, *ch88, *ch37, *ch28_delaysig));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{1, 3, 1, 1}, {1, 1, 3, 2, 1}}}, {1, {{1, 3, 1, 1}, {1, 1, 3, 2, 1}}}}, tie(*ch56, *ch99, *ch38, *ch27, *ch100), *a18_detectorsig, tie( *ch19, *ch106_delaysig, *ch97, *ch17));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{1, 1, 1, 1, 1}, {1, 3, 1, 1}}}, {1, {{1, 1, 1, 1, 1}, {1, 3, 1, 1}}}}, tie(*ch36, *ch58, *ch18, *ch104), *a19_detectorsig, tie( *ch76, *ch68_delaysig, *ch103_delaysig, *ch91_delaysig, *ch41_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 2, 1, 1, 3, 1, 1, 1, 2, 3, 2, 1, 1, 1, 1, 2, 1, 3, 2, 2}},{1,{2, 2, 1, 1, 3, 1, 1, 1, 2, 3, 2, 1, 1, 1, 1, 2, 1, 3, 2, 2}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
