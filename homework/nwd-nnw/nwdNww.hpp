#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    while (rhs != 0) {
        const int tmp = lhs % rhs;
        lhs = rhs;
        rhs = tmp;
    }
    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    if (rhs == 0) {
        return 0;
    }
    return std::abs(lhs / NWD(lhs, rhs) * rhs);
}
