#include<iostream>
#include<cmath>

int main()
{
    double a[10000];
    int n;

    std::cout << "N = ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    double min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    std::cout << "Gia tri nho nhat trong A: " << min;
    return 0;
}