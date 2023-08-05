#include<iostream>
#include<math.h>

int main() {
    float a, n;
    std::cin >> a >> n;

    // Wrapper to check
    if (a < 1 || a > pow(10, 6) || n < 1 || n > pow(10, 6)) {
        return 0;
    }

    float ret = fmod(pow(a, n), (pow(10.0, 9.0) + 7.0));

    std::cout << ret << std::endl;
    return 0;
}