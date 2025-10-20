#include <iostream>

int sumEven(int n) {
    if (n <= 0) return 0;
    if (n%2 == 0) {
        return n + sumEven(n-2);
    } else {
        return sumEven(n-1);
    }
}

int main() {
    std::cout << sumEven(5) << std::endl;
}