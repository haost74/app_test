#include <iostream>
#include "src/some_class.h"

int main(int argsc, char** argsv)
{
    some_class sc;
    std::cout << sc.sum(10, 7) << '\n';
    return 0;
}