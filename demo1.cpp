#include <iostream>

void demo1(int a, int b)
{
    int sum, sub, div, prod, total;
    sum = a + b;
    sub = a - b;
    div = a / b;
    prod = a * b;
    total = sum + sub + div + prod; 

    std::cout << "sum  = "  << sum  << std::endl;
    std::cout << "sub  = "  << sum  << std::endl; // <--- bug here
    std::cout << "div  = "  << div  << std::endl; // <--- undefined behaviour
    std::cout << "prod = " << prod << std::endl;
    std::cout << "tot  = " << total << std::endl;
}
