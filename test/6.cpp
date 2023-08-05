#include<iostream>
#include<math.h>

using namespace std;

int main () {
    float e, ret = 0;

    std::cin >> e;

    for (float i = 1; i < 1/e; i++) {
        ret += 1/i;
    }

    std::cout << ret << std::endl;
}
