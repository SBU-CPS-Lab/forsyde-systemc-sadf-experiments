#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a0_func iter: "<<i++<<std::endl;
}

void a1_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a1_func iter: "<<i++<<std::endl;
}

void a2_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a2_func iter: "<<i++<<std::endl;
}

void a3_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a4_func(tuple<vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,4>>>& inp) {
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

void a5_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& inp) {
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

void a6_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>>& inp) {
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

void a7_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a7_func iter: "<<i++<<std::endl;
}

void a8_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a8_func iter: "<<i++<<std::endl;
}

void a9_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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

void a10_func(tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<22;j++)
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

void a11_func(tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a11_func iter: "<<i++<<std::endl;
}

void a12_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a13_func iter: "<<i++<<std::endl;
}

void a14_func(tuple<vector<array<int,1>>, vector<array<int,4>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& inp) {
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
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a15_func iter: "<<i++<<std::endl;
}

void a16_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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

void a19_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 3, 2, 3, 2, 1, 1, 3, 3, 3, 3, 2, 3, 1, 1, 2, 1, 3, 4, 4}},{1,{2, 3, 2, 3, 2, 1, 1, 3, 3, 3, 3, 2, 3, 1, 1, 2, 1, 3, 4, 4}}};

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
        auto ch3 = new SADF::signal<array<int,4>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,2>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,2>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,2>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,1>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,1>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,3>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,2>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,2>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,2>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,3>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,1>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,3>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,2>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,2>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,4>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,2>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,1>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,3>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,3>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,3>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,2>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,2>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,2>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,2>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,2>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,1>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,1>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,2>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,3>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,2>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,2>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,2>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,2>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,3>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,2>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,3>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,3>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,2>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,2>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,3>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,1>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,2>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,2>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,3>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,2>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,3>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,2>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,2>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,1>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,2>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,2>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,2>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,2>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,1>>("ch59", 16);
        auto ch60 = new SADF::signal<array<int,2>>("ch60", 16);
        auto ch61 = new SADF::signal<array<int,3>>("ch61", 16);
        auto ch62 = new SADF::signal<array<int,2>>("ch62", 16);
        auto ch63 = new SADF::signal<array<int,3>>("ch63", 16);
        auto ch64 = new SADF::signal<array<int,2>>("ch64", 16);
        auto ch65 = new SADF::signal<array<int,3>>("ch65", 16);
        auto ch66 = new SADF::signal<array<int,2>>("ch66", 16);
        auto ch67 = new SADF::signal<array<int,3>>("ch67", 16);
        auto ch68 = new SADF::signal<array<int,2>>("ch68", 16);
        auto ch69 = new SADF::signal<array<int,2>>("ch69", 16);
        auto ch70 = new SADF::signal<array<int,2>>("ch70", 16);
        auto ch71 = new SADF::signal<array<int,1>>("ch71", 16);
        auto ch72 = new SADF::signal<array<int,2>>("ch72", 16);
        auto ch73 = new SADF::signal<array<int,2>>("ch73", 16);
        auto ch74 = new SADF::signal<array<int,3>>("ch74", 16);
        auto ch75 = new SADF::signal<array<int,3>>("ch75", 16);
        auto ch76 = new SADF::signal<array<int,2>>("ch76", 16);
        auto ch77 = new SADF::signal<array<int,2>>("ch77", 16);
        auto ch78 = new SADF::signal<array<int,2>>("ch78", 16);
        auto ch79 = new SADF::signal<array<int,2>>("ch79", 16);
        auto ch80 = new SADF::signal<array<int,2>>("ch80", 16);
        auto ch81 = new SADF::signal<array<int,2>>("ch81", 16);
        auto ch82 = new SADF::signal<array<int,3>>("ch82", 16);
        auto ch83 = new SADF::signal<array<int,2>>("ch83", 16);
        auto ch84 = new SADF::signal<array<int,2>>("ch84", 16);
        auto ch85 = new SADF::signal<array<int,2>>("ch85", 16);
        auto ch86 = new SADF::signal<array<int,3>>("ch86", 16);
        auto ch87 = new SADF::signal<array<int,2>>("ch87", 16);
        auto ch88 = new SADF::signal<array<int,2>>("ch88", 16);
        auto ch89 = new SADF::signal<array<int,2>>("ch89", 16);
        auto ch90 = new SADF::signal<array<int,2>>("ch90", 16);
        auto ch91 = new SADF::signal<array<int,2>>("ch91", 16);
        auto ch92 = new SADF::signal<array<int,4>>("ch92", 16);
        auto ch93 = new SADF::signal<array<int,3>>("ch93", 16);
        auto ch94 = new SADF::signal<array<int,1>>("ch94", 16);
        auto ch95 = new SADF::signal<array<int,2>>("ch95", 16);
        auto ch96 = new SADF::signal<array<int,2>>("ch96", 16);
        auto ch97 = new SADF::signal<array<int,3>>("ch97", 16);
        auto ch98 = new SADF::signal<array<int,1>>("ch98", 16);
        auto ch99 = new SADF::signal<array<int,3>>("ch99", 16);
        auto ch100 = new SADF::signal<array<int,4>>("ch100", 16);
        auto ch101 = new SADF::signal<array<int,2>>("ch101", 16);
        auto ch102 = new SADF::signal<array<int,2>>("ch102", 16);
        auto ch103 = new SADF::signal<array<int,2>>("ch103", 16);
        auto ch104 = new SADF::signal<array<int,1>>("ch104", 16);
        auto ch105 = new SADF::signal<array<int,2>>("ch105", 16);
        auto ch106 = new SADF::signal<array<int,2>>("ch106", 16);
        auto ch107 = new SADF::signal<array<int,2>>("ch107", 16);
        auto ch108 = new SADF::signal<array<int,3>>("ch108", 16);
        auto ch109 = new SADF::signal<array<int,3>>("ch109", 16);
        auto ch110 = new SADF::signal<array<int,2>>("ch110", 16);
        auto ch111 = new SADF::signal<array<int,2>>("ch111", 16);
        auto ch112 = new SADF::signal<array<int,3>>("ch112", 16);
        auto ch113 = new SADF::signal<array<int,3>>("ch113", 16);
        auto ch114 = new SADF::signal<array<int,1>>("ch114", 16);
        auto ch115 = new SADF::signal<array<int,3>>("ch115", 16);
        auto ch116 = new SADF::signal<array<int,2>>("ch116", 16);
        auto ch117 = new SADF::signal<array<int,3>>("ch117", 16);
        auto ch118 = new SADF::signal<array<int,2>>("ch118", 16);
        auto ch119 = new SADF::signal<array<int,3>>("ch119", 16);
        auto ch120 = new SADF::signal<array<int,2>>("ch120", 16);
        auto ch121 = new SADF::signal<array<int,2>>("ch121", 16);
        auto ch122 = new SADF::signal<array<int,2>>("ch122", 16);
        auto ch123 = new SADF::signal<array<int,2>>("ch123", 16);
        auto ch124 = new SADF::signal<array<int,3>>("ch124", 16);
        auto ch125 = new SADF::signal<array<int,3>>("ch125", 16);
        auto ch126 = new SADF::signal<array<int,2>>("ch126", 16);
        auto ch127 = new SADF::signal<array<int,3>>("ch127", 16);
        auto ch128 = new SADF::signal<array<int,3>>("ch128", 16);
        auto ch129 = new SADF::signal<array<int,2>>("ch129", 16);
        auto ch130 = new SADF::signal<array<int,2>>("ch130", 16);
        auto ch131 = new SADF::signal<array<int,2>>("ch131", 16);
        auto ch132 = new SADF::signal<array<int,1>>("ch132", 16);
        auto ch133 = new SADF::signal<array<int,1>>("ch133", 16);
        auto ch134 = new SADF::signal<array<int,2>>("ch134", 16);
        auto ch135 = new SADF::signal<array<int,1>>("ch135", 16);
        auto ch136 = new SADF::signal<array<int,3>>("ch136", 16);
        auto ch137 = new SADF::signal<array<int,3>>("ch137", 16);
        auto ch138 = new SADF::signal<array<int,2>>("ch138", 16);
        auto ch139 = new SADF::signal<array<int,2>>("ch139", 16);
        auto ch140 = new SADF::signal<array<int,2>>("ch140", 16);
        auto ch141 = new SADF::signal<array<int,3>>("ch141", 16);
        auto ch142 = new SADF::signal<array<int,1>>("ch142", 16);
        auto ch143 = new SADF::signal<array<int,2>>("ch143", 16);
        auto ch144 = new SADF::signal<array<int,3>>("ch144", 16);
        auto ch145 = new SADF::signal<array<int,3>>("ch145", 16);
        auto ch146 = new SADF::signal<array<int,1>>("ch146", 16);
        auto ch147 = new SADF::signal<array<int,2>>("ch147", 16);
        auto ch148 = new SADF::signal<array<int,2>>("ch148", 16);
        auto ch149 = new SADF::signal<array<int,3>>("ch149", 16);
        auto ch150 = new SADF::signal<array<int,2>>("ch150", 16);
        auto ch151 = new SADF::signal<array<int,3>>("ch151", 16);
        auto ch152 = new SADF::signal<array<int,3>>("ch152", 16);
        auto ch153 = new SADF::signal<array<int,2>>("ch153", 16);
        auto ch154 = new SADF::signal<array<int,3>>("ch154", 16);
        auto ch155 = new SADF::signal<array<int,2>>("ch155", 16);
        auto ch156 = new SADF::signal<array<int,1>>("ch156", 16);
        auto ch157 = new SADF::signal<array<int,3>>("ch157", 16);
        auto ch158 = new SADF::signal<array<int,2>>("ch158", 16);
        auto ch159 = new SADF::signal<array<int,2>>("ch159", 16);
        auto ch160 = new SADF::signal<array<int,1>>("ch160", 16);
        auto ch161 = new SADF::signal<array<int,2>>("ch161", 16);
        auto ch162 = new SADF::signal<array<int,1>>("ch162", 16);
        auto ch163 = new SADF::signal<array<int,2>>("ch163", 16);
        auto ch164 = new SADF::signal<array<int,3>>("ch164", 16);
        auto ch165 = new SADF::signal<array<int,2>>("ch165", 16);
        auto ch166 = new SADF::signal<array<int,1>>("ch166", 16);
        auto ch167 = new SADF::signal<array<int,3>>("ch167", 16);
        auto ch168 = new SADF::signal<array<int,3>>("ch168", 16);
        auto ch169 = new SADF::signal<array<int,2>>("ch169", 16);
        auto ch170 = new SADF::signal<array<int,2>>("ch170", 16);
        auto ch171 = new SADF::signal<array<int,1>>("ch171", 16);
        auto ch172 = new SADF::signal<array<int,2>>("ch172", 16);
        auto ch173 = new SADF::signal<array<int,3>>("ch173", 16);
        auto ch174 = new SADF::signal<array<int,1>>("ch174", 16);
        auto ch175 = new SADF::signal<array<int,2>>("ch175", 16);
        auto ch176 = new SADF::signal<array<int,3>>("ch176", 16);
        auto ch177 = new SADF::signal<array<int,2>>("ch177", 16);
        auto ch178 = new SADF::signal<array<int,2>>("ch178", 16);
        auto ch179 = new SADF::signal<array<int,2>>("ch179", 16);
        auto ch180 = new SADF::signal<array<int,3>>("ch180", 16);
        auto ch181 = new SADF::signal<array<int,2>>("ch181", 16);
        auto ch182 = new SADF::signal<array<int,1>>("ch182", 16);
        auto ch183 = new SADF::signal<array<int,2>>("ch183", 16);
        auto ch184 = new SADF::signal<array<int,2>>("ch184", 16);
        auto ch185 = new SADF::signal<array<int,3>>("ch185", 16);
        auto ch186 = new SADF::signal<array<int,3>>("ch186", 16);
        auto ch187 = new SADF::signal<array<int,3>>("ch187", 16);
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
        auto ch3_delaysig = new SADF::signal<array<int,4>>("ch3_delaysig", 16);
        auto ch4_delaysig = new SADF::signal<array<int,2>>("ch4_delaysig", 16);
        auto ch6_delaysig = new SADF::signal<array<int,3>>("ch6_delaysig", 16);
        auto ch7_delaysig = new SADF::signal<array<int,2>>("ch7_delaysig", 16);
        auto ch8_delaysig = new SADF::signal<array<int,1>>("ch8_delaysig", 16);
        auto ch9_delaysig = new SADF::signal<array<int,1>>("ch9_delaysig", 16);
        auto ch14_delaysig = new SADF::signal<array<int,3>>("ch14_delaysig", 16);
        auto ch16_delaysig = new SADF::signal<array<int,3>>("ch16_delaysig", 16);
        auto ch17_delaysig = new SADF::signal<array<int,2>>("ch17_delaysig", 16);
        auto ch18_delaysig = new SADF::signal<array<int,2>>("ch18_delaysig", 16);
        auto ch19_delaysig = new SADF::signal<array<int,4>>("ch19_delaysig", 16);
        auto ch20_delaysig = new SADF::signal<array<int,2>>("ch20_delaysig", 16);
        auto ch22_delaysig = new SADF::signal<array<int,3>>("ch22_delaysig", 16);
        auto ch23_delaysig = new SADF::signal<array<int,3>>("ch23_delaysig", 16);
        auto ch24_delaysig = new SADF::signal<array<int,3>>("ch24_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,2>>("ch26_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,2>>("ch28_delaysig", 16);
        auto ch30_delaysig = new SADF::signal<array<int,2>>("ch30_delaysig", 16);
        auto ch32_delaysig = new SADF::signal<array<int,1>>("ch32_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,2>>("ch33_delaysig", 16);
        auto ch34_delaysig = new SADF::signal<array<int,3>>("ch34_delaysig", 16);
        auto ch36_delaysig = new SADF::signal<array<int,2>>("ch36_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,2>>("ch38_delaysig", 16);
        auto ch40_delaysig = new SADF::signal<array<int,2>>("ch40_delaysig", 16);
        auto ch41_delaysig = new SADF::signal<array<int,3>>("ch41_delaysig", 16);
        auto ch42_delaysig = new SADF::signal<array<int,3>>("ch42_delaysig", 16);
        auto ch43_delaysig = new SADF::signal<array<int,2>>("ch43_delaysig", 16);
        auto ch47_delaysig = new SADF::signal<array<int,2>>("ch47_delaysig", 16);
        auto ch49_delaysig = new SADF::signal<array<int,3>>("ch49_delaysig", 16);
        auto ch50_delaysig = new SADF::signal<array<int,2>>("ch50_delaysig", 16);
        auto ch51_delaysig = new SADF::signal<array<int,3>>("ch51_delaysig", 16);
        auto ch54_delaysig = new SADF::signal<array<int,1>>("ch54_delaysig", 16);
        auto ch55_delaysig = new SADF::signal<array<int,2>>("ch55_delaysig", 16);
        auto ch58_delaysig = new SADF::signal<array<int,2>>("ch58_delaysig", 16);
        auto ch59_delaysig = new SADF::signal<array<int,1>>("ch59_delaysig", 16);
        auto ch61_delaysig = new SADF::signal<array<int,3>>("ch61_delaysig", 16);
        auto ch62_delaysig = new SADF::signal<array<int,2>>("ch62_delaysig", 16);
        auto ch63_delaysig = new SADF::signal<array<int,3>>("ch63_delaysig", 16);
        auto ch64_delaysig = new SADF::signal<array<int,2>>("ch64_delaysig", 16);
        auto ch66_delaysig = new SADF::signal<array<int,2>>("ch66_delaysig", 16);
        auto ch67_delaysig = new SADF::signal<array<int,3>>("ch67_delaysig", 16);
        auto ch69_delaysig = new SADF::signal<array<int,2>>("ch69_delaysig", 16);
        auto ch71_delaysig = new SADF::signal<array<int,1>>("ch71_delaysig", 16);
        auto ch72_delaysig = new SADF::signal<array<int,2>>("ch72_delaysig", 16);
        auto ch73_delaysig = new SADF::signal<array<int,2>>("ch73_delaysig", 16);
        auto ch74_delaysig = new SADF::signal<array<int,3>>("ch74_delaysig", 16);
        auto ch76_delaysig = new SADF::signal<array<int,2>>("ch76_delaysig", 16);
        auto ch77_delaysig = new SADF::signal<array<int,2>>("ch77_delaysig", 16);
        auto ch79_delaysig = new SADF::signal<array<int,2>>("ch79_delaysig", 16);
        auto ch80_delaysig = new SADF::signal<array<int,2>>("ch80_delaysig", 16);
        auto ch81_delaysig = new SADF::signal<array<int,2>>("ch81_delaysig", 16);
        auto ch82_delaysig = new SADF::signal<array<int,3>>("ch82_delaysig", 16);
        auto ch83_delaysig = new SADF::signal<array<int,2>>("ch83_delaysig", 16);
        auto ch84_delaysig = new SADF::signal<array<int,2>>("ch84_delaysig", 16);
        auto ch85_delaysig = new SADF::signal<array<int,2>>("ch85_delaysig", 16);
        auto ch88_delaysig = new SADF::signal<array<int,2>>("ch88_delaysig", 16);
        auto ch90_delaysig = new SADF::signal<array<int,2>>("ch90_delaysig", 16);
        auto ch93_delaysig = new SADF::signal<array<int,3>>("ch93_delaysig", 16);
        auto ch94_delaysig = new SADF::signal<array<int,1>>("ch94_delaysig", 16);
        auto ch95_delaysig = new SADF::signal<array<int,2>>("ch95_delaysig", 16);
        auto ch97_delaysig = new SADF::signal<array<int,3>>("ch97_delaysig", 16);
        auto ch98_delaysig = new SADF::signal<array<int,1>>("ch98_delaysig", 16);
        auto ch99_delaysig = new SADF::signal<array<int,3>>("ch99_delaysig", 16);
        auto ch100_delaysig = new SADF::signal<array<int,4>>("ch100_delaysig", 16);
        auto ch103_delaysig = new SADF::signal<array<int,2>>("ch103_delaysig", 16);
        auto ch104_delaysig = new SADF::signal<array<int,1>>("ch104_delaysig", 16);
        auto ch105_delaysig = new SADF::signal<array<int,2>>("ch105_delaysig", 16);
        auto ch106_delaysig = new SADF::signal<array<int,2>>("ch106_delaysig", 16);
        auto ch109_delaysig = new SADF::signal<array<int,3>>("ch109_delaysig", 16);
        auto ch113_delaysig = new SADF::signal<array<int,3>>("ch113_delaysig", 16);
        auto ch115_delaysig = new SADF::signal<array<int,3>>("ch115_delaysig", 16);
        auto ch117_delaysig = new SADF::signal<array<int,3>>("ch117_delaysig", 16);
        auto ch118_delaysig = new SADF::signal<array<int,2>>("ch118_delaysig", 16);
        auto ch122_delaysig = new SADF::signal<array<int,2>>("ch122_delaysig", 16);
        auto ch123_delaysig = new SADF::signal<array<int,2>>("ch123_delaysig", 16);
        auto ch127_delaysig = new SADF::signal<array<int,3>>("ch127_delaysig", 16);
        auto ch128_delaysig = new SADF::signal<array<int,3>>("ch128_delaysig", 16);
        auto ch129_delaysig = new SADF::signal<array<int,2>>("ch129_delaysig", 16);
        auto ch130_delaysig = new SADF::signal<array<int,2>>("ch130_delaysig", 16);
        auto ch131_delaysig = new SADF::signal<array<int,2>>("ch131_delaysig", 16);
        auto ch132_delaysig = new SADF::signal<array<int,1>>("ch132_delaysig", 16);
        auto ch133_delaysig = new SADF::signal<array<int,1>>("ch133_delaysig", 16);
        auto ch134_delaysig = new SADF::signal<array<int,2>>("ch134_delaysig", 16);
        auto ch135_delaysig = new SADF::signal<array<int,1>>("ch135_delaysig", 16);
        auto ch136_delaysig = new SADF::signal<array<int,3>>("ch136_delaysig", 16);
        auto ch139_delaysig = new SADF::signal<array<int,2>>("ch139_delaysig", 16);
        auto ch140_delaysig = new SADF::signal<array<int,2>>("ch140_delaysig", 16);
        auto ch141_delaysig = new SADF::signal<array<int,3>>("ch141_delaysig", 16);
        auto ch143_delaysig = new SADF::signal<array<int,2>>("ch143_delaysig", 16);
        auto ch144_delaysig = new SADF::signal<array<int,3>>("ch144_delaysig", 16);
        auto ch145_delaysig = new SADF::signal<array<int,3>>("ch145_delaysig", 16);
        auto ch146_delaysig = new SADF::signal<array<int,1>>("ch146_delaysig", 16);
        auto ch147_delaysig = new SADF::signal<array<int,2>>("ch147_delaysig", 16);
        auto ch149_delaysig = new SADF::signal<array<int,3>>("ch149_delaysig", 16);
        auto ch150_delaysig = new SADF::signal<array<int,2>>("ch150_delaysig", 16);
        auto ch152_delaysig = new SADF::signal<array<int,3>>("ch152_delaysig", 16);
        auto ch153_delaysig = new SADF::signal<array<int,2>>("ch153_delaysig", 16);
        auto ch154_delaysig = new SADF::signal<array<int,3>>("ch154_delaysig", 16);
        auto ch156_delaysig = new SADF::signal<array<int,1>>("ch156_delaysig", 16);
        auto ch157_delaysig = new SADF::signal<array<int,3>>("ch157_delaysig", 16);
        auto ch158_delaysig = new SADF::signal<array<int,2>>("ch158_delaysig", 16);
        auto ch161_delaysig = new SADF::signal<array<int,2>>("ch161_delaysig", 16);
        auto ch162_delaysig = new SADF::signal<array<int,1>>("ch162_delaysig", 16);
        auto ch163_delaysig = new SADF::signal<array<int,2>>("ch163_delaysig", 16);
        auto ch164_delaysig = new SADF::signal<array<int,3>>("ch164_delaysig", 16);
        auto ch165_delaysig = new SADF::signal<array<int,2>>("ch165_delaysig", 16);
        auto ch166_delaysig = new SADF::signal<array<int,1>>("ch166_delaysig", 16);
        auto ch167_delaysig = new SADF::signal<array<int,3>>("ch167_delaysig", 16);
        auto ch169_delaysig = new SADF::signal<array<int,2>>("ch169_delaysig", 16);
        auto ch170_delaysig = new SADF::signal<array<int,2>>("ch170_delaysig", 16);
        auto ch172_delaysig = new SADF::signal<array<int,2>>("ch172_delaysig", 16);
        auto ch173_delaysig = new SADF::signal<array<int,3>>("ch173_delaysig", 16);
        auto ch174_delaysig = new SADF::signal<array<int,1>>("ch174_delaysig", 16);
        auto ch175_delaysig = new SADF::signal<array<int,2>>("ch175_delaysig", 16);
        auto ch177_delaysig = new SADF::signal<array<int,2>>("ch177_delaysig", 16);
        auto ch179_delaysig = new SADF::signal<array<int,2>>("ch179_delaysig", 16);
        auto ch180_delaysig = new SADF::signal<array<int,3>>("ch180_delaysig", 16);
        auto ch181_delaysig = new SADF::signal<array<int,2>>("ch181_delaysig", 16);
        auto ch186_delaysig = new SADF::signal<array<int,3>>("ch186_delaysig", 16);
        auto ch187_delaysig = new SADF::signal<array<int,3>>("ch187_delaysig", 16);
        auto ch1_delay = SADF::make_delayn("ch1_delay", array<int,2>{}, 4, *ch1_delaysig, *ch1);
        auto ch2_delay = SADF::make_delayn("ch2_delay", array<int,3>{}, 6, *ch2_delaysig, *ch2);
        auto ch3_delay = SADF::make_delayn("ch3_delay", array<int,4>{}, 4, *ch3_delaysig, *ch3);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,2>{}, 2, *ch4_delaysig, *ch4);
        auto ch6_delay = SADF::make_delayn("ch6_delay", array<int,3>{}, 3, *ch6_delaysig, *ch6);
        auto ch7_delay = SADF::make_delayn("ch7_delay", array<int,2>{}, 9, *ch7_delaysig, *ch7);
        auto ch8_delay = SADF::make_delayn("ch8_delay", array<int,1>{}, 9, *ch8_delaysig, *ch8);
        auto ch9_delay = SADF::make_delayn("ch9_delay", array<int,1>{}, 3, *ch9_delaysig, *ch9);
        auto ch14_delay = SADF::make_delayn("ch14_delay", array<int,3>{}, 6, *ch14_delaysig, *ch14);
        auto ch16_delay = SADF::make_delayn("ch16_delay", array<int,3>{}, 6, *ch16_delaysig, *ch16);
        auto ch17_delay = SADF::make_delayn("ch17_delay", array<int,2>{}, 4, *ch17_delaysig, *ch17);
        auto ch18_delay = SADF::make_delayn("ch18_delay", array<int,2>{}, 12, *ch18_delaysig, *ch18);
        auto ch19_delay = SADF::make_delayn("ch19_delay", array<int,4>{}, 12, *ch19_delaysig, *ch19);
        auto ch20_delay = SADF::make_delayn("ch20_delay", array<int,2>{}, 6, *ch20_delaysig, *ch20);
        auto ch22_delay = SADF::make_delayn("ch22_delay", array<int,3>{}, 3, *ch22_delaysig, *ch22);
        auto ch23_delay = SADF::make_delayn("ch23_delay", array<int,3>{}, 9, *ch23_delaysig, *ch23);
        auto ch24_delay = SADF::make_delayn("ch24_delay", array<int,3>{}, 6, *ch24_delaysig, *ch24);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,2>{}, 9, *ch26_delaysig, *ch26);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,2>{}, 12, *ch28_delaysig, *ch28);
        auto ch30_delay = SADF::make_delayn("ch30_delay", array<int,2>{}, 6, *ch30_delaysig, *ch30);
        auto ch32_delay = SADF::make_delayn("ch32_delay", array<int,1>{}, 4, *ch32_delaysig, *ch32);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,2>{}, 3, *ch33_delaysig, *ch33);
        auto ch34_delay = SADF::make_delayn("ch34_delay", array<int,3>{}, 9, *ch34_delaysig, *ch34);
        auto ch36_delay = SADF::make_delayn("ch36_delay", array<int,2>{}, 6, *ch36_delaysig, *ch36);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,2>{}, 1, *ch38_delaysig, *ch38);
        auto ch40_delay = SADF::make_delayn("ch40_delay", array<int,2>{}, 12, *ch40_delaysig, *ch40);
        auto ch41_delay = SADF::make_delayn("ch41_delay", array<int,3>{}, 9, *ch41_delaysig, *ch41);
        auto ch42_delay = SADF::make_delayn("ch42_delay", array<int,3>{}, 12, *ch42_delaysig, *ch42);
        auto ch43_delay = SADF::make_delayn("ch43_delay", array<int,2>{}, 4, *ch43_delaysig, *ch43);
        auto ch47_delay = SADF::make_delayn("ch47_delay", array<int,2>{}, 9, *ch47_delaysig, *ch47);
        auto ch49_delay = SADF::make_delayn("ch49_delay", array<int,3>{}, 9, *ch49_delaysig, *ch49);
        auto ch50_delay = SADF::make_delayn("ch50_delay", array<int,2>{}, 4, *ch50_delaysig, *ch50);
        auto ch51_delay = SADF::make_delayn("ch51_delay", array<int,3>{}, 6, *ch51_delaysig, *ch51);
        auto ch54_delay = SADF::make_delayn("ch54_delay", array<int,1>{}, 4, *ch54_delaysig, *ch54);
        auto ch55_delay = SADF::make_delayn("ch55_delay", array<int,2>{}, 12, *ch55_delaysig, *ch55);
        auto ch58_delay = SADF::make_delayn("ch58_delay", array<int,2>{}, 3, *ch58_delaysig, *ch58);
        auto ch59_delay = SADF::make_delayn("ch59_delay", array<int,1>{}, 9, *ch59_delaysig, *ch59);
        auto ch61_delay = SADF::make_delayn("ch61_delay", array<int,3>{}, 9, *ch61_delaysig, *ch61);
        auto ch62_delay = SADF::make_delayn("ch62_delay", array<int,2>{}, 4, *ch62_delaysig, *ch62);
        auto ch63_delay = SADF::make_delayn("ch63_delay", array<int,3>{}, 9, *ch63_delaysig, *ch63);
        auto ch64_delay = SADF::make_delayn("ch64_delay", array<int,2>{}, 3, *ch64_delaysig, *ch64);
        auto ch66_delay = SADF::make_delayn("ch66_delay", array<int,2>{}, 4, *ch66_delaysig, *ch66);
        auto ch67_delay = SADF::make_delayn("ch67_delay", array<int,3>{}, 3, *ch67_delaysig, *ch67);
        auto ch69_delay = SADF::make_delayn("ch69_delay", array<int,2>{}, 2, *ch69_delaysig, *ch69);
        auto ch71_delay = SADF::make_delayn("ch71_delay", array<int,1>{}, 4, *ch71_delaysig, *ch71);
        auto ch72_delay = SADF::make_delayn("ch72_delay", array<int,2>{}, 9, *ch72_delaysig, *ch72);
        auto ch73_delay = SADF::make_delayn("ch73_delay", array<int,2>{}, 1, *ch73_delaysig, *ch73);
        auto ch74_delay = SADF::make_delayn("ch74_delay", array<int,3>{}, 9, *ch74_delaysig, *ch74);
        auto ch76_delay = SADF::make_delayn("ch76_delay", array<int,2>{}, 16, *ch76_delaysig, *ch76);
        auto ch77_delay = SADF::make_delayn("ch77_delay", array<int,2>{}, 1, *ch77_delaysig, *ch77);
        auto ch79_delay = SADF::make_delayn("ch79_delay", array<int,2>{}, 8, *ch79_delaysig, *ch79);
        auto ch80_delay = SADF::make_delayn("ch80_delay", array<int,2>{}, 2, *ch80_delaysig, *ch80);
        auto ch81_delay = SADF::make_delayn("ch81_delay", array<int,2>{}, 4, *ch81_delaysig, *ch81);
        auto ch82_delay = SADF::make_delayn("ch82_delay", array<int,3>{}, 9, *ch82_delaysig, *ch82);
        auto ch83_delay = SADF::make_delayn("ch83_delay", array<int,2>{}, 3, *ch83_delaysig, *ch83);
        auto ch84_delay = SADF::make_delayn("ch84_delay", array<int,2>{}, 4, *ch84_delaysig, *ch84);
        auto ch85_delay = SADF::make_delayn("ch85_delay", array<int,2>{}, 6, *ch85_delaysig, *ch85);
        auto ch88_delay = SADF::make_delayn("ch88_delay", array<int,2>{}, 3, *ch88_delaysig, *ch88);
        auto ch90_delay = SADF::make_delayn("ch90_delay", array<int,2>{}, 9, *ch90_delaysig, *ch90);
        auto ch93_delay = SADF::make_delayn("ch93_delay", array<int,3>{}, 2, *ch93_delaysig, *ch93);
        auto ch94_delay = SADF::make_delayn("ch94_delay", array<int,1>{}, 9, *ch94_delaysig, *ch94);
        auto ch95_delay = SADF::make_delayn("ch95_delay", array<int,2>{}, 4, *ch95_delaysig, *ch95);
        auto ch97_delay = SADF::make_delayn("ch97_delay", array<int,3>{}, 9, *ch97_delaysig, *ch97);
        auto ch98_delay = SADF::make_delayn("ch98_delay", array<int,1>{}, 2, *ch98_delaysig, *ch98);
        auto ch99_delay = SADF::make_delayn("ch99_delay", array<int,3>{}, 6, *ch99_delaysig, *ch99);
        auto ch100_delay = SADF::make_delayn("ch100_delay", array<int,4>{}, 3, *ch100_delaysig, *ch100);
        auto ch103_delay = SADF::make_delayn("ch103_delay", array<int,2>{}, 2, *ch103_delaysig, *ch103);
        auto ch104_delay = SADF::make_delayn("ch104_delay", array<int,1>{}, 6, *ch104_delaysig, *ch104);
        auto ch105_delay = SADF::make_delayn("ch105_delay", array<int,2>{}, 1, *ch105_delaysig, *ch105);
        auto ch106_delay = SADF::make_delayn("ch106_delay", array<int,2>{}, 4, *ch106_delaysig, *ch106);
        auto ch109_delay = SADF::make_delayn("ch109_delay", array<int,3>{}, 4, *ch109_delaysig, *ch109);
        auto ch113_delay = SADF::make_delayn("ch113_delay", array<int,3>{}, 4, *ch113_delaysig, *ch113);
        auto ch115_delay = SADF::make_delayn("ch115_delay", array<int,3>{}, 1, *ch115_delaysig, *ch115);
        auto ch117_delay = SADF::make_delayn("ch117_delay", array<int,3>{}, 9, *ch117_delaysig, *ch117);
        auto ch118_delay = SADF::make_delayn("ch118_delay", array<int,2>{}, 1, *ch118_delaysig, *ch118);
        auto ch122_delay = SADF::make_delayn("ch122_delay", array<int,2>{}, 6, *ch122_delaysig, *ch122);
        auto ch123_delay = SADF::make_delayn("ch123_delay", array<int,2>{}, 9, *ch123_delaysig, *ch123);
        auto ch127_delay = SADF::make_delayn("ch127_delay", array<int,3>{}, 12, *ch127_delaysig, *ch127);
        auto ch128_delay = SADF::make_delayn("ch128_delay", array<int,3>{}, 6, *ch128_delaysig, *ch128);
        auto ch129_delay = SADF::make_delayn("ch129_delay", array<int,2>{}, 3, *ch129_delaysig, *ch129);
        auto ch130_delay = SADF::make_delayn("ch130_delay", array<int,2>{}, 3, *ch130_delaysig, *ch130);
        auto ch131_delay = SADF::make_delayn("ch131_delay", array<int,2>{}, 4, *ch131_delaysig, *ch131);
        auto ch132_delay = SADF::make_delayn("ch132_delay", array<int,1>{}, 9, *ch132_delaysig, *ch132);
        auto ch133_delay = SADF::make_delayn("ch133_delay", array<int,1>{}, 9, *ch133_delaysig, *ch133);
        auto ch134_delay = SADF::make_delayn("ch134_delay", array<int,2>{}, 2, *ch134_delaysig, *ch134);
        auto ch135_delay = SADF::make_delayn("ch135_delay", array<int,1>{}, 16, *ch135_delaysig, *ch135);
        auto ch136_delay = SADF::make_delayn("ch136_delay", array<int,3>{}, 4, *ch136_delaysig, *ch136);
        auto ch139_delay = SADF::make_delayn("ch139_delay", array<int,2>{}, 12, *ch139_delaysig, *ch139);
        auto ch140_delay = SADF::make_delayn("ch140_delay", array<int,2>{}, 6, *ch140_delaysig, *ch140);
        auto ch141_delay = SADF::make_delayn("ch141_delay", array<int,3>{}, 3, *ch141_delaysig, *ch141);
        auto ch143_delay = SADF::make_delayn("ch143_delay", array<int,2>{}, 9, *ch143_delaysig, *ch143);
        auto ch144_delay = SADF::make_delayn("ch144_delay", array<int,3>{}, 9, *ch144_delaysig, *ch144);
        auto ch145_delay = SADF::make_delayn("ch145_delay", array<int,3>{}, 9, *ch145_delaysig, *ch145);
        auto ch146_delay = SADF::make_delayn("ch146_delay", array<int,1>{}, 2, *ch146_delaysig, *ch146);
        auto ch147_delay = SADF::make_delayn("ch147_delay", array<int,2>{}, 9, *ch147_delaysig, *ch147);
        auto ch149_delay = SADF::make_delayn("ch149_delay", array<int,3>{}, 2, *ch149_delaysig, *ch149);
        auto ch150_delay = SADF::make_delayn("ch150_delay", array<int,2>{}, 3, *ch150_delaysig, *ch150);
        auto ch152_delay = SADF::make_delayn("ch152_delay", array<int,3>{}, 4, *ch152_delaysig, *ch152);
        auto ch153_delay = SADF::make_delayn("ch153_delay", array<int,2>{}, 12, *ch153_delaysig, *ch153);
        auto ch154_delay = SADF::make_delayn("ch154_delay", array<int,3>{}, 6, *ch154_delaysig, *ch154);
        auto ch156_delay = SADF::make_delayn("ch156_delay", array<int,1>{}, 1, *ch156_delaysig, *ch156);
        auto ch157_delay = SADF::make_delayn("ch157_delay", array<int,3>{}, 3, *ch157_delaysig, *ch157);
        auto ch158_delay = SADF::make_delayn("ch158_delay", array<int,2>{}, 6, *ch158_delaysig, *ch158);
        auto ch161_delay = SADF::make_delayn("ch161_delay", array<int,2>{}, 12, *ch161_delaysig, *ch161);
        auto ch162_delay = SADF::make_delayn("ch162_delay", array<int,1>{}, 6, *ch162_delaysig, *ch162);
        auto ch163_delay = SADF::make_delayn("ch163_delay", array<int,2>{}, 16, *ch163_delaysig, *ch163);
        auto ch164_delay = SADF::make_delayn("ch164_delay", array<int,3>{}, 16, *ch164_delaysig, *ch164);
        auto ch165_delay = SADF::make_delayn("ch165_delay", array<int,2>{}, 6, *ch165_delaysig, *ch165);
        auto ch166_delay = SADF::make_delayn("ch166_delay", array<int,1>{}, 12, *ch166_delaysig, *ch166);
        auto ch167_delay = SADF::make_delayn("ch167_delay", array<int,3>{}, 3, *ch167_delaysig, *ch167);
        auto ch169_delay = SADF::make_delayn("ch169_delay", array<int,2>{}, 3, *ch169_delaysig, *ch169);
        auto ch170_delay = SADF::make_delayn("ch170_delay", array<int,2>{}, 4, *ch170_delaysig, *ch170);
        auto ch172_delay = SADF::make_delayn("ch172_delay", array<int,2>{}, 4, *ch172_delaysig, *ch172);
        auto ch173_delay = SADF::make_delayn("ch173_delay", array<int,3>{}, 2, *ch173_delaysig, *ch173);
        auto ch174_delay = SADF::make_delayn("ch174_delay", array<int,1>{}, 12, *ch174_delaysig, *ch174);
        auto ch175_delay = SADF::make_delayn("ch175_delay", array<int,2>{}, 1, *ch175_delaysig, *ch175);
        auto ch177_delay = SADF::make_delayn("ch177_delay", array<int,2>{}, 9, *ch177_delaysig, *ch177);
        auto ch179_delay = SADF::make_delayn("ch179_delay", array<int,2>{}, 9, *ch179_delaysig, *ch179);
        auto ch180_delay = SADF::make_delayn("ch180_delay", array<int,3>{}, 6, *ch180_delaysig, *ch180);
        auto ch181_delay = SADF::make_delayn("ch181_delay", array<int,2>{}, 9, *ch181_delaysig, *ch181);
        auto ch186_delay = SADF::make_delayn("ch186_delay", array<int,3>{}, 3, *ch186_delaysig, *ch186);
        auto ch187_delay = SADF::make_delayn("ch187_delay", array<int,3>{}, 4, *ch187_delaysig, *ch187);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{3, 1, 3, 2, 2, 4, 3, 3, 2}, {3, 1, 2, 3, 3, 2, 3, 1, 3}}}, {1, {{3, 1, 3, 2, 2, 4, 3, 3, 2}, {3, 1, 2, 3, 3, 2, 3, 1, 3}}}}, tie(*ch70, *ch27, *ch152, *ch122, *ch0, *ch62, *ch57, *ch126, *ch120), *a0_detectorsig, tie( *ch51_delaysig, *ch149_delaysig, *ch87, *ch1_delaysig, *ch176, *ch29, *ch158_delaysig, *ch99_delaysig, *ch113_delaysig));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{3, 2, 3, 3, 3, 3, 2, 1, 3}, {2, 3, 4, 3, 2, 1, 3, 4, 4}}}, {1, {{3, 2, 3, 3, 3, 3, 2, 1, 3}, {2, 3, 4, 3, 2, 1, 3, 4, 4}}}}, tie(*ch14, *ch181, *ch40, *ch147, *ch104, *ch33, *ch97, *ch28, *ch42), *a1_detectorsig, tie( *ch94_delaysig, *ch184, *ch111, *ch179_delaysig, *ch90_delaysig, *ch97_delaysig, *ch0, *ch129_delaysig, *ch148));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{3, 2, 1, 1, 2, 2, 2, 3, 1}, {3, 3, 2, 2, 2, 3, 2, 3}}}, {1, {{3, 2, 1, 1, 2, 2, 2, 3, 1}, {3, 3, 2, 2, 2, 3, 2, 3}}}}, tie(*ch24, *ch85, *ch113, *ch1, *ch3, *ch165, *ch109, *ch2), *a2_detectorsig, tie( *ch30_delaysig, *ch125, *ch101, *ch137, *ch109_delaysig, *ch136_delaysig, *ch119, *ch185, *ch35));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 3, 2, 2, 3, 3, 4, 4, 1, 3}, {3, 3, 3, 3, 2, 2, 2, 3}}}, {1, {{2, 3, 2, 2, 3, 3, 4, 4, 1, 3}, {3, 3, 3, 3, 2, 2, 2, 3}}}}, tie(*ch145, *ch60, *ch178, *ch21, *ch183, *ch30, *ch114, *ch111), *a3_detectorsig, tie( *ch85_delaysig, *ch145_delaysig, *ch116, *ch2_delaysig, *ch132_delaysig, *ch41_delaysig, *ch86, *ch19_delaysig, *ch169_delaysig, *ch177_delaysig));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 3, 3, 2, 2, 1, 3, 2}, {1, 3, 3, 1, 2, 3, 1, 3, 3, 3}}}, {1, {{1, 3, 3, 2, 2, 1, 3, 2}, {1, 3, 3, 1, 2, 3, 1, 3, 3, 3}}}}, tie(*ch93, *ch171, *ch20, *ch102, *ch136, *ch36, *ch4, *ch154, *ch128, *ch184), *a4_detectorsig, tie( *ch155, *ch78, *ch11, *ch46, *ch152_delaysig, *ch13, *ch151, *ch3_delaysig));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{2, 2, 1, 2, 3, 3, 4, 3}, {2, 2, 1, 2, 1, 3, 2, 3}}}, {1, {{2, 2, 1, 2, 3, 3, 4, 3}, {2, 2, 1, 2, 1, 3, 2, 3}}}}, tie(*ch98, *ch137, *ch65, *ch69, *ch5, *ch64, *ch35, *ch22), *a5_detectorsig, tie( *ch4_delaysig, *ch80_delaysig, *ch159, *ch93_delaysig, *ch6_delaysig, *ch88_delaysig, *ch48, *ch37));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{3, 4, 2, 1, 3, 1, 3, 1, 3}, {2, 2, 4, 4, 4, 1, 4, 3, 3}}}, {1, {{3, 4, 2, 1, 3, 1, 3, 1, 3}, {2, 2, 4, 4, 4, 1, 4, 3, 3}}}}, tie(*ch101, *ch134, *ch54, *ch43, *ch95, *ch115, *ch131, *ch129, *ch141), *a6_detectorsig, tie( *ch9_delaysig, *ch182, *ch102, *ch39, *ch25, *ch5, *ch44, *ch108, *ch142));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{2, 3, 1, 3, 4, 1, 1, 3, 2}, {3, 1, 3, 3, 1, 3, 3, 3, 2, 1}}}, {1, {{2, 3, 1, 3, 4, 1, 1, 3, 2}, {3, 1, 3, 3, 1, 3, 3, 3, 2, 1}}}}, tie(*ch41, *ch6, *ch123, *ch177, *ch124, *ch7, *ch112, *ch94, *ch185, *ch88), *a7_detectorsig, tie( *ch122_delaysig, *ch60, *ch150_delaysig, *ch21, *ch121, *ch22_delaysig, *ch68, *ch133_delaysig, *ch138));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{3, 2, 1, 1, 3, 3, 2, 2, 3, 3}, {1, 2, 3, 3, 3, 2, 4, 3, 2, 3}}}, {1, {{3, 2, 1, 1, 3, 3, 2, 2, 3, 3}, {1, 2, 3, 3, 3, 2, 4, 3, 2, 3}}}}, tie(*ch130, *ch99, *ch47, *ch133, *ch144, *ch158, *ch161, *ch34, *ch140, *ch132), *a8_detectorsig, tie( *ch117_delaysig, *ch180_delaysig, *ch91, *ch107, *ch82_delaysig, *ch181_delaysig, *ch31, *ch171, *ch7_delaysig, *ch8_delaysig));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{3, 2, 4, 3, 3, 2, 1, 2, 3, 3}, {1, 1, 4, 1, 4, 4, 3, 1, 3, 3}}}, {1, {{3, 2, 4, 3, 3, 2, 1, 2, 3, 3}, {1, 1, 4, 1, 4, 4, 3, 1, 3, 3}}}}, tie(*ch44, *ch186, *ch153, *ch157, *ch127, *ch55, *ch82, *ch142, *ch8, *ch74), *a9_detectorsig, tie( *ch59_delaysig, *ch89, *ch56, *ch144_delaysig, *ch75, *ch10, *ch100_delaysig, *ch57, *ch178, *ch23_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 1, 3, 3, 3, 2, 3, 2, 4, 4}, {2, 3, 1, 2, 1, 4, 3, 1, 3}}}, {1, {{2, 1, 3, 3, 3, 2, 3, 2, 4, 4}, {2, 3, 1, 2, 1, 4, 3, 1, 3}}}}, tie(*ch162, *ch59, *ch92, *ch87, *ch58, *ch160, *ch26, *ch9, *ch179), *a10_detectorsig, tie( *ch165_delaysig, *ch83_delaysig, *ch72_delaysig, *ch49_delaysig, *ch123_delaysig, *ch110, *ch47_delaysig, *ch24_delaysig, *ch18_delaysig, *ch174_delaysig));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{2, 1, 1, 2, 1, 4, 3, 2, 1}, {3, 2, 3, 1, 1, 3, 3, 3, 3}}}, {1, {{2, 1, 1, 2, 1, 4, 3, 2, 1}, {3, 2, 3, 1, 1, 3, 3, 3, 3}}}}, tie(*ch89, *ch119, *ch10, *ch12, *ch45, *ch110, *ch31, *ch116, *ch138), *a11_detectorsig, tie( *ch62_delaysig, *ch146_delaysig, *ch103_delaysig, *ch106_delaysig, *ch69_delaysig, *ch79_delaysig, *ch16_delaysig, *ch50_delaysig, *ch173_delaysig));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{1, 4, 3, 1, 2, 2, 3, 2, 2, 3, 3}, {2, 1, 2, 3, 3, 3, 2, 3, 3, 4}}}, {1, {{1, 4, 3, 1, 2, 2, 3, 2, 2, 3, 3}, {2, 1, 2, 3, 3, 3, 2, 3, 3, 4}}}}, tie(*ch78, *ch37, *ch11, *ch49, *ch63, *ch148, *ch51, *ch72, *ch23, *ch166), *a12_detectorsig, tie( *ch52, *ch139_delaysig, *ch34_delaysig, *ch168, *ch128_delaysig, *ch70, *ch147_delaysig, *ch154_delaysig, *ch36_delaysig, *ch143_delaysig, *ch74_delaysig));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{3, 2, 4, 2, 3, 3, 2, 3, 3}, {4, 2, 4, 3, 1, 3, 2, 2, 3, 3}}}, {1, {{3, 2, 4, 2, 3, 3, 2, 3, 3}, {4, 2, 4, 3, 1, 3, 2, 2, 3, 3}}}}, tie(*ch71, *ch173, *ch170, *ch91, *ch159, *ch168, *ch146, *ch103, *ch169, *ch150), *a13_detectorsig, tie( *ch58_delaysig, *ch53, *ch32_delaysig, *ch27, *ch186_delaysig, *ch157_delaysig, *ch12, *ch67_delaysig, *ch130_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{1, 1, 3, 2, 3, 1, 2, 1, 4, 3}, {1, 3, 2, 1, 1, 1, 1, 4, 1, 2, 3}}}, {1, {{1, 1, 3, 2, 3, 1, 2, 1, 4, 3}, {1, 3, 2, 1, 1, 1, 1, 4, 1, 2, 3}}}}, tie(*ch156, *ch100, *ch149, *ch77, *ch118, *ch105, *ch73, *ch172, *ch39, *ch13, *ch167), *a14_detectorsig, tie( *ch65, *ch105_delaysig, *ch124, *ch45, *ch96, *ch115_delaysig, *ch126, *ch77_delaysig, *ch17_delaysig, *ch92));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{3, 3, 1, 1, 3, 2, 3, 3, 3}, {3, 2, 2, 1, 2, 2, 2, 1, 1, 2}}}, {1, {{3, 3, 1, 1, 3, 2, 3, 3, 3}, {3, 2, 2, 1, 2, 2, 2, 1, 1, 2}}}}, tie(*ch180, *ch106, *ch187, *ch15, *ch46, *ch125, *ch176, *ch53, *ch80, *ch50), *a15_detectorsig, tie( *ch183, *ch140_delaysig, *ch134_delaysig, *ch98_delaysig, *ch104_delaysig, *ch187_delaysig, *ch114, *ch162_delaysig, *ch14_delaysig));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{1, 1, 1, 3, 1, 4, 1, 2, 4}, {3, 3, 3, 1, 4, 1, 1, 3, 2}}}, {1, {{1, 1, 1, 3, 1, 4, 1, 2, 4}, {3, 3, 3, 1, 4, 1, 1, 3, 2}}}}, tie(*ch68, *ch52, *ch83, *ch108, *ch84, *ch38, *ch175, *ch107, *ch155), *a16_detectorsig, tie( *ch38_delaysig, *ch118_delaysig, *ch175_delaysig, *ch33_delaysig, *ch156_delaysig, *ch66_delaysig, *ch73_delaysig, *ch15, *ch81_delaysig));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{1, 2, 3, 3, 3, 1, 2, 1, 3}, {2, 3, 2, 1, 3, 3, 3, 1, 3, 1}}}, {1, {{1, 2, 3, 3, 3, 1, 2, 1, 3}, {2, 3, 2, 1, 3, 3, 3, 1, 3, 1}}}}, tie(*ch151, *ch143, *ch16, *ch25, *ch90, *ch117, *ch61, *ch67, *ch75, *ch96), *a17_detectorsig, tie( *ch64_delaysig, *ch20_delaysig, *ch112, *ch63_delaysig, *ch61_delaysig, *ch167_delaysig, *ch120, *ch141_delaysig, *ch26_delaysig));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{1, 3, 3, 3, 4, 1, 3, 1, 1, 3, 4, 3}, {3, 1, 1, 3, 3, 3, 1, 4, 2, 1}}}, {1, {{1, 3, 3, 3, 4, 1, 3, 1, 1, 3, 4, 3}, {3, 1, 1, 3, 3, 3, 1, 4, 2, 1}}}}, tie(*ch139, *ch81, *ch17, *ch19, *ch121, *ch174, *ch182, *ch76, *ch79, *ch48), *a18_detectorsig, tie( *ch84_delaysig, *ch127_delaysig, *ch161_delaysig, *ch42_delaysig, *ch76_delaysig, *ch54_delaysig, *ch28_delaysig, *ch172_delaysig, *ch95_delaysig, *ch40_delaysig, *ch164_delaysig, *ch55_delaysig));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{3, 3, 1, 4, 4, 1, 1, 1, 3}, {3, 2, 1, 1, 4, 4, 3, 3, 4}}}, {1, {{3, 3, 1, 4, 4, 1, 1, 1, 3}, {3, 2, 1, 1, 4, 4, 3, 3, 4}}}}, tie(*ch86, *ch29, *ch32, *ch66, *ch163, *ch164, *ch56, *ch18, *ch135), *a19_detectorsig, tie( *ch153_delaysig, *ch160, *ch131_delaysig, *ch135_delaysig, *ch163_delaysig, *ch43_delaysig, *ch71_delaysig, *ch170_delaysig, *ch166_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 3, 2, 3, 2, 1, 1, 3, 3, 3, 3, 2, 3, 1, 1, 2, 1, 3, 4, 4}},{1,{2, 3, 2, 3, 2, 1, 1, 3, 3, 3, 3, 2, 3, 1, 1, 2, 1, 3, 4, 4}}}, 1, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
