#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n;
    float ret = 0;
    std::cin >> n;

    for (float i = 1; i < n; i++) {
        ret += ((1 / (2 * i - 1)) * 1.00) - ((1 / (2 * i)) * 1.00);
    }

    std::cout << ret << std::endl;
}
