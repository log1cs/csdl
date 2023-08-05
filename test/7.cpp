#include<iostream>
#include<math.h>

using namespace std;

int main () {
    float e, ret = 0.0;
    int i = 1;

    std::cin >> e;

    if (e == 0) {
        std::cout << "Not valid" << std::endl;
        return 0;
    }   

    if (e < 1)
    {
        i = 1;
        while (1/i >= e)
        {
            ret += pow(-1, i+1) * 1.0 / i;
            i++;
        }
    }

//    for (int i = 1; 1/i <= e; i++)
//    {
//        if (i % 2 == 0) {
//            ret -= 1/i;
//        } else {
//            ret += 1/i;
//        }
//    }

    std::cout << ret << std::endl;

    return 0;
}