//
// Created by MrGra on 10/25/2019.
//

#include "R.hpp"

int _M = 20;

unsigned long long R() {
    return Fib() % _M;
}

int setRM(int m) {
    return _M = m;
}