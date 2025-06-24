#include "utils.h"
#include <iostream>

int globalArray[10];

int divide(int a, int b) {
    return a / b;  // 🔴 division by zero 가능
}

int main() {
    int* leak = new int[100];  // 🔴 memory leak (delete 없음)

    int index = 15;
    globalArray[index] = 5;  // 🔴 buffer overflow

    std::cout << "5 / 0 = " << divide(5, 0) << std::endl;  // 🔴 실제 0으로 나눔

    return 0;
}