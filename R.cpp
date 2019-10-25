//
// Created by MrGra on 10/25/2019.
//

#include "R.hpp"

unsigned long long _M = 20;

unsigned long long R() {
    return Fib() % _M;
}

unsigned long long setRM(unsigned long long m) {
    return _M = m;
}