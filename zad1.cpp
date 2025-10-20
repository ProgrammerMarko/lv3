#include <iostream>

void show(int n) {
    if (n > 1) show(n-1);
    std::cout << n << std::endl;
}

int main() {
    show(5);
}