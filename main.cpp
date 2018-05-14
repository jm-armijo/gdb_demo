#include <cassert>
#include <iostream>
#include <functional>

#include "demo1.hpp"
#include "demo2.hpp"
#include "demo3.hpp"

int main(int argc, char * argv[])
{
    assert(argc == 2);
    int demo_id = std::atoi(argv[1]);

    std::cout << "Enter two integer values:" << std::endl;
    int a, b;
    std::cin >> a >> b;

    std::function<void(int,int)> f;
    switch (demo_id) {
        case 1: {
            f = demo_gdb::demo1;
            break;
        }
        case 2: {
            f = demo_gdb::demo2;
            break;
        }
        case 3: {
            f = demo_gdb::demo3;
            break;
        }
    }

    f(a,b);

    return 0;
}
