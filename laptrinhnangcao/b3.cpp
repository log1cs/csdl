#include<iostream>
#include<cmath>

bool cp(int n)
{
    int x = sqrt(n);

    if (x * x == n)
    {
        return true;
    }

    return false;
}

int main()
{
    int n, a[100];
    std::cout << "Nhap N = ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "n khong duong!";
        return 0;
    } else 
    {
        std::cout << "So chinh phuong: ";
        for (int i = 0; i < n; i++)
        {
            if (cp(i) == true && i == )
            {
                std::cout << i << " ";
            }
        }
    }

    return 0;
}