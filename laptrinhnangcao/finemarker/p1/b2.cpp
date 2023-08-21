#include<iostream>
#include<cmath>

int main()
{
    int n;
    std::cout << "N = ";
    std::cin >> n;
    
    if (n < 2 || n > 20) {
        std::cout << "n khong thoa man!";
    } else {
        int eq = 1;
        for (int i = 1; i <= n; i++)
        {
            eq += (i - 1) * i * (i + 1);
        }
        std::cout << "Tong A = " << eq;
    }

    return 0;
}