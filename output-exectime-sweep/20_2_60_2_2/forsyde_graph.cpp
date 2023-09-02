#include <forsyde.hpp>
//#include <iostream>

using namespace sc_core;
using namespace ForSyDe;
using namespace std;

void a0_func(tuple<vector<array<int,4>>, vector<array<int,4>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<58;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a1_func(tuple<vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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
    const tuple<vector<array<int,1>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a3_func(tuple<vector<array<int,3>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,4>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a4_func(tuple<vector<array<int,1>>, vector<array<int,1>>, vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a5_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a6_func(tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<61;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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
    const tuple<vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<61;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a8_func(tuple<vector<array<int,1>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,2>>, vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a9_func(tuple<vector<array<int,3>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a10_func(tuple<vector<array<int,2>>, vector<array<int,1>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,2>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a11_func(tuple<vector<array<int,1>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a12_func(tuple<vector<array<int,3>>, vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>, vector<array<int,4>>, vector<array<int,4>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<58;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<58;j++)
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

void a13_func(tuple<vector<array<int,2>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,1>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<58;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a14_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a15_func(tuple<vector<array<int,3>>, vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a16_func(tuple<vector<array<int,2>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<58;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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

void a17_func(tuple<vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,2>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<60;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a18_func(tuple<vector<array<int,4>>, vector<array<int,4>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,3>>, vector<array<int,3>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<58;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<60;j++)
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

void a19_func(tuple<vector<array<int,3>>, vector<array<int,3>>>& out,
    const unsigned int& _scenario_state,
    const tuple<vector<array<int,4>>>& inp) {
    static int i=0;volatile int j,k,l;
    switch(_scenario_state) {
        case 0: {
            for(j=0;j<59;j++)
                for(k=0;k<100;k++)
                    l++;
            break;
        }
        case 1: {
            for(j=0;j<59;j++)
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
map<unsigned int,vector<unsigned int>> detector1_scenario_table {{0,{1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 3, 1, 2, 1, 2, 1, 2, 1}},{1,{2, 3, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 3, 1, 2, 1, 2, 1, 2, 1}}};

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
        auto ch0 = new SADF::signal<array<int,3>>("ch0", 16);
        auto ch1 = new SADF::signal<array<int,1>>("ch1", 16);
        auto ch2 = new SADF::signal<array<int,3>>("ch2", 16);
        auto ch3 = new SADF::signal<array<int,2>>("ch3", 16);
        auto ch4 = new SADF::signal<array<int,2>>("ch4", 16);
        auto ch5 = new SADF::signal<array<int,2>>("ch5", 16);
        auto ch6 = new SADF::signal<array<int,3>>("ch6", 16);
        auto ch7 = new SADF::signal<array<int,1>>("ch7", 16);
        auto ch8 = new SADF::signal<array<int,3>>("ch8", 16);
        auto ch9 = new SADF::signal<array<int,2>>("ch9", 16);
        auto ch10 = new SADF::signal<array<int,2>>("ch10", 16);
        auto ch11 = new SADF::signal<array<int,4>>("ch11", 16);
        auto ch12 = new SADF::signal<array<int,2>>("ch12", 16);
        auto ch13 = new SADF::signal<array<int,2>>("ch13", 16);
        auto ch14 = new SADF::signal<array<int,4>>("ch14", 16);
        auto ch15 = new SADF::signal<array<int,2>>("ch15", 16);
        auto ch16 = new SADF::signal<array<int,2>>("ch16", 16);
        auto ch17 = new SADF::signal<array<int,3>>("ch17", 16);
        auto ch18 = new SADF::signal<array<int,3>>("ch18", 16);
        auto ch19 = new SADF::signal<array<int,2>>("ch19", 16);
        auto ch20 = new SADF::signal<array<int,2>>("ch20", 16);
        auto ch21 = new SADF::signal<array<int,2>>("ch21", 16);
        auto ch22 = new SADF::signal<array<int,2>>("ch22", 16);
        auto ch23 = new SADF::signal<array<int,1>>("ch23", 16);
        auto ch24 = new SADF::signal<array<int,3>>("ch24", 16);
        auto ch25 = new SADF::signal<array<int,2>>("ch25", 16);
        auto ch26 = new SADF::signal<array<int,1>>("ch26", 16);
        auto ch27 = new SADF::signal<array<int,2>>("ch27", 16);
        auto ch28 = new SADF::signal<array<int,2>>("ch28", 16);
        auto ch29 = new SADF::signal<array<int,1>>("ch29", 16);
        auto ch30 = new SADF::signal<array<int,4>>("ch30", 16);
        auto ch31 = new SADF::signal<array<int,3>>("ch31", 16);
        auto ch32 = new SADF::signal<array<int,3>>("ch32", 16);
        auto ch33 = new SADF::signal<array<int,1>>("ch33", 16);
        auto ch34 = new SADF::signal<array<int,3>>("ch34", 16);
        auto ch35 = new SADF::signal<array<int,3>>("ch35", 16);
        auto ch36 = new SADF::signal<array<int,4>>("ch36", 16);
        auto ch37 = new SADF::signal<array<int,3>>("ch37", 16);
        auto ch38 = new SADF::signal<array<int,4>>("ch38", 16);
        auto ch39 = new SADF::signal<array<int,1>>("ch39", 16);
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
        auto ch9_delaysig = new SADF::signal<array<int,2>>("ch9_delaysig", 16);
        auto ch15_delaysig = new SADF::signal<array<int,2>>("ch15_delaysig", 16);
        auto ch19_delaysig = new SADF::signal<array<int,2>>("ch19_delaysig", 16);
        auto ch23_delaysig = new SADF::signal<array<int,1>>("ch23_delaysig", 16);
        auto ch25_delaysig = new SADF::signal<array<int,2>>("ch25_delaysig", 16);
        auto ch26_delaysig = new SADF::signal<array<int,1>>("ch26_delaysig", 16);
        auto ch28_delaysig = new SADF::signal<array<int,2>>("ch28_delaysig", 16);
        auto ch33_delaysig = new SADF::signal<array<int,1>>("ch33_delaysig", 16);
        auto ch35_delaysig = new SADF::signal<array<int,3>>("ch35_delaysig", 16);
        auto ch38_delaysig = new SADF::signal<array<int,4>>("ch38_delaysig", 16);
        auto ch9_delay = SADF::make_delayn("ch9_delay", array<int,2>{}, 4, *ch9_delaysig, *ch9);
        auto ch15_delay = SADF::make_delayn("ch15_delay", array<int,2>{}, 4, *ch15_delaysig, *ch15);
        auto ch19_delay = SADF::make_delayn("ch19_delay", array<int,2>{}, 4, *ch19_delaysig, *ch19);
        auto ch23_delay = SADF::make_delayn("ch23_delay", array<int,1>{}, 3, *ch23_delaysig, *ch23);
        auto ch25_delay = SADF::make_delayn("ch25_delay", array<int,2>{}, 4, *ch25_delaysig, *ch25);
        auto ch26_delay = SADF::make_delayn("ch26_delay", array<int,1>{}, 1, *ch26_delaysig, *ch26);
        auto ch28_delay = SADF::make_delayn("ch28_delay", array<int,2>{}, 2, *ch28_delaysig, *ch28);
        auto ch33_delay = SADF::make_delayn("ch33_delay", array<int,1>{}, 1, *ch33_delaysig, *ch33);
        auto ch35_delay = SADF::make_delayn("ch35_delay", array<int,3>{}, 2, *ch35_delaysig, *ch35);
        auto ch38_delay = SADF::make_delayn("ch38_delay", array<int,4>{}, 2, *ch38_delaysig, *ch38);
        auto a0 = SADF::make_kernelMN("a0", a0_func, {{0, {{1, 2, 2}, {1, 2, 2}}}, {1, {{1, 2, 2}, {1, 2, 3}}}}, tie(*ch14, *ch36, *ch0), *a0_detectorsig, tie( *ch6, *ch5, *ch39));
        auto a1 = SADF::make_kernelMN("a1", a1_func, {{0, {{1, 2, 2}, {2}}}, {1, {{2, 2, 2}, {1}}}}, tie(*ch1), *a1_detectorsig, tie( *ch0, *ch8, *ch2));
        auto a2 = SADF::make_kernelMN("a2", a2_func, {{0, {{2, 1}, {1}}}, {1, {{3, 1}, {1}}}}, tie(*ch3), *a2_detectorsig, tie( *ch1, *ch4));
        auto a3 = SADF::make_kernelMN("a3", a3_func, {{0, {{2, 2, 1}, {2, 2, 2}}}, {1, {{2, 2, 2}, {3, 2, 2}}}}, tie(*ch2, *ch19, *ch25), *a3_detectorsig, tie( *ch25_delaysig, *ch21, *ch36));
        auto a4 = SADF::make_kernelMN("a4", a4_func, {{0, {{1, 2}, {1, 1, 1}}}, {1, {{1, 1}, {1, 1, 1}}}}, tie(*ch7, *ch33, *ch29), *a4_detectorsig, tie( *ch22, *ch3));
        auto a5 = SADF::make_kernelMN("a5", a5_func, {{0, {{3, 2}, {1, 2, 1}}}, {1, {{3, 2}, {1, 1, 1}}}}, tie(*ch27, *ch4, *ch22), *a5_detectorsig, tie( *ch31, *ch20));
        auto a6 = SADF::make_kernelMN("a6", a6_func, {{0, {{3, 2}, {1, 1, 2}}}, {1, {{3, 2}, {1, 2, 2}}}}, tie(*ch10, *ch5, *ch21), *a6_detectorsig, tie( *ch24, *ch9_delaysig));
        auto a7 = SADF::make_kernelMN("a7", a7_func, {{0, {{1, 1}, {1}}}, {1, {{1, 1}, {2}}}}, tie(*ch6), *a7_detectorsig, tie( *ch27, *ch33_delaysig));
        auto a8 = SADF::make_kernelMN("a8", a8_func, {{0, {{1, 1, 1}, {1}}}, {1, {{1, 1, 1}, {1}}}}, tie(*ch26), *a8_detectorsig, tie( *ch7, *ch12, *ch29));
        auto a9 = SADF::make_kernelMN("a9", a9_func, {{0, {{2}, {2, 3}}}, {1, {{2}, {3, 3}}}}, tie(*ch8, *ch11), *a9_detectorsig, tie( *ch15_delaysig));
        auto a10 = SADF::make_kernelMN("a10", a10_func, {{0, {{2, 1, 1}, {1, 1, 2}}}, {1, {{2, 1, 1}, {1, 2, 2}}}}, tie(*ch20, *ch39, *ch9), *a10_detectorsig, tie( *ch13, *ch28_delaysig, *ch35_delaysig));
        auto a11 = SADF::make_kernelMN("a11", a11_func, {{0, {{1, 2}, {3, 2}}}, {1, {{1, 2}, {3, 2}}}}, tie(*ch23, *ch32), *a11_detectorsig, tie( *ch18, *ch10));
        auto a12 = SADF::make_kernelMN("a12", a12_func, {{0, {{1, 2, 2}, {2, 1, 2}}}, {1, {{1, 2, 2}, {2, 1, 2}}}}, tie(*ch34, *ch31, *ch24), *a12_detectorsig, tie( *ch23_delaysig, *ch11, *ch30));
        auto a13 = SADF::make_kernelMN("a13", a13_func, {{0, {{1}, {1, 1}}}, {1, {{1}, {1, 1}}}}, tie(*ch16, *ch12), *a13_detectorsig, tie( *ch26_delaysig));
        auto a14 = SADF::make_kernelMN("a14", a14_func, {{0, {{2, 1}, {2}}}, {1, {{2, 1}, {2}}}}, tie(*ch13), *a14_detectorsig, tie( *ch19_delaysig, *ch32));
        auto a15 = SADF::make_kernelMN("a15", a15_func, {{0, {{1}, {2, 2}}}, {1, {{2}, {2, 2}}}}, tie(*ch35, *ch28), *a15_detectorsig, tie( *ch14));
        auto a16 = SADF::make_kernelMN("a16", a16_func, {{0, {{3}, {2}}}, {1, {{3}, {2}}}}, tie(*ch15), *a16_detectorsig, tie( *ch34));
        auto a17 = SADF::make_kernelMN("a17", a17_func, {{0, {{1}, {2}}}, {1, {{1}, {2}}}}, tie(*ch17), *a17_detectorsig, tie( *ch16));
        auto a18 = SADF::make_kernelMN("a18", a18_func, {{0, {{1, 1}, {1, 3}}}, {1, {{1, 1}, {1, 3}}}}, tie(*ch38, *ch30), *a18_detectorsig, tie( *ch17, *ch37));
        auto a19 = SADF::make_kernelMN("a19", a19_func, {{0, {{2}, {1, 2}}}, {1, {{2}, {1, 2}}}}, tie(*ch18, *ch37), *a19_detectorsig, tie( *ch38_delaysig));
        auto detector1 = SADF::make_detectorMN("detector1", detectorcds_func, detectorkss_func, {{0,{1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 3, 1, 2, 1, 2, 1, 2, 1}},{1,{2, 3, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 3, 1, 2, 1, 2, 1, 2, 1}}}, 0, {}, tie(*a0_detectorsig, *a1_detectorsig, *a2_detectorsig, *a3_detectorsig, *a4_detectorsig, *a5_detectorsig, *a6_detectorsig, *a7_detectorsig, *a8_detectorsig, *a9_detectorsig, *a10_detectorsig, *a11_detectorsig, *a12_detectorsig, *a13_detectorsig, *a14_detectorsig, *a15_detectorsig, *a16_detectorsig, *a17_detectorsig, *a18_detectorsig, *a19_detectorsig), tie());
    }
};

int sc_main(int argc, char* argv[]) {
    sdf3_graph_repeatitions top("top");
    sc_start();
    return 0;
}
