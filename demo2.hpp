#include <iostream>

namespace demo_gdb {
    auto demo2 = [](int a, int b){
        int sum, sub, div, prod;
        sum = a + b;
        sub = a - b;
        div = a / b; // <--- undefined behaviour
        prod = a * b;

        long total {0};
        total += sum;
        total += sub;
        total += div;
        total += prod; 

        std::cout << "sum  = " << sum   << std::endl;
        std::cout << "sub  = " << sum   << std::endl; // <--- bug here
        std::cout << "div  = " << div   << std::endl;
        std::cout << "prod = " << prod  << std::endl;
        std::cout << "tot  = " << total << std::endl;
    };
}
