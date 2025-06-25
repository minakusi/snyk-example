#include "utils.h"

int dangerousDivide(int x) {
    return 10 / x; // Potential division by zero if x == 0
}

int intermediateLayer(int x) {
    return dangerousDivide(x);
}

int calculateDangerousOperation(int value) {
    return intermediateLayer(value); // Deep call path leading to risky operation
}