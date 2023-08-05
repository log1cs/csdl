#include<iostream>
#include<math.h>

int main()
{
    int x, i , a = 1;
    float e, s = 0.00;
    std::cin >> x >> e;

    for (i = 1; e * a >= 1; i++)
    {
        a *= i;
        s += 1.0 * pow(x, i - 1) / a;
    }

    std::cout << s;
    return 0;
}