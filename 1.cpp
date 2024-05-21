#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>
#include <cassert>
using namespace std;

int factorial(int num) {
    int f = 1;
    
    if (num == 0) return 1;
    for(int i=1; i<=num; i++) {
        f *= i;
    }
    return f;
}

int main() {
    // Тест факториала нуля
    assert(factorial(0) == 1);

    // Тесты факториала положительных чисел
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);

    return 0;
}