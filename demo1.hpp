#include <iostream>

namespace demo_gdb {
    int add(int a, int b)
    {
        int result {0};
        result += a;
        result += b;
        return result;
    }

    void demo1(int a, int b)
    {
        int sum, sub, div, prod;
        sum = add(a, b);
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
    }
}
