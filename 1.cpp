#include <iostream>
#include <algorithm> 
#include <cassert>
#include <cmath>
using namespace std;

int factorial(int num) {
    int f = 1;
    
    if (num == 0) return 1;
    for(int i=1; i<=num; i++) {
        f *= i;
    }
    return f;
}

int factSqr(int num) {
    return pow(factorial(num), 2);
}

int main() {
    // Тест квадрата факториала нуля
    assert(factSqr(0) == 1);

    // Тесты квадратов факториала положительных чисел
    assert(factSqr(1) == 1);
    assert(factSqr(2) == 4);
    assert(factSqr(3) == 36);
    assert(factSqr(4) == 576);
    assert(factSqr(5) == 14400);

    cout << "LOXOVKICH" << endl;

    return 0;
}