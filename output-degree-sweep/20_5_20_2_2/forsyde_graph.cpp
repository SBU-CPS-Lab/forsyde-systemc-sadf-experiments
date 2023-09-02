#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a0_func iter: "<<i++<<std::endl;
}

void a1_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<21;j++)
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a11_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a13_func iter: "<<i++<<std::endl;
}

void a14_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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

void a17_func(tuple<vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a18_func iter: "<<i++<<std::endl;
}

void a19_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, 2, 1, 1}},{1,{1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, 2, 1, 1}}};

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
        auto ch1 = new SADF::signal<array<int,2>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,2>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,1>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,3>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,2>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,1>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,3>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,1>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,3>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,3>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,2>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,1>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,3>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,3>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,2>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,2>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,2>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,2>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,3>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,3>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,2>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,1>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,3>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,4>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,3>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,2>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,2>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,3>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,2>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,2>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,3>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,2>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,3>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,2>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,2>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,2>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,2>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,1>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,4>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,2>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,2>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,2>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,2>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,3>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,2>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,3>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,3>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,3>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,2>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,3>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,3>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,1>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,4>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,4>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,3>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,1>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,3>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,2>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,2>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,1>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,2>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,3>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,1>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,4>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,1>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,3>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,3>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,2>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,1>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,3>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,2>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,2>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,2>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,2>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,2>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,2>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,3>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,2>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,2>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,1>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,2>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,1>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,1>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,2>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,2>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,4>>("ch89", 16);
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
        auto ch3_delaysig = new SADF::signal<array<int,2>>("ch3_delaysig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,3>>("ch5_delaysig", 16);
        auto ch9_delaysig = new SADF::signal<array<int,3>>("ch9_delaysig", 16);
        auto ch11_delaysig = new SADF::signal<array<int,3>>("ch11_delaysig", 16);
        auto ch12_delaysig = new SADF::signal<array<int,3>>("ch12_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,1>>("ch14_delaysig", 16);
        auto ch15_delaysig = new SADF::signal<array<int,3>>("ch15_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,3>>("ch16_delaysig", 16);
        auto ch17_delaysig = new SADF::signal<array<int,2>>("ch17_delaysig", 16);
        auto ch19_delaysig = new SADF::signal<array<int,2>>("ch19_delaysig", 16);
        auto ch20_delaysig = new SADF::signal<array<int,2>>("ch20_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,2>>("ch28_delaysig", 16);
        auto ch32_delaysig = new SADF::signal<array<int,2>>("ch32_delaysig", 16);
        auto ch35_delaysig = new SADF::signal<array<int,2>>("ch35_delaysig", 16);
        auto ch41_delaysig = new SADF::signal<array<int,1>>("ch41_delaysig", 16);
        auto ch45_delaysig = new SADF::signal<array<int,2>>("ch45_delaysig", 16);
        auto ch46_delaysig = new SADF::signal<array<int,2>>("ch46_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,3>>("ch47_delaysig", 16);
        auto ch49_delaysig = new SADF::signal<array<int,3>>("ch49_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,3>>("ch51_delaysig", 16);
        auto ch53_delaysig = new SADF::signal<array<int,3>>("ch53_delaysig", 16);
        auto ch54_delaysig = new SADF::signal<array<int,3>>("ch54_delaysig", 16);
        auto ch56_delaysig = new SADF::signal<array<int,4>>("ch56_delaysig", 16);
        auto ch57_delaysig = new SADF::signal<array<int,4>>("ch57_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,3>>("ch58_delaysig", 16);
        auto ch59_delaysig = new SADF::signal<array<int,1>>("ch59_delaysig", 16);
        auto ch60_delaysig = new SADF::signal<array<int,3>>("ch60_delaysig", 16);
        auto ch62_delaysig = new SADF::signal<array<int,2>>("ch62_delaysig", 16);
        auto ch63_delaysig = new SADF::signal<array<int,1>>("ch63_delaysig", 16);
        auto ch64_delaysig = new SADF::signal<array<int,2>>("ch64_delaysig", 16);
        auto ch65_delaysig = new SADF::signal<array<int,3>>("ch65_delaysig", 16);
        auto ch66_delaysig = new SADF::signal<array<int,1>>("ch66_delaysig", 16);
        auto ch67_delaysig = new SADF::signal<array<int,4>>("ch67_delaysig", 16);
        auto ch72_delaysig = new SADF::signal<array<int,1>>("ch72_delaysig", 16);
        auto ch73_delaysig = new SADF::signal<array<int,3>>("ch73_delaysig", 16);
        auto ch75_delaysig = new SADF::signal<array<int,2>>("ch75_delaysig", 16);
        auto ch78_delaysig = new SADF::signal<array<int,2>>("ch78_delaysig", 16);
        auto ch80_delaysig = new SADF::signal<array<int,3>>("ch80_delaysig", 16);
        auto ch81_delaysig = new SADF::signal<array<int,2>>("ch81_delaysig", 16);
        auto ch82_delaysig = new SADF::signal<array<int,2>>("ch82_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,1>>("ch83_delaysig", 16);
        auto ch84_delaysig = new SADF::signal<array<int,2>>("ch84_delaysig", 16);
        auto ch86_delaysig = new SADF::signal<array<int,1>>("ch86_delaysig", 16);
        auto ch88_delaysig = new SADF::signal<array<int,2>>("ch88_delaysig", 16);
        auto ch3_delay = SADF::make_delayn("ch3_delay", array<int,2>{}, 1, *ch3_delaysig, *ch3);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,3>{}, 4, *ch5_delaysig, *ch5);
        auto ch9_delay = SADF::make_delayn("ch9_delay", array<int,3>{}, 2, *ch9_delaysig, *ch9);
        auto ch11_delay = SADF::make_delayn("ch11_delay", array<int,3>{}, 4, *ch11_delaysig, *ch11);
        auto ch12_delay = SADF::make_delayn("ch12_delay", array<int,3>{}, 4, *ch12_delaysig, *ch12);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,1>{}, 2, *ch14_delaysig, *ch14);
        auto ch15_delay = SADF::make_delayn("ch15_delay", array<int,3>{}, 3, *ch15_delaysig, *ch15);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,3>{}, 6, *ch16_delaysig, *ch16);
        auto ch17_delay = SADF::make_delayn("ch17_delay", array<int,2>{}, 2, *ch17_delaysig, *ch17);
        auto ch19_delay = SADF::make_delayn("ch19_delay", array<int,2>{}, 4, *ch19_delaysig, *ch19);
        auto ch20_delay = SADF::make_delayn("ch20_delay", array<int,2>{}, 2, *ch20_delaysig, *ch20);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,2>{}, 2, *ch28_delaysig, *ch28);
        auto ch32_delay = SADF::make_delayn("ch32_delay", array<int,2>{}, 6, *ch32_delaysig, *ch32);
        auto ch35_delay = SADF::make_delayn("ch35_delay", array<int,2>{}, 2, *ch35_delaysig, *ch35);
        auto ch41_delay = SADF::make_delayn("ch41_delay", array<int,1>{}, 2, *ch41_delaysig, *ch41);
        auto ch45_delay = SADF::make_delayn("ch45_delay", array<int,2>{}, 2, *ch45_delaysig, *ch45);
        auto ch46_delay = SADF::make_delayn("ch46_delay", array<int,2>{}, 4, *ch46_delaysig, *ch46);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,3>{}, 4, *ch47_delaysig, *ch47);
        auto ch49_delay = SADF::make_delayn("ch49_delay", array<int,3>{}, 1, *ch49_delaysig, *ch49);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,3>{}, 4, *ch51_delaysig, *ch51);
        auto ch53_delay = SADF::make_delayn("ch53_delay", array<int,3>{}, 4, *ch53_delaysig, *ch53);
        auto ch54_delay = SADF::make_delayn("ch54_delay", array<int,3>{}, 4, *ch54_delaysig, *ch54);
        auto ch56_delay = SADF::make_delayn("ch56_delay", array<int,4>{}, 4, *ch56_delaysig, *ch56);
        auto ch57_delay = SADF::make_delayn("ch57_delay", array<int,4>{}, 2, *ch57_delaysig, *ch57);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,3>{}, 2, *ch58_delaysig, *ch58);
        auto ch59_delay = SADF::make_delayn("ch59_delay", array<int,1>{}, 2, *ch59_delaysig, *ch59);
        auto ch60_delay = SADF::make_delayn("ch60_delay", array<int,3>{}, 4, *ch60_delaysig, *ch60);
        auto ch62_delay = SADF::make_delayn("ch62_delay", array<int,2>{}, 4, *ch62_delaysig, *ch62);
        auto ch63_delay = SADF::make_delayn("ch63_delay", array<int,1>{}, 2, *ch63_delaysig, *ch63);
        auto ch64_delay = SADF::make_delayn("ch64_delay", array<int,2>{}, 2, *ch64_delaysig, *ch64);
        auto ch65_delay = SADF::make_delayn("ch65_delay", array<int,3>{}, 2, *ch65_delaysig, *ch65);
        auto ch66_delay = SADF::make_delayn("ch66_delay", array<int,1>{}, 2, *ch66_delaysig, *ch66);
        auto ch67_delay = SADF::make_delayn("ch67_delay", array<int,4>{}, 2, *ch67_delaysig, *ch67);
        auto ch72_delay = SADF::make_delayn("ch72_delay", array<int,1>{}, 1, *ch72_delaysig, *ch72);
        auto ch73_delay = SADF::make_delayn("ch73_delay", array<int,3>{}, 1, *ch73_delaysig, *ch73);
        auto ch75_delay = SADF::make_delayn("ch75_delay", array<int,2>{}, 1, *ch75_delaysig, *ch75);
        auto ch78_delay = SADF::make_delayn("ch78_delay", array<int,2>{}, 2, *ch78_delaysig, *ch78);
        auto ch80_delay = SADF::make_delayn("ch80_delay", array<int,3>{}, 9, *ch80_delaysig, *ch80);
        auto ch81_delay = SADF::make_delayn("ch81_delay", array<int,2>{}, 1, *ch81_delaysig, *ch81);
        auto ch82_delay = SADF::make_delayn("ch82_delay", array<int,2>{}, 4, *ch82_delaysig, *ch82);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,1>{}, 2, *ch83_delaysig, *ch83);
        auto ch84_delay = SADF::make_delayn("ch84_delay", array<int,2>{}, 4, *ch84_delaysig, *ch84);
        auto ch86_delay = SADF::make_delayn("ch86_delay", array<int,1>{}, 1, *ch86_delaysig, *ch86);
        auto ch88_delay = SADF::make_delayn("ch88_delay", array<int,2>{}, 2, *ch88_delaysig, *ch88);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{1, 1, 2, 2, 2, 1}, {2, 1, 1, 1, 1}}}, {1, {{1, 1, 2, 2, 2, 1}, {2, 1, 1, 1, 1}}}}, tie(*ch28, *ch75, *ch3, *ch86, *ch72), *a0_detectorsig, tie( *ch21, *ch61, *ch9_delaysig, *ch1, *ch0, *ch72_delaysig));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 1, 1, 2, 1}, {2, 2, 1, 2, 1, 2}}}, {1, {{1, 1, 1, 2, 1}, {2, 2, 1, 2, 1, 2}}}}, tie(*ch82, *ch47, *ch64, *ch34, *ch0, *ch84), *a1_detectorsig, tie( *ch2, *ch44, *ch31, *ch60_delaysig, *ch28_delaysig));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2, 2, 2, 2, 1}, {1, 2, 1, 1}}}, {1, {{2, 2, 2, 2, 1}, {1, 2, 1, 1}}}}, tie(*ch18, *ch12, *ch1, *ch68), *a2_detectorsig, tie( *ch5_delaysig, *ch56_delaysig, *ch11_delaysig, *ch53_delaysig, *ch65_delaysig));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 2, 1, 1}, {2, 1, 2, 2, 2}}}, {1, {{2, 2, 1, 1}, {2, 1, 2, 2, 2}}}}, tie(*ch79, *ch30, *ch22, *ch2, *ch42), *a3_detectorsig, tie( *ch68, *ch59_delaysig, *ch70, *ch49_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 2, 1, 2, 2, 1}, {2, 2, 1, 2, 1}}}, {1, {{1, 2, 1, 2, 2, 1}, {2, 2, 1, 2, 1}}}}, tie(*ch78, *ch55, *ch49, *ch63, *ch21), *a4_detectorsig, tie( *ch8, *ch64_delaysig, *ch3_delaysig, *ch4, *ch6, *ch24));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{1, 1, 2, 1}, {2, 1, 1, 2}}}, {1, {{1, 1, 2, 1}, {2, 1, 1, 2}}}}, tie(*ch38, *ch4, *ch58, *ch26), *a5_detectorsig, tie( *ch63_delaysig, *ch7, *ch10, *ch35_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{1, 1, 2, 1, 2}, {2, 2, 1, 2}}}, {1, {{1, 1, 2, 1, 2}, {2, 2, 1, 2}}}}, tie(*ch5, *ch29, *ch89, *ch37), *a6_detectorsig, tie( *ch22, *ch78_delaysig, *ch77, *ch79, *ch84_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{2, 2, 2}, {2, 2, 1, 1}}}, {1, {{2, 2, 2}, {2, 2, 1, 1}}}}, tie(*ch23, *ch25, *ch6, *ch45), *a7_detectorsig, tie( *ch62_delaysig, *ch13, *ch29));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{1, 2, 1, 2, 3}, {1, 2, 3, 3}}}, {1, {{1, 2, 1, 2, 3}, {1, 2, 3, 3}}}}, tie(*ch73, *ch7, *ch36, *ch74), *a8_detectorsig, tie( *ch50, *ch39, *ch30, *ch45_delaysig, *ch15_delaysig));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{2, 1, 1}, {1, 1, 2, 1, 2}}}, {1, {{2, 1, 1}, {1, 1, 2, 1, 2}}}}, tie(*ch8, *ch70, *ch35, *ch81, *ch57), *a9_detectorsig, tie( *ch67_delaysig, *ch73_delaysig, *ch48));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 2, 2, 2, 2}, {2, 1, 1, 1, 2}}}, {1, {{2, 2, 2, 2, 2}, {2, 1, 1, 1, 2}}}}, tie(*ch62, *ch17, *ch59, *ch9, *ch51), *a10_detectorsig, tie( *ch23, *ch25, *ch34, *ch37, *ch87));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{2, 2, 1}, {2, 2, 2, 1, 2}}}, {1, {{2, 2, 1}, {2, 2, 2, 1, 2}}}}, tie(*ch10, *ch53, *ch71, *ch41, *ch56), *a11_detectorsig, tie( *ch69, *ch82_delaysig, *ch52));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{2, 1, 1, 2}, {2, 2, 2, 1}}}, {1, {{2, 1, 1, 2}, {2, 2, 2, 1}}}}, tie(*ch11, *ch40, *ch87, *ch39), *a12_detectorsig, tie( *ch47_delaysig, *ch14_delaysig, *ch88_delaysig, *ch71));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{1, 2, 2, 2, 2, 1}, {2, 2, 2, 1, 1}}}, {1, {{1, 2, 2, 2, 2, 1}, {2, 2, 2, 1, 1}}}}, tie(*ch60, *ch19, *ch46, *ch20, *ch66), *a13_detectorsig, tie( *ch27, *ch12_delaysig, *ch40, *ch33, *ch26, *ch55));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{2, 2, 2, 1, 1, 2}, {2, 2, 2, 2, 2, 1}}}, {1, {{2, 2, 2, 1, 1, 2}, {2, 2, 2, 2, 2, 1}}}}, tie(*ch77, *ch69, *ch33, *ch54, *ch13, *ch67), *a14_detectorsig, tie( *ch51_delaysig, *ch46_delaysig, *ch54_delaysig, *ch57_delaysig, *ch85, *ch19_delaysig));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{2, 1, 2, 2}, {2, 1, 2, 2, 1, 2}}}, {1, {{2, 1, 2, 2}, {2, 1, 2, 2, 1, 2}}}}, tie(*ch85, *ch61, *ch14, *ch27, *ch48, *ch88), *a15_detectorsig, tie( *ch20_delaysig, *ch81_delaysig, *ch66_delaysig, *ch58_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{2, 1, 3, 1}, {3, 2, 1}}}, {1, {{2, 1, 3, 1}, {3, 2, 1}}}}, tie(*ch80, *ch16, *ch15), *a16_detectorsig, tie( *ch32_delaysig, *ch74, *ch80_delaysig, *ch36));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{3, 1, 2, 1}, {1, 3}}}, {1, {{3, 1, 2, 1}, {1, 3}}}}, tie(*ch83, *ch32), *a17_detectorsig, tie( *ch16_delaysig, *ch42, *ch38, *ch43));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{2, 2, 2, 2, 1}, {2, 2, 2}}}, {1, {{2, 2, 2, 2, 1}, {2, 2, 2}}}}, tie(*ch43, *ch65, *ch31), *a18_detectorsig, tie( *ch17_delaysig, *ch89, *ch83_delaysig, *ch41_delaysig, *ch76));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{1, 2, 1}, {2, 1, 1, 1, 2}}}, {1, {{1, 2, 1}, {2, 1, 1, 1, 2}}}}, tie(*ch52, *ch24, *ch76, *ch50, *ch44), *a19_detectorsig, tie( *ch75_delaysig, *ch18, *ch86_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, 2, 1, 1}},{1,{1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, 2, 1, 1}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
