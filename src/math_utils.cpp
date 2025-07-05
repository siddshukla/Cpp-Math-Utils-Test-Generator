#include "math_utils.h"

int MathUtils::multiply(int a, int b) {
    return a * b;
}

int MathUtils::divide(int a, int b) {
    if (b == 0) return 0; // simple error handling
    return a / b;
}
