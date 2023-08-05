#include<iostream>
#include<math.h>

int main() {
    int min, max, a;

    do {
        std::cin >> a;

    if (a > max && a != 0) {
        max = a;
    } else if (a < min && a != 0) {
        min = a;
    }

    } while (a != 0);

    std::cout << max << " " << min << std::endl;
    return 0;
}
