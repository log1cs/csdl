#include<iostream>
#include<math.h>

int check(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * check(n - 1);
}

int main()
{
    double x, e, c, ret = 1.00;

    std::cin >> x >> e;

    for (int i = 1; i * 1.00/check(i) >= 1; i++)
    {
        c = pow(x, (i * 1.00));
        std::cout << check(i) << std::endl;
        ret += pow(c, check(i));
    }

    std::cout << std::endl;
    std::cout << /*check(6) << " " <<*/ c << " " << ret << std::endl;
    return 0;
}