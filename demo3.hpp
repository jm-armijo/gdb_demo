#include <iostream>
#include <limits>

namespace demo_gdb {
    int product(int a, int b) {
        static int count {0};
        if (count == b)
            return a;     // <-- bug here
        ++count;

        return a + product(a, b);
    }

    void demo3(int a, int b)
    {
        int sum, sub, div, prod;
        sum = a + b;
        sub = a - b;
        if (b == 0)
            div = std::numeric_limits<int>::max();
        else
            div = a / b;
        prod = product(a, b);

        long total {0};
        total += sum;
        total += sub;
        total += div;
        total += prod; 

        std::cout << "sum  = " << sum   << std::endl;
        std::cout << "sub  = " << sub   << std::endl;
        std::cout << "div  = " << div   << std::endl;
        std::cout << "prod = " << prod  << std::endl;
        std::cout << "tot  = " << total << std::endl;
    }
}
