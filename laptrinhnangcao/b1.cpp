#include<iostream>
#include<cmath>

bool checknt(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int a[100], n, x;
    do
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n < 0 || n > 99);

    for (int i = 0; i < n; i++)
    {
        std::cout << "So thu " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << "x = ";
    std::cin >> x;

    a[n] = x;
    std::cout << "In day so: ";

    int dem = 0;
    for (int i = 0; i <= n; i++)
    {
        if (checknt(a[i]) == true)
        {
            dem++;
        }

        if (i == n)
        {
            std::cout << a[i];
        } else 
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "Day co " << dem << " so nguyen to.";
}