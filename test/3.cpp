#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n;
    float ret = 0, cet;
    std::cin >> n;

    for (float i = 1; i <= n; i++) {
            cet = 1 / i;
            ret = ret + cet;
    }

    std::cout << ret << std::endl;
}
