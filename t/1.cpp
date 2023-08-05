#include<iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a + b > c) {
        std::cout << "-" << std::endl;
    } else {
        std::cout << "+" << std::endl;
    }

    return 0;
}