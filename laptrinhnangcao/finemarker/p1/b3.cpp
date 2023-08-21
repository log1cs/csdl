#include<iostream>
#include<cmath>

int main()
{
    int n;
    std::cout << "N = ";
    std::cin >> n;
    
    if (n < 3 || n > 99) {
        std::cout << "n khong thoa man!";
    } else {
        double s = 1;
        for (double i = 2; i <= n; i++)
        {
            s += 1 / ((i - 1) * i);
        }

        std::cout << "Tong S = " << s;
    }

    return 0;
}