#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,3>>>& out,
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

void a1_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,4>>>& inp) {
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

void a2_func(tuple<vector<array<int,2>>>& out,
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

void a3_func(tuple<vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a3_func iter: "<<i++<<std::endl;
}

void a4_func(tuple<vector<array<int,2>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a4_func iter: "<<i++<<std::endl;
}

void a5_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& out,
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

void a6_func(tuple<vector<array<int,4>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a6_func iter: "<<i++<<std::endl;
}

void a7_func(tuple<vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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

void a8_func(tuple<vector<array<int,2>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>>& inp) {
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

void a9_func(tuple<vector<array<int,1>>, vector<array<int,3>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a9_func iter: "<<i++<<std::endl;
}

void a10_func(tuple<vector<array<int,2>>, vector<array<int,2>>>& out,
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

void a11_func(tuple<vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,1>>>& inp) {
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

void a12_func(tuple<vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a12_func iter: "<<i++<<std::endl;
}

void a13_func(tuple<vector<array<int,2>>>& out,
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

void a14_func(tuple<vector<array<int,2>>, vector<array<int,1>>>& out,
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
        default: {
            ;
            break;
        }
    }
    
    // std::cout<<"from: a14_func iter: "<<i++<<std::endl;
}

void a15_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
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

void a16_func(tuple<vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,4>>>& inp) {
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
    
    // std::cout<<"from: a16_func iter: "<<i++<<std::endl;
}

void a17_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a17_func iter: "<<i++<<std::endl;
}

void a18_func(tuple<vector<array<int,4>>>& out,
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

void a19_func(tuple<vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a19_func iter: "<<i++<<std::endl;
}

void a20_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a20_func iter: "<<i++<<std::endl;
}

void a21_func(tuple<vector<array<int,2>>, vector<array<int,2>>>& out,
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
    
    // std::cout<<"from: a21_func iter: "<<i++<<std::endl;
}

void a22_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a22_func iter: "<<i++<<std::endl;
}

void a23_func(tuple<vector<array<int,3>>>& out,
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
    
    // std::cout<<"from: a23_func iter: "<<i++<<std::endl;
}

void a24_func(tuple<vector<array<int,2>>>& out,
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
    
    // std::cout<<"from: a24_func iter: "<<i++<<std::endl;
}

void a25_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a25_func iter: "<<i++<<std::endl;
}

void a26_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
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
    
    // std::cout<<"from: a26_func iter: "<<i++<<std::endl;
}

void a27_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>, vector<array<int,4>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a27_func iter: "<<i++<<std::endl;
}

void a28_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<22;j++)
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
    
    // std::cout<<"from: a28_func iter: "<<i++<<std::endl;
}

void a29_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a29_func iter: "<<i++<<std::endl;
}

void a30_func(tuple<vector<array<int,3>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a30_func iter: "<<i++<<std::endl;
}

void a31_func(tuple<vector<array<int,1>>, vector<array<int,2>>>& out,
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
    
    // std::cout<<"from: a31_func iter: "<<i++<<std::endl;
}

void a32_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>, vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a32_func iter: "<<i++<<std::endl;
}

void a33_func(tuple<vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
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
    
    // std::cout<<"from: a33_func iter: "<<i++<<std::endl;
}

void a34_func(tuple<vector<array<int,4>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,1>>>& inp) {
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
    
    // std::cout<<"from: a34_func iter: "<<i++<<std::endl;
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 3, 2, 1, 3, 1, 2, 2, 1, 1, 3, 2}},{1,{1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 2, 1, 1, 3, 2}}};

void detectorkss_func(tuple<vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>, vector<unsigned int>>& out,
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
    get<20>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][20],current_scenario);
    get<21>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][21],current_scenario);
    get<22>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][22],current_scenario);
    get<23>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][23],current_scenario);
    get<24>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][24],current_scenario);
    get<25>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][25],current_scenario);
    get<26>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][26],current_scenario);
    get<27>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][27],current_scenario);
    get<28>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][28],current_scenario);
    get<29>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][29],current_scenario);
    get<30>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][30],current_scenario);
    get<31>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][31],current_scenario);
    get<32>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][32],current_scenario);
    get<33>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][33],current_scenario);
    get<34>(out) = vector<unsigned int>(detector1_scenario_table[current_scenario][34],current_scenario);
}

