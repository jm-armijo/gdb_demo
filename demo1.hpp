#include <iostream>

namespace demo_gdb {
    void demo1(int a, int b)
    {
        int sum, sub, div, prod;
        long total = 0;

        sum = a + b;
        sub = a - b;
        div = a / b;
        prod = a * b;

        total += sum;
        total += sub;
        total += div;
        total += prod; 

        std::cout << "sum  = "  << sum  << std::endl;
        std::cout << "sub  = "  << sum  << std::endl; // <--- bug here
        std::cout << "div  = "  << div  << std::endl; // <--- undefined behaviour
        std::cout << "prod = " << prod << std::endl;
        std::cout << "tot  = " << total << std::endl;
    }
}
