#include "Rand.hpp"
#include <iostream>
#include <cmath>

int main() {
    std::cout << "How many random numbers do you want?" << std::endl;
    int numberCount = 0;
    std::cin >> numberCount;
    unsigned long long r = 0;
    Rand rand(20, 3);
    std::cout << "Get your numbers!" << std::endl;
    for (int i = 0; i < numberCount; ++i) {
        r = rand();
        std::cout << r << '\n';
    }
    return 0;
}
