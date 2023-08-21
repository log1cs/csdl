#include<iostream>

#include<iostream>
#include<cmath>

int main()
{
    double n;
    std::cout << "Sai so e = ";
    std::cin >> n;
    
    if (n < 0 || n > 1) {
        std::cout << "e khong thoa man!";
    } else {
        double s = 1;

        for (int i = 2; (1/i) <= n; i++)
        {
            s += 1 / i;
        }

        std::cout << "Tong S = " << s;
    }

    return 0;
}