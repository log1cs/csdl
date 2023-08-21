#include<iostream>
#include<cmath>

int main()
{
    int n;
    float x;

    std::cout << "n = ";
    std::cin >> n;

    std::cout << "x = ";
    std::cin >> x;

    if (n < 1 || n > 19) {
        std::cout << "n khong thoa man!";
    } else {
        double s = 1;
        for (double i = 2; i <= n; i++)
        {
            s += pow(x, i - 1) / i;
        }

        std::cout << "Tong S = " << s;
    }

    return 0;
}