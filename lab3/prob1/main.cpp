#include <iostream>
#include "math.h"

int main () {
    std::cout << Math::Add(3, 1, 2, 3) << ' ';
    std::cout << Math::Add("2", "4") << '\n';

    return 0;
}