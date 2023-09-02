#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a1_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a2_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<22;j++)
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
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a5_func iter: "<<i++<<std::endl;
}

void a6_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<22;j++)
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

void a7_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>>& inp) {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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

void a9_func(tuple<vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a10_func iter: "<<i++<<std::endl;
}

void a11_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a13_func iter: "<<i++<<std::endl;
}

void a14_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<20;j++)
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
    
    // std::cout<<"from: a18_func iter: "<<i++<<std::endl;
}

void a19_func(tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 3, 2, 1, 2, 4, 3, 2, 1, 2, 1}},{1,{2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 3, 2, 1, 2, 4, 3, 2, 1, 2, 1}}};

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
        auto ch1 = new SADF::signal<array<int,3>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,2>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,2>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,1>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,2>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,4>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,1>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,2>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,1>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,2>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,2>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,1>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,2>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,3>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,3>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,2>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,2>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,1>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,1>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,1>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,1>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,2>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,2>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,3>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,3>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,1>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,2>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,3>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,2>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,4>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,1>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,4>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,2>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,2>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,4>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,4>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,2>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,2>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,2>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,2>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,3>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,2>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,3>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,2>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,3>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,3>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,2>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,3>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,3>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,1>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,2>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,1>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,2>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,3>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,2>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,3>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,2>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,2>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,2>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,3>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,2>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,2>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,3>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,2>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,3>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,4>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,4>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,2>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,2>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,3>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,1>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,1>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,3>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,3>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,1>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,2>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,1>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,4>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,3>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,3>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,3>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,3>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,3>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,3>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,3>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,2>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,2>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,2>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,4>>("ch89", 16);
        auto ch90 = new SADF::signal<array<int,2>>("ch90", 16);
        auto ch91 = new SADF::signal<array<int,2>>("ch91", 16);
        auto ch92 = new SADF::signal<array<int,4>>("ch92", 16);
        auto ch93 = new SADF::signal<array<int,3>>("ch93", 16);
        auto ch94 = new SADF::signal<array<int,3>>("ch94", 16);
        auto ch95 = new SADF::signal<array<int,2>>("ch95", 16);
        auto ch96 = new SADF::signal<array<int,3>>("ch96", 16);
        auto ch97 = new SADF::signal<array<int,2>>("ch97", 16);
        auto ch98 = new SADF::signal<array<int,2>>("ch98", 16);
        auto ch99 = new SADF::signal<array<int,3>>("ch99", 16);
        auto ch100 = new SADF::signal<array<int,4>>("ch100", 16);
        auto ch101 = new SADF::signal<array<int,1>>("ch101", 16);
        auto ch102 = new SADF::signal<array<int,2>>("ch102", 16);
        auto ch103 = new SADF::signal<array<int,2>>("ch103", 16);
        auto ch104 = new SADF::signal<array<int,2>>("ch104", 16);
        auto ch105 = new SADF::signal<array<int,2>>("ch105", 16);
        auto ch106 = new SADF::signal<array<int,2>>("ch106", 16);
        auto ch107 = new SADF::signal<array<int,2>>("ch107", 16);
        auto ch108 = new SADF::signal<array<int,3>>("ch108", 16);
        auto ch109 = new SADF::signal<array<int,2>>("ch109", 16);
        auto ch110 = new SADF::signal<array<int,2>>("ch110", 16);
        auto ch111 = new SADF::signal<array<int,1>>("ch111", 16);
        auto ch112 = new SADF::signal<array<int,3>>("ch112", 16);
        auto ch113 = new SADF::signal<array<int,2>>("ch113", 16);
        auto ch114 = new SADF::signal<array<int,3>>("ch114", 16);
        auto ch115 = new SADF::signal<array<int,2>>("ch115", 16);
        auto ch116 = new SADF::signal<array<int,2>>("ch116", 16);
        auto ch117 = new SADF::signal<array<int,2>>("ch117", 16);
        auto ch118 = new SADF::signal<array<int,1>>("ch118", 16);
        auto ch119 = new SADF::signal<array<int,2>>("ch119", 16);
        auto ch120 = new SADF::signal<array<int,3>>("ch120", 16);
        auto ch121 = new SADF::signal<array<int,3>>("ch121", 16);
        auto ch122 = new SADF::signal<array<int,2>>("ch122", 16);
        auto ch123 = new SADF::signal<array<int,1>>("ch123", 16);
        auto ch124 = new SADF::signal<array<int,2>>("ch124", 16);
        auto ch125 = new SADF::signal<array<int,2>>("ch125", 16);
        auto ch126 = new SADF::signal<array<int,1>>("ch126", 16);
        auto ch127 = new SADF::signal<array<int,2>>("ch127", 16);
        auto ch128 = new SADF::signal<array<int,2>>("ch128", 16);
        auto ch129 = new SADF::signal<array<int,3>>("ch129", 16);
        auto ch130 = new SADF::signal<array<int,3>>("ch130", 16);
        auto ch131 = new SADF::signal<array<int,1>>("ch131", 16);
        auto ch132 = new SADF::signal<array<int,2>>("ch132", 16);
        auto ch133 = new SADF::signal<array<int,4>>("ch133", 16);
        auto ch134 = new SADF::signal<array<int,2>>("ch134", 16);
        auto ch135 = new SADF::signal<array<int,2>>("ch135", 16);
        auto ch136 = new SADF::signal<array<int,2>>("ch136", 16);
        auto ch137 = new SADF::signal<array<int,2>>("ch137", 16);
        auto ch138 = new SADF::signal<array<int,2>>("ch138", 16);
        auto ch139 = new SADF::signal<array<int,3>>("ch139", 16);
        auto ch140 = new SADF::signal<array<int,1>>("ch140", 16);
        auto ch141 = new SADF::signal<array<int,3>>("ch141", 16);
        auto ch142 = new SADF::signal<array<int,4>>("ch142", 16);
        auto ch143 = new SADF::signal<array<int,2>>("ch143", 16);
        auto ch144 = new SADF::signal<array<int,2>>("ch144", 16);
        auto ch145 = new SADF::signal<array<int,1>>("ch145", 16);
        auto ch146 = new SADF::signal<array<int,2>>("ch146", 16);
        auto ch147 = new SADF::signal<array<int,2>>("ch147", 16);
        auto ch148 = new SADF::signal<array<int,2>>("ch148", 16);
        auto ch149 = new SADF::signal<array<int,1>>("ch149", 16);
        auto ch150 = new SADF::signal<array<int,2>>("ch150", 16);
        auto ch151 = new SADF::signal<array<int,2>>("ch151", 16);
        auto ch152 = new SADF::signal<array<int,3>>("ch152", 16);
        auto ch153 = new SADF::signal<array<int,3>>("ch153", 16);
        auto ch154 = new SADF::signal<array<int,3>>("ch154", 16);
        auto ch155 = new SADF::signal<array<int,3>>("ch155", 16);
        auto ch156 = new SADF::signal<array<int,1>>("ch156", 16);
        auto ch157 = new SADF::signal<array<int,2>>("ch157", 16);
        auto ch158 = new SADF::signal<array<int,4>>("ch158", 16);
        auto ch159 = new SADF::signal<array<int,4>>("ch159", 16);
        auto ch160 = new SADF::signal<array<int,1>>("ch160", 16);
        auto ch161 = new SADF::signal<array<int,2>>("ch161", 16);
        auto ch162 = new SADF::signal<array<int,4>>("ch162", 16);
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
        auto ch0_delaysig = new SADF::signal<array<int,2>>("ch0_delaysig", 16);
        auto ch4_delaysig = new SADF::signal<array<int,1>>("ch4_delaysig", 16);
        auto ch7_delaysig = new SADF::signal<array<int,1>>("ch7_delaysig", 16);
        auto ch8_delaysig = new SADF::signal<array<int,2>>("ch8_delaysig", 16);
        auto ch11_delaysig = new SADF::signal<array<int,2>>("ch11_delaysig", 16);
        auto ch13_delaysig = new SADF::signal<array<int,2>>("ch13_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,2>>("ch16_delaysig", 16);
        auto ch17_delaysig = new SADF::signal<array<int,2>>("ch17_delaysig", 16);
        auto ch19_delaysig = new SADF::signal<array<int,1>>("ch19_delaysig", 16);
        auto ch21_delaysig = new SADF::signal<array<int,1>>("ch21_delaysig", 16);
        auto ch22_delaysig = new SADF::signal<array<int,2>>("ch22_delaysig", 16);
        auto ch24_delaysig = new SADF::signal<array<int,3>>("ch24_delaysig", 16);
        auto ch25_delaysig = new SADF::signal<array<int,3>>("ch25_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,1>>("ch26_delaysig", 16);
        auto ch30_delaysig = new SADF::signal<array<int,4>>("ch30_delaysig", 16);
        auto ch31_delaysig = new SADF::signal<array<int,1>>("ch31_delaysig", 16);
        auto ch32_delaysig = new SADF::signal<array<int,4>>("ch32_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,2>>("ch33_delaysig", 16);
        auto ch34_delaysig = new SADF::signal<array<int,2>>("ch34_delaysig", 16);
        auto ch36_delaysig = new SADF::signal<array<int,4>>("ch36_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,2>>("ch38_delaysig", 16);
        auto ch42_delaysig = new SADF::signal<array<int,2>>("ch42_delaysig", 16);
        auto ch43_delaysig = new SADF::signal<array<int,3>>("ch43_delaysig", 16);
        auto ch44_delaysig = new SADF::signal<array<int,2>>("ch44_delaysig", 16);
        auto ch45_delaysig = new SADF::signal<array<int,3>>("ch45_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,2>>("ch47_delaysig", 16);
        auto ch48_delaysig = new SADF::signal<array<int,3>>("ch48_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,2>>("ch51_delaysig", 16);
        auto ch53_delaysig = new SADF::signal<array<int,2>>("ch53_delaysig", 16);
        auto ch54_delaysig = new SADF::signal<array<int,3>>("ch54_delaysig", 16);
        auto ch56_delaysig = new SADF::signal<array<int,3>>("ch56_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,2>>("ch58_delaysig", 16);
        auto ch59_delaysig = new SADF::signal<array<int,2>>("ch59_delaysig", 16);
        auto ch60_delaysig = new SADF::signal<array<int,3>>("ch60_delaysig", 16);
        auto ch63_delaysig = new SADF::signal<array<int,3>>("ch63_delaysig", 16);
        auto ch64_delaysig = new SADF::signal<array<int,2>>("ch64_delaysig", 16);
        auto ch65_delaysig = new SADF::signal<array<int,3>>("ch65_delaysig", 16);
        auto ch67_delaysig = new SADF::signal<array<int,4>>("ch67_delaysig", 16);
        auto ch70_delaysig = new SADF::signal<array<int,3>>("ch70_delaysig", 16);
        auto ch71_delaysig = new SADF::signal<array<int,1>>("ch71_delaysig", 16);
        auto ch73_delaysig = new SADF::signal<array<int,3>>("ch73_delaysig", 16);
        auto ch74_delaysig = new SADF::signal<array<int,3>>("ch74_delaysig", 16);
        auto ch75_delaysig = new SADF::signal<array<int,1>>("ch75_delaysig", 16);
        auto ch76_delaysig = new SADF::signal<array<int,2>>("ch76_delaysig", 16);
        auto ch78_delaysig = new SADF::signal<array<int,4>>("ch78_delaysig", 16);
        auto ch79_delaysig = new SADF::signal<array<int,3>>("ch79_delaysig", 16);
        auto ch80_delaysig = new SADF::signal<array<int,3>>("ch80_delaysig", 16);
        auto ch81_delaysig = new SADF::signal<array<int,3>>("ch81_delaysig", 16);
        auto ch82_delaysig = new SADF::signal<array<int,3>>("ch82_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,3>>("ch83_delaysig", 16);
        auto ch84_delaysig = new SADF::signal<array<int,3>>("ch84_delaysig", 16);
        auto ch86_delaysig = new SADF::signal<array<int,2>>("ch86_delaysig", 16);
        auto ch88_delaysig = new SADF::signal<array<int,2>>("ch88_delaysig", 16);
        auto ch92_delaysig = new SADF::signal<array<int,4>>("ch92_delaysig", 16);
        auto ch93_delaysig = new SADF::signal<array<int,3>>("ch93_delaysig", 16);
        auto ch94_delaysig = new SADF::signal<array<int,3>>("ch94_delaysig", 16);
        auto ch95_delaysig = new SADF::signal<array<int,2>>("ch95_delaysig", 16);
        auto ch96_delaysig = new SADF::signal<array<int,3>>("ch96_delaysig", 16);
        auto ch99_delaysig = new SADF::signal<array<int,3>>("ch99_delaysig", 16);
        auto ch101_delaysig = new SADF::signal<array<int,1>>("ch101_delaysig", 16);
        auto ch102_delaysig = new SADF::signal<array<int,2>>("ch102_delaysig", 16);
        auto ch103_delaysig = new SADF::signal<array<int,2>>("ch103_delaysig", 16);
        auto ch104_delaysig = new SADF::signal<array<int,2>>("ch104_delaysig", 16);
        auto ch105_delaysig = new SADF::signal<array<int,2>>("ch105_delaysig", 16);
        auto ch106_delaysig = new SADF::signal<array<int,2>>("ch106_delaysig", 16);
        auto ch107_delaysig = new SADF::signal<array<int,2>>("ch107_delaysig", 16);
        auto ch108_delaysig = new SADF::signal<array<int,3>>("ch108_delaysig", 16);
        auto ch110_delaysig = new SADF::signal<array<int,2>>("ch110_delaysig", 16);
        auto ch111_delaysig = new SADF::signal<array<int,1>>("ch111_delaysig", 16);
        auto ch116_delaysig = new SADF::signal<array<int,2>>("ch116_delaysig", 16);
        auto ch117_delaysig = new SADF::signal<array<int,2>>("ch117_delaysig", 16);
        auto ch118_delaysig = new SADF::signal<array<int,1>>("ch118_delaysig", 16);
        auto ch120_delaysig = new SADF::signal<array<int,3>>("ch120_delaysig", 16);
        auto ch123_delaysig = new SADF::signal<array<int,1>>("ch123_delaysig", 16);
        auto ch124_delaysig = new SADF::signal<array<int,2>>("ch124_delaysig", 16);
        auto ch127_delaysig = new SADF::signal<array<int,2>>("ch127_delaysig", 16);
        auto ch130_delaysig = new SADF::signal<array<int,3>>("ch130_delaysig", 16);
        auto ch131_delaysig = new SADF::signal<array<int,1>>("ch131_delaysig", 16);
        auto ch132_delaysig = new SADF::signal<array<int,2>>("ch132_delaysig", 16);
        auto ch133_delaysig = new SADF::signal<array<int,4>>("ch133_delaysig", 16);
        auto ch134_delaysig = new SADF::signal<array<int,2>>("ch134_delaysig", 16);
        auto ch135_delaysig = new SADF::signal<array<int,2>>("ch135_delaysig", 16);
        auto ch136_delaysig = new SADF::signal<array<int,2>>("ch136_delaysig", 16);
        auto ch138_delaysig = new SADF::signal<array<int,2>>("ch138_delaysig", 16);
        auto ch139_delaysig = new SADF::signal<array<int,3>>("ch139_delaysig", 16);
        auto ch140_delaysig = new SADF::signal<array<int,1>>("ch140_delaysig", 16);
        auto ch141_delaysig = new SADF::signal<array<int,3>>("ch141_delaysig", 16);
        auto ch142_delaysig = new SADF::signal<array<int,4>>("ch142_delaysig", 16);
        auto ch143_delaysig = new SADF::signal<array<int,2>>("ch143_delaysig", 16);
        auto ch144_delaysig = new SADF::signal<array<int,2>>("ch144_delaysig", 16);
        auto ch145_delaysig = new SADF::signal<array<int,1>>("ch145_delaysig", 16);
        auto ch146_delaysig = new SADF::signal<array<int,2>>("ch146_delaysig", 16);
        auto ch148_delaysig = new SADF::signal<array<int,2>>("ch148_delaysig", 16);
        auto ch149_delaysig = new SADF::signal<array<int,1>>("ch149_delaysig", 16);
        auto ch150_delaysig = new SADF::signal<array<int,2>>("ch150_delaysig", 16);
        auto ch153_delaysig = new SADF::signal<array<int,3>>("ch153_delaysig", 16);
        auto ch154_delaysig = new SADF::signal<array<int,3>>("ch154_delaysig", 16);
        auto ch156_delaysig = new SADF::signal<array<int,1>>("ch156_delaysig", 16);
        auto ch160_delaysig = new SADF::signal<array<int,1>>("ch160_delaysig", 16);
        auto ch161_delaysig = new SADF::signal<array<int,2>>("ch161_delaysig", 16);
        auto ch162_delaysig = new SADF::signal<array<int,4>>("ch162_delaysig", 16);
        auto ch0_delay = SADF::make_delayn("ch0_delay", array<int,2>{}, 4, *ch0_delaysig, *ch0);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,1>{}, 2, *ch4_delaysig, *ch4);
        auto ch7_delay = SADF::make_delayn("ch7_delay", array<int,1>{}, 4, *ch7_delaysig, *ch7);
        auto ch8_delay = SADF::make_delayn("ch8_delay", array<int,2>{}, 1, *ch8_delaysig, *ch8);
        auto ch11_delay = SADF::make_delayn("ch11_delay", array<int,2>{}, 2, *ch11_delaysig, *ch11);
        auto ch13_delay = SADF::make_delayn("ch13_delay", array<int,2>{}, 4, *ch13_delaysig, *ch13);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,2>{}, 2, *ch16_delaysig, *ch16);
        auto ch17_delay = SADF::make_delayn("ch17_delay", array<int,2>{}, 2, *ch17_delaysig, *ch17);
        auto ch19_delay = SADF::make_delayn("ch19_delay", array<int,1>{}, 8, *ch19_delaysig, *ch19);
        auto ch21_delay = SADF::make_delayn("ch21_delay", array<int,1>{}, 4, *ch21_delaysig, *ch21);
        auto ch22_delay = SADF::make_delayn("ch22_delay", array<int,2>{}, 4, *ch22_delaysig, *ch22);
        auto ch24_delay = SADF::make_delayn("ch24_delay", array<int,3>{}, 4, *ch24_delaysig, *ch24);
        auto ch25_delay = SADF::make_delayn("ch25_delay", array<int,3>{}, 8, *ch25_delaysig, *ch25);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,1>{}, 3, *ch26_delaysig, *ch26);
        auto ch30_delay = SADF::make_delayn("ch30_delay", array<int,4>{}, 6, *ch30_delaysig, *ch30);
        auto ch31_delay = SADF::make_delayn("ch31_delay", array<int,1>{}, 1, *ch31_delaysig, *ch31);
        auto ch32_delay = SADF::make_delayn("ch32_delay", array<int,4>{}, 2, *ch32_delaysig, *ch32);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,2>{}, 2, *ch33_delaysig, *ch33);
        auto ch34_delay = SADF::make_delayn("ch34_delay", array<int,2>{}, 8, *ch34_delaysig, *ch34);
        auto ch36_delay = SADF::make_delayn("ch36_delay", array<int,4>{}, 4, *ch36_delaysig, *ch36);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,2>{}, 2, *ch38_delaysig, *ch38);
        auto ch42_delay = SADF::make_delayn("ch42_delay", array<int,2>{}, 1, *ch42_delaysig, *ch42);
        auto ch43_delay = SADF::make_delayn("ch43_delay", array<int,3>{}, 2, *ch43_delaysig, *ch43);
        auto ch44_delay = SADF::make_delayn("ch44_delay", array<int,2>{}, 4, *ch44_delaysig, *ch44);
        auto ch45_delay = SADF::make_delayn("ch45_delay", array<int,3>{}, 4, *ch45_delaysig, *ch45);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,2>{}, 1, *ch47_delaysig, *ch47);
        auto ch48_delay = SADF::make_delayn("ch48_delay", array<int,3>{}, 8, *ch48_delaysig, *ch48);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,2>{}, 4, *ch51_delaysig, *ch51);
        auto ch53_delay = SADF::make_delayn("ch53_delay", array<int,2>{}, 6, *ch53_delaysig, *ch53);
        auto ch54_delay = SADF::make_delayn("ch54_delay", array<int,3>{}, 3, *ch54_delaysig, *ch54);
        auto ch56_delay = SADF::make_delayn("ch56_delay", array<int,3>{}, 4, *ch56_delaysig, *ch56);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,2>{}, 2, *ch58_delaysig, *ch58);
        auto ch59_delay = SADF::make_delayn("ch59_delay", array<int,2>{}, 4, *ch59_delaysig, *ch59);
        auto ch60_delay = SADF::make_delayn("ch60_delay", array<int,3>{}, 9, *ch60_delaysig, *ch60);
        auto ch63_delay = SADF::make_delayn("ch63_delay", array<int,3>{}, 2, *ch63_delaysig, *ch63);
        auto ch64_delay = SADF::make_delayn("ch64_delay", array<int,2>{}, 8, *ch64_delaysig, *ch64);
        auto ch65_delay = SADF::make_delayn("ch65_delay", array<int,3>{}, 2, *ch65_delaysig, *ch65);
        auto ch67_delay = SADF::make_delayn("ch67_delay", array<int,4>{}, 2, *ch67_delaysig, *ch67);
        auto ch70_delay = SADF::make_delayn("ch70_delay", array<int,3>{}, 1, *ch70_delaysig, *ch70);
        auto ch71_delay = SADF::make_delayn("ch71_delay", array<int,1>{}, 2, *ch71_delaysig, *ch71);
        auto ch73_delay = SADF::make_delayn("ch73_delay", array<int,3>{}, 2, *ch73_delaysig, *ch73);
        auto ch74_delay = SADF::make_delayn("ch74_delay", array<int,3>{}, 1, *ch74_delaysig, *ch74);
        auto ch75_delay = SADF::make_delayn("ch75_delay", array<int,1>{}, 2, *ch75_delaysig, *ch75);
        auto ch76_delay = SADF::make_delayn("ch76_delay", array<int,2>{}, 1, *ch76_delaysig, *ch76);
        auto ch78_delay = SADF::make_delayn("ch78_delay", array<int,4>{}, 4, *ch78_delaysig, *ch78);
        auto ch79_delay = SADF::make_delayn("ch79_delay", array<int,3>{}, 4, *ch79_delaysig, *ch79);
        auto ch80_delay = SADF::make_delayn("ch80_delay", array<int,3>{}, 1, *ch80_delaysig, *ch80);
        auto ch81_delay = SADF::make_delayn("ch81_delay", array<int,3>{}, 2, *ch81_delaysig, *ch81);
        auto ch82_delay = SADF::make_delayn("ch82_delay", array<int,3>{}, 4, *ch82_delaysig, *ch82);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,3>{}, 6, *ch83_delaysig, *ch83);
        auto ch84_delay = SADF::make_delayn("ch84_delay", array<int,3>{}, 4, *ch84_delaysig, *ch84);
        auto ch86_delay = SADF::make_delayn("ch86_delay", array<int,2>{}, 2, *ch86_delaysig, *ch86);
        auto ch88_delay = SADF::make_delayn("ch88_delay", array<int,2>{}, 4, *ch88_delaysig, *ch88);
        auto ch92_delay = SADF::make_delayn("ch92_delay", array<int,4>{}, 2, *ch92_delaysig, *ch92);
        auto ch93_delay = SADF::make_delayn("ch93_delay", array<int,3>{}, 4, *ch93_delaysig, *ch93);
        auto ch94_delay = SADF::make_delayn("ch94_delay", array<int,3>{}, 8, *ch94_delaysig, *ch94);
        auto ch95_delay = SADF::make_delayn("ch95_delay", array<int,2>{}, 3, *ch95_delaysig, *ch95);
        auto ch96_delay = SADF::make_delayn("ch96_delay", array<int,3>{}, 2, *ch96_delaysig, *ch96);
        auto ch99_delay = SADF::make_delayn("ch99_delay", array<int,3>{}, 3, *ch99_delaysig, *ch99);
        auto ch101_delay = SADF::make_delayn("ch101_delay", array<int,1>{}, 4, *ch101_delaysig, *ch101);
        auto ch102_delay = SADF::make_delayn("ch102_delay", array<int,2>{}, 4, *ch102_delaysig, *ch102);
        auto ch103_delay = SADF::make_delayn("ch103_delay", array<int,2>{}, 2, *ch103_delaysig, *ch103);
        auto ch104_delay = SADF::make_delayn("ch104_delay", array<int,2>{}, 2, *ch104_delaysig, *ch104);
        auto ch105_delay = SADF::make_delayn("ch105_delay", array<int,2>{}, 3, *ch105_delaysig, *ch105);
        auto ch106_delay = SADF::make_delayn("ch106_delay", array<int,2>{}, 1, *ch106_delaysig, *ch106);
        auto ch107_delay = SADF::make_delayn("ch107_delay", array<int,2>{}, 2, *ch107_delaysig, *ch107);
        auto ch108_delay = SADF::make_delayn("ch108_delay", array<int,3>{}, 1, *ch108_delaysig, *ch108);
        auto ch110_delay = SADF::make_delayn("ch110_delay", array<int,2>{}, 9, *ch110_delaysig, *ch110);
        auto ch111_delay = SADF::make_delayn("ch111_delay", array<int,1>{}, 3, *ch111_delaysig, *ch111);
        auto ch116_delay = SADF::make_delayn("ch116_delay", array<int,2>{}, 2, *ch116_delaysig, *ch116);
        auto ch117_delay = SADF::make_delayn("ch117_delay", array<int,2>{}, 2, *ch117_delaysig, *ch117);
        auto ch118_delay = SADF::make_delayn("ch118_delay", array<int,1>{}, 4, *ch118_delaysig, *ch118);
        auto ch120_delay = SADF::make_delayn("ch120_delay", array<int,3>{}, 2, *ch120_delaysig, *ch120);
        auto ch123_delay = SADF::make_delayn("ch123_delay", array<int,1>{}, 1, *ch123_delaysig, *ch123);
        auto ch124_delay = SADF::make_delayn("ch124_delay", array<int,2>{}, 2, *ch124_delaysig, *ch124);
        auto ch127_delay = SADF::make_delayn("ch127_delay", array<int,2>{}, 4, *ch127_delaysig, *ch127);
        auto ch130_delay = SADF::make_delayn("ch130_delay", array<int,3>{}, 3, *ch130_delaysig, *ch130);
        auto ch131_delay = SADF::make_delayn("ch131_delay", array<int,1>{}, 3, *ch131_delaysig, *ch131);
        auto ch132_delay = SADF::make_delayn("ch132_delay", array<int,2>{}, 1, *ch132_delaysig, *ch132);
        auto ch133_delay = SADF::make_delayn("ch133_delay", array<int,4>{}, 1, *ch133_delaysig, *ch133);
        auto ch134_delay = SADF::make_delayn("ch134_delay", array<int,2>{}, 9, *ch134_delaysig, *ch134);
        auto ch135_delay = SADF::make_delayn("ch135_delay", array<int,2>{}, 6, *ch135_delaysig, *ch135);
        auto ch136_delay = SADF::make_delayn("ch136_delay", array<int,2>{}, 2, *ch136_delaysig, *ch136);
        auto ch138_delay = SADF::make_delayn("ch138_delay", array<int,2>{}, 8, *ch138_delaysig, *ch138);
        auto ch139_delay = SADF::make_delayn("ch139_delay", array<int,3>{}, 2, *ch139_delaysig, *ch139);
        auto ch140_delay = SADF::make_delayn("ch140_delay", array<int,1>{}, 2, *ch140_delaysig, *ch140);
        auto ch141_delay = SADF::make_delayn("ch141_delay", array<int,3>{}, 6, *ch141_delaysig, *ch141);
        auto ch142_delay = SADF::make_delayn("ch142_delay", array<int,4>{}, 1, *ch142_delaysig, *ch142);
        auto ch143_delay = SADF::make_delayn("ch143_delay", array<int,2>{}, 6, *ch143_delaysig, *ch143);
        auto ch144_delay = SADF::make_delayn("ch144_delay", array<int,2>{}, 3, *ch144_delaysig, *ch144);
        auto ch145_delay = SADF::make_delayn("ch145_delay", array<int,1>{}, 8, *ch145_delaysig, *ch145);
        auto ch146_delay = SADF::make_delayn("ch146_delay", array<int,2>{}, 4, *ch146_delaysig, *ch146);
        auto ch148_delay = SADF::make_delayn("ch148_delay", array<int,2>{}, 2, *ch148_delaysig, *ch148);
        auto ch149_delay = SADF::make_delayn("ch149_delay", array<int,1>{}, 4, *ch149_delaysig, *ch149);
        auto ch150_delay = SADF::make_delayn("ch150_delay", array<int,2>{}, 1, *ch150_delaysig, *ch150);
        auto ch153_delay = SADF::make_delayn("ch153_delay", array<int,3>{}, 2, *ch153_delaysig, *ch153);
        auto ch154_delay = SADF::make_delayn("ch154_delay", array<int,3>{}, 2, *ch154_delaysig, *ch154);
        auto ch156_delay = SADF::make_delayn("ch156_delay", array<int,1>{}, 4, *ch156_delaysig, *ch156);
        auto ch160_delay = SADF::make_delayn("ch160_delay", array<int,1>{}, 2, *ch160_delaysig, *ch160);
        auto ch161_delay = SADF::make_delayn("ch161_delay", array<int,2>{}, 2, *ch161_delaysig, *ch161);
        auto ch162_delay = SADF::make_delayn("ch162_delay", array<int,4>{}, 8, *ch162_delaysig, *ch162);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{3, 1, 4, 2, 1, 2, 2}, {1, 3, 2, 2, 1, 2, 2, 2}}}, {1, {{3, 1, 4, 2, 1, 2, 2}, {1, 3, 2, 2, 1, 2, 2, 2}}}}, tie(*ch86, *ch53, *ch2, *ch28, *ch40, *ch158, *ch20, *ch3), *a0_detectorsig, tie( *ch129, *ch85, *ch46, *ch149_delaysig, *ch75_delaysig, *ch22_delaysig, *ch0_delaysig));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{2, 2, 3, 2, 2, 2, 2, 1}, {2, 2, 1, 2, 4, 1, 1}}}, {1, {{2, 2, 3, 2, 2, 2, 2, 1}, {2, 2, 1, 2, 4, 1, 1}}}}, tie(*ch0, *ch1, *ch116, *ch78, *ch25, *ch140, *ch81), *a1_detectorsig, tie( *ch77, *ch158, *ch121, *ch56_delaysig, *ch122, *ch84_delaysig, *ch44_delaysig, *ch98));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2, 2, 3, 1, 2, 2, 2, 1}, {1, 2, 2, 3, 2, 1, 1, 2, 2}}}, {1, {{2, 2, 3, 1, 2, 2, 2, 1}, {1, 2, 2, 3, 2, 1, 1, 2, 2}}}}, tie(*ch38, *ch44, *ch49, *ch30, *ch93, *ch62, *ch120, *ch113, *ch21), *a2_detectorsig, tie( *ch41, *ch21_delaysig, *ch35, *ch107_delaysig, *ch45_delaysig, *ch1, *ch20, *ch61));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{1, 3, 2, 1, 1, 2, 1}, {4, 2, 1, 2, 2, 1, 1, 1, 2}}}, {1, {{1, 3, 2, 1, 1, 2, 1}, {4, 2, 1, 2, 2, 1, 1, 1, 2}}}}, tie(*ch48, *ch84, *ch92, *ch51, *ch100, *ch16, *ch160, *ch67, *ch50), *a3_detectorsig, tie( *ch124_delaysig, *ch155, *ch118_delaysig, *ch5, *ch115, *ch2, *ch139_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 2, 1, 2, 1, 1, 2, 2}, {2, 2, 2, 2, 2, 1, 2}}}, {1, {{1, 2, 1, 2, 1, 1, 2, 2}, {2, 2, 2, 2, 2, 1, 2}}}}, tie(*ch109, *ch102, *ch10, *ch7, *ch41, *ch4, *ch79), *a4_detectorsig, tie( *ch157, *ch36_delaysig, *ch154_delaysig, *ch3, *ch103_delaysig, *ch58_delaysig, *ch100, *ch126));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{4, 3, 1, 1, 2, 2, 2}, {2, 2, 2, 2, 2, 2, 1, 1}}}, {1, {{4, 3, 1, 1, 2, 2, 2}, {2, 2, 2, 2, 2, 2, 1, 1}}}}, tie(*ch39, *ch114, *ch147, *ch154, *ch23, *ch151, *ch150, *ch142), *a5_detectorsig, tie( *ch13_delaysig, *ch144_delaysig, *ch57, *ch52, *ch104_delaysig, *ch136_delaysig, *ch4_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{4, 1, 3, 2, 1, 2, 1, 1}, {2, 1, 1, 1, 3, 3, 1, 2}}}, {1, {{4, 1, 3, 2, 1, 2, 1, 1}, {2, 1, 1, 1, 3, 3, 1, 2}}}}, tie(*ch75, *ch74, *ch6, *ch123, *ch105, *ch111, *ch106, *ch5), *a6_detectorsig, tie( *ch152, *ch142_delaysig, *ch9, *ch148_delaysig, *ch8_delaysig, *ch40, *ch80_delaysig, *ch47_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{1, 2, 4, 2, 2, 1, 1, 1}, {2, 2, 2, 1, 2, 2, 2}}}, {1, {{1, 2, 4, 2, 2, 1, 1, 1}, {2, 2, 2, 1, 2, 2, 2}}}}, tie(*ch153, *ch139, *ch29, *ch70, *ch159, *ch124, *ch107), *a7_detectorsig, tie( *ch125, *ch62, *ch90, *ch73_delaysig, *ch67_delaysig, *ch150_delaysig, *ch18, *ch6));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{3, 2, 2, 1, 1, 2, 1}, {1, 2, 2, 2, 2, 2, 2, 2}}}, {1, {{3, 2, 2, 1, 1, 2, 1}, {1, 2, 2, 2, 2, 2, 2, 2}}}}, tie(*ch136, *ch146, *ch56, *ch36, *ch22, *ch149, *ch127, *ch66), *a8_detectorsig, tie( *ch14, *ch102_delaysig, *ch7_delaysig, *ch159, *ch147, *ch127_delaysig, *ch114));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{2, 1, 2, 1, 2, 2, 2, 2, 2}, {1, 2, 1, 2, 3, 3, 3, 2}}}, {1, {{2, 1, 2, 1, 2, 2, 2, 2, 2}, {1, 2, 1, 2, 3, 3, 3, 2}}}}, tie(*ch133, *ch157, *ch8, *ch69, *ch131, *ch95, *ch130, *ch98), *a9_detectorsig, tie( *ch63_delaysig, *ch74_delaysig, *ch17_delaysig, *ch119, *ch32_delaysig, *ch140_delaysig, *ch92_delaysig, *ch43_delaysig, *ch81_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 1, 1, 1, 1, 1, 2, 1, 4, 2}, {2, 1, 2, 2, 1, 3, 2}}}, {1, {{2, 1, 1, 1, 1, 1, 2, 1, 4, 2}, {2, 1, 2, 2, 1, 3, 2}}}}, tie(*ch15, *ch144, *ch155, *ch35, *ch9, *ch110, *ch129), *a10_detectorsig, tie( *ch30_delaysig, *ch54_delaysig, *ch111_delaysig, *ch95_delaysig, *ch99_delaysig, *ch26_delaysig, *ch141_delaysig, *ch130_delaysig, *ch89, *ch135_delaysig));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{2, 2, 1, 2, 2, 1, 2}, {2, 2, 2, 3, 1, 1, 1, 3}}}, {1, {{2, 2, 1, 2, 2, 1, 2}, {2, 2, 2, 3, 1, 1, 1, 3}}}}, tie(*ch101, *ch59, *ch156, *ch83, *ch148, *ch96, *ch11, *ch135), *a11_detectorsig, tie( *ch101_delaysig, *ch109, *ch55, *ch12, *ch156_delaysig, *ch23, *ch10));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{2, 2, 2, 1, 2, 1, 1, 1, 2}, {2, 1, 3, 1, 2, 1, 1, 3}}}, {1, {{2, 2, 2, 1, 2, 1, 1, 1, 2}, {2, 1, 3, 1, 2, 1, 1, 3}}}}, tie(*ch103, *ch31, *ch26, *ch119, *ch58, *ch76, *ch125, *ch54), *a12_detectorsig, tie( *ch120_delaysig, *ch116_delaysig, *ch38_delaysig, *ch42_delaysig, *ch65_delaysig, *ch31_delaysig, *ch108_delaysig, *ch137, *ch11_delaysig));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{2, 2, 1, 4, 2, 3, 2, 1, 2}, {2, 2, 2, 4, 2, 3, 2, 2}}}, {1, {{2, 2, 1, 4, 2, 3, 2, 1, 2}, {2, 2, 2, 4, 2, 3, 2, 2}}}}, tie(*ch72, *ch118, *ch12, *ch162, *ch122, *ch141, *ch87, *ch126), *a13_detectorsig, tie( *ch28, *ch79_delaysig, *ch117_delaysig, *ch138_delaysig, *ch82_delaysig, *ch143_delaysig, *ch78_delaysig, *ch161_delaysig, *ch59_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{2, 2, 2, 2, 2, 2, 3, 2, 2}, {2, 1, 1, 1, 1, 3, 1, 2}}}, {1, {{2, 2, 2, 2, 2, 2, 3, 2, 2}, {2, 1, 1, 1, 1, 3, 1, 2}}}}, tie(*ch46, *ch128, *ch152, *ch13, *ch37, *ch89, *ch90, *ch138), *a14_detectorsig, tie( *ch64_delaysig, *ch34_delaysig, *ch94_delaysig, *ch25_delaysig, *ch162_delaysig, *ch145_delaysig, *ch27, *ch19_delaysig, *ch48_delaysig));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{3, 2, 3, 2, 3, 1, 1}, {2, 3, 4, 1, 3, 1, 2, 2, 2}}}, {1, {{3, 2, 3, 2, 3, 1, 1}, {2, 3, 4, 1, 3, 1, 2, 2, 2}}}}, tie(*ch14, *ch134, *ch27, *ch112, *ch60, *ch97, *ch143, *ch121, *ch91), *a15_detectorsig, tie( *ch60_delaysig, *ch53_delaysig, *ch110_delaysig, *ch83_delaysig, *ch134_delaysig, *ch131_delaysig, *ch105_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{1, 1, 2, 3, 2, 2, 1, 1, 2, 3}, {1, 1, 4, 2, 2, 2, 1, 4, 1}}}, {1, {{1, 1, 2, 3, 2, 2, 1, 1, 2, 3}, {1, 1, 4, 2, 2, 2, 1, 4, 1}}}}, tie(*ch63, *ch71, *ch19, *ch45, *ch24, *ch77, *ch104, *ch145, *ch65), *a16_detectorsig, tie( *ch39, *ch153_delaysig, *ch24_delaysig, *ch91, *ch146_delaysig, *ch93_delaysig, *ch151, *ch69, *ch51_delaysig, *ch15));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{2, 2, 1, 2, 1, 1, 3, 2, 2}, {2, 1, 1, 2, 1, 1, 2, 1, 2, 2}}}, {1, {{2, 2, 1, 2, 1, 1, 3, 2, 2}, {2, 1, 1, 2, 1, 1, 2, 1, 2, 2}}}}, tie(*ch161, *ch80, *ch42, *ch85, *ch57, *ch68, *ch117, *ch108, *ch61, *ch55), *a17_detectorsig, tie( *ch33_delaysig, *ch160_delaysig, *ch133_delaysig, *ch16_delaysig, *ch76_delaysig, *ch123_delaysig, *ch97, *ch86_delaysig, *ch71_delaysig));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{2, 2, 1, 2, 2, 2, 2, 2}, {2, 1, 1, 4, 1, 1, 1, 2, 4, 4}}}, {1, {{2, 2, 1, 2, 2, 2, 2, 2}, {2, 1, 1, 4, 1, 1, 1, 2, 4, 4}}}}, tie(*ch88, *ch17, *ch33, *ch34, *ch32, *ch73, *ch43, *ch82, *ch64, *ch94), *a18_detectorsig, tie( *ch49, *ch113, *ch29, *ch72, *ch87, *ch50, *ch66, *ch88_delaysig));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{3, 1, 1, 2, 1, 4, 4, 1}, {1, 2, 3, 1, 1, 1, 1}}}, {1, {{3, 1, 1, 2, 1, 4, 4, 1}, {1, 2, 3, 1, 1, 1, 1}}}}, tie(*ch18, *ch115, *ch99, *ch137, *ch132, *ch47, *ch52), *a19_detectorsig, tie( *ch112, *ch106_delaysig, *ch132_delaysig, *ch96_delaysig, *ch68, *ch37, *ch128, *ch70_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 3, 2, 1, 2, 4, 3, 2, 1, 2, 1}},{1,{2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 3, 2, 1, 2, 4, 3, 2, 1, 2, 1}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
