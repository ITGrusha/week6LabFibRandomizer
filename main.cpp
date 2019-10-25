#include "R.hpp"
#include <iostream>
#include <cmath>

int main() {
    std::cout << "How many random numbers do you want?" << std::endl;
    int numberCount = 0;
    std::cin >> numberCount;
    unsigned long long r = 0;
    std::cout << "Get your numbers!" << std::endl;
    for (int i = 0; i < numberCount; ++i) {
        r = R();
        std::cout << r << '\n';
    }
    return 0;
}
