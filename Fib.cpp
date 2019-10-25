//
// Created by MrGra on 10/25/2019.
//

#include "Fib.hpp"
static unsigned long long F0 = 0,
        F1 = 1;

unsigned long long Fib() {
    F0 = F1 + F0;
    F1 = F0 - F1;
    return F0;
}

void resetFib() {
    F0 = 0;
    F1 = 1;
}