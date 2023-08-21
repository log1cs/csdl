#include<iostream>
#include<cmath>

int main()
{
    int a[10000], n;
    std::cout << "N = ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    int max = a[0], dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            dem++;
        }
    }

    std::cout << "Gia tri lon nhat cua A: " << max << std::endl;
    std::cout << "So phan tu co gia tri lon nhat: " << dem << std::endl;
    return 0;
}