SC_MODULE(sdf3_graph_repeatitions) {
    SC_CTOR(sdf3_graph_repeatitions) {
        auto ch0 = new SADF::signal<array<int,2>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,2>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,2>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,3>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,1>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,2>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,2>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,3>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,1>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,2>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,4>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,3>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,2>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,3>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,3>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,4>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,1>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,2>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,2>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,3>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,1>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,1>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,2>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,2>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,2>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,3>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,2>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,2>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,2>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,3>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,2>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,2>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,3>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,2>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,3>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,2>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,2>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,3>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,2>>("ch39", 16);
        auto ch40 = new SADF::signal<array<int,1>>("ch40", 16);
        auto ch41 = new SADF::signal<array<int,3>>("ch41", 16);
        auto ch42 = new SADF::signal<array<int,3>>("ch42", 16);
        auto ch43 = new SADF::signal<array<int,2>>("ch43", 16);
        auto ch44 = new SADF::signal<array<int,4>>("ch44", 16);
        auto ch45 = new SADF::signal<array<int,2>>("ch45", 16);
        auto ch46 = new SADF::signal<array<int,2>>("ch46", 16);
        auto ch47 = new SADF::signal<array<int,1>>("ch47", 16);
        auto ch48 = new SADF::signal<array<int,1>>("ch48", 16);
        auto ch49 = new SADF::signal<array<int,1>>("ch49", 16);
        auto ch50 = new SADF::signal<array<int,3>>("ch50", 16);
        auto ch51 = new SADF::signal<array<int,2>>("ch51", 16);
        auto ch52 = new SADF::signal<array<int,4>>("ch52", 16);
        auto ch53 = new SADF::signal<array<int,2>>("ch53", 16);
        auto ch54 = new SADF::signal<array<int,1>>("ch54", 16);
        auto ch55 = new SADF::signal<array<int,3>>("ch55", 16);
        auto ch56 = new SADF::signal<array<int,2>>("ch56", 16);
        auto ch57 = new SADF::signal<array<int,4>>("ch57", 16);
        auto ch58 = new SADF::signal<array<int,3>>("ch58", 16);
        auto ch59 = new SADF::signal<array<int,2>>("ch59", 16);
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
        auto a20_detectorsig = new SADF::signal<unsigned int>("a20_detectorsig", 16);
        auto a21_detectorsig = new SADF::signal<unsigned int>("a21_detectorsig", 16);
        auto a22_detectorsig = new SADF::signal<unsigned int>("a22_detectorsig", 16);
        auto a23_detectorsig = new SADF::signal<unsigned int>("a23_detectorsig", 16);
        auto a24_detectorsig = new SADF::signal<unsigned int>("a24_detectorsig", 16);
        auto a25_detectorsig = new SADF::signal<unsigned int>("a25_detectorsig", 16);
        auto a26_detectorsig = new SADF::signal<unsigned int>("a26_detectorsig", 16);
        auto a27_detectorsig = new SADF::signal<unsigned int>("a27_detectorsig", 16);
        auto a28_detectorsig = new SADF::signal<unsigned int>("a28_detectorsig", 16);
        auto a29_detectorsig = new SADF::signal<unsigned int>("a29_detectorsig", 16);
        auto a30_detectorsig = new SADF::signal<unsigned int>("a30_detectorsig", 16);
        auto a31_detectorsig = new SADF::signal<unsigned int>("a31_detectorsig", 16);
        auto a32_detectorsig = new SADF::signal<unsigned int>("a32_detectorsig", 16);
        auto a33_detectorsig = new SADF::signal<unsigned int>("a33_detectorsig", 16);
        auto a34_detectorsig = new SADF::signal<unsigned int>("a34_detectorsig", 16);
        auto ch4_delaysig = new SADF::signal<array<int,1>>("ch4_delaysig", 16);
        auto ch5_delaysig = new SADF::signal<array<int,2>>("ch5_delaysig", 16);
        auto ch15_delaysig = new SADF::signal<array<int,4>>("ch15_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,2>>("ch26_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,2>>("ch28_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,3>>("ch38_delaysig", 16);
        auto ch41_delaysig = new SADF::signal<array<int,3>>("ch41_delaysig", 16);
        auto ch55_delaysig = new SADF::signal<array<int,3>>("ch55_delaysig", 16);
        auto ch4_delay = SADF::make_delayn("ch4_delay", array<int,1>{}, 1, *ch4_delaysig, *ch4);
        auto ch5_delay = SADF::make_delayn("ch5_delay", array<int,2>{}, 2, *ch5_delaysig, *ch5);
        auto ch15_delay = SADF::make_delayn("ch15_delay", array<int,4>{}, 4, *ch15_delaysig, *ch15);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,2>{}, 6, *ch26_delaysig, *ch26);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,2>{}, 4, *ch28_delaysig, *ch28);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,3>{}, 9, *ch38_delaysig, *ch38);
        auto ch41_delay = SADF::make_delayn("ch41_delay", array<int,3>{}, 1, *ch41_delaysig, *ch41);
        auto ch55_delay = SADF::make_delayn("ch55_delay", array<int,3>{}, 4, *ch55_delaysig, *ch55);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{2}, {1}}}, {1, {{1}, {1}}}}, tie(*ch3), *a0_detectorsig, tie( *ch0));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 2}, {2}}}, {1, {{2, 2}, {1}}}}, tie(*ch0), *a1_detectorsig, tie( *ch1, *ch44));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{1}, {2}}}, {1, {{1}, {1}}}}, tie(*ch1), *a2_detectorsig, tie( *ch2));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{1}, {2, 1}}}, {1, {{1}, {1, 2}}}}, tie(*ch6, *ch2), *a3_detectorsig, tie( *ch49));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 2, 2}, {2, 1}}}, {1, {{1, 2, 1}, {2, 1}}}}, tie(*ch5, *ch4), *a4_detectorsig, tie( *ch43, *ch8, *ch3));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{1}, {1, 2, 2}}}, {1, {{1}, {1, 3, 1}}}}, tie(*ch13, *ch9, *ch16), *a5_detectorsig, tie( *ch4_delaysig));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{2, 1}, {3, 3}}}, {1, {{2, 1}, {1, 1}}}}, tie(*ch10, *ch54), *a6_detectorsig, tie( *ch7, *ch5_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{3, 3, 1}, {1}}}, {1, {{2, 3, 1}, {1}}}}, tie(*ch47), *a7_detectorsig, tie( *ch23, *ch50, *ch6));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{2, 2}, {1, 2}}}, {1, {{2, 2}, {1, 2}}}}, tie(*ch45, *ch7), *a8_detectorsig, tie( *ch28_delaysig, *ch42));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{1, 2}, {1, 2, 2}}}, {1, {{1, 3}, {1, 2, 2}}}}, tie(*ch8, *ch58, *ch15), *a9_detectorsig, tie( *ch39, *ch36));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{1, 1, 2}, {2, 1}}}, {1, {{1, 1, 2}, {2, 1}}}}, tie(*ch36, *ch18), *a10_detectorsig, tie( *ch9, *ch31, *ch56));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{2, 2}, {1, 3}}}, {1, {{2, 2}, {2, 2}}}}, tie(*ch11, *ch46), *a11_detectorsig, tie( *ch10, *ch54));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{3, 3}, {1, 1}}}, {1, {{3, 1}, {2, 2}}}}, tie(*ch14, *ch12), *a12_detectorsig, tie( *ch32, *ch11));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{1}, {1}}}, {1, {{2}, {1}}}}, tie(*ch17), *a13_detectorsig, tie( *ch12));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{1}, {1, 1}}}, {1, {{1}, {1, 1}}}}, tie(*ch34, *ch20), *a14_detectorsig, tie( *ch13));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{1}, {2}}}, {1, {{2}, {2}}}}, tie(*ch19), *a15_detectorsig, tie( *ch14));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{1, 2}, {2, 1}}}, {1, {{1, 2}, {2, 1}}}}, tie(*ch42, *ch30), *a16_detectorsig, tie( *ch59, *ch15_delaysig));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{1}, {1, 1, 2}}}, {1, {{1}, {1, 1, 2}}}}, tie(*ch35, *ch25, *ch29), *a17_detectorsig, tie( *ch16));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{1}, {3}}}, {1, {{2}, {3}}}}, tie(*ch52), *a18_detectorsig, tie( *ch17));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{2, 2}, {2, 1}}}, {1, {{1, 3}, {2, 1}}}}, tie(*ch21, *ch22), *a19_detectorsig, tie( *ch47, *ch18));
        auto a20 = SADF::make_kernelMN("a20", a20_func, {{0, {{1, 2}, {2}}}, {1, {{2, 2}, {2}}}}, tie(*ch55), *a20_detectorsig, tie( *ch19, *ch24));
        auto a21 = SADF::make_kernelMN("a21", a21_func, {{0, {{1}, {2, 1}}}, {1, {{1}, {2, 1}}}}, tie(*ch39, *ch27), *a21_detectorsig, tie( *ch20));
        auto a22 = SADF::make_kernelMN("a22", a22_func, {{0, {{1}, {3}}}, {1, {{1}, {3}}}}, tie(*ch26), *a22_detectorsig, tie( *ch21));
        auto a23 = SADF::make_kernelMN("a23", a23_func, {{0, {{1}, {1}}}, {1, {{1}, {1}}}}, tie(*ch41), *a23_detectorsig, tie( *ch22));
        auto a24 = SADF::make_kernelMN("a24", a24_func, {{0, {{3}, {2}}}, {1, {{1}, {1}}}}, tie(*ch23), *a24_detectorsig, tie( *ch46));
        auto a25 = SADF::make_kernelMN("a25", a25_func, {{0, {{1, 2}, {2}}}, {1, {{1, 2}, {2}}}}, tie(*ch24), *a25_detectorsig, tie( *ch51, *ch58));
        auto a26 = SADF::make_kernelMN("a26", a26_func, {{0, {{2}, {2}}}, {1, {{1}, {2}}}}, tie(*ch59), *a26_detectorsig, tie( *ch25));
        auto a27 = SADF::make_kernelMN("a27", a27_func, {{0, {{2, 1, 2}, {2}}}, {1, {{2, 1, 2}, {1}}}}, tie(*ch50), *a27_detectorsig, tie( *ch57, *ch52, *ch26_delaysig));
        auto a28 = SADF::make_kernelMN("a28", a28_func, {{0, {{2, 1}, {2}}}, {1, {{2, 1}, {2}}}}, tie(*ch37), *a28_detectorsig, tie( *ch48, *ch27));
        auto a29 = SADF::make_kernelMN("a29", a29_func, {{0, {{2, 1}, {2, 2, 3}}}, {1, {{2, 1}, {2, 2, 3}}}}, tie(*ch28, *ch40, *ch57), *a29_detectorsig, tie( *ch55_delaysig, *ch37));
        auto a30 = SADF::make_kernelMN("a30", a30_func, {{0, {{2}, {2, 1}}}, {1, {{1}, {2, 1}}}}, tie(*ch33, *ch48), *a30_detectorsig, tie( *ch29));
        auto a31 = SADF::make_kernelMN("a31", a31_func, {{0, {{2}, {1, 3}}}, {1, {{2}, {1, 3}}}}, tie(*ch49, *ch53), *a31_detectorsig, tie( *ch30));
        auto a32 = SADF::make_kernelMN("a32", a32_func, {{0, {{1, 2, 1, 2}, {2, 1, 2}}}, {1, {{1, 1, 1, 2}, {3, 1, 2}}}}, tie(*ch31, *ch43, *ch51), *a32_detectorsig, tie( *ch34, *ch35, *ch41_delaysig, *ch45));
        auto a33 = SADF::make_kernelMN("a33", a33_func, {{0, {{3, 1}, {3, 1}}}, {1, {{3, 1}, {3, 2}}}}, tie(*ch38, *ch32), *a33_detectorsig, tie( *ch38_delaysig, *ch53));
        auto a34 = SADF::make_kernelMN("a34", a34_func, {{0, {{2, 2}, {2, 2}}}, {1, {{2, 2}, {1, 3}}}}, tie(*ch44, *ch56), *a34_detectorsig, tie( *ch33, *ch40));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 3, 2, 1, 3, 1, 2, 2, 1, 1, 3, 2}},{1,{1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 2, 1, 1, 3, 2}}}, 0, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig, *a20_detectorsig, *a21_detectorsig, *a22_detectorsig, *a23_detectorsig, *a24_detectorsig, *a25_detectorsig, *a26_detectorsig, *a27_detectorsig, *a28_detectorsig, *a29_detectorsig, *a30_detectorsig, *a31_detectorsig, *a32_detectorsig, *a33_detectorsig, *a34_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
