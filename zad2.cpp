#include <iostream>

void reverseShow(int n) {
    std::cout << n << std::endl;
    if (n > 1) reverseShow(n-1);
}

int main() {
    reverseShow(5);
}