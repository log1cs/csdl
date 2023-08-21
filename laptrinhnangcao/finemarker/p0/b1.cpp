#include<iostream>

int main()
{
    int a[10000], n, dem = 0;
    std::cout << "N = ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    std::cout << "Day A =";
    for (int i = 0; i < n; i++)
    {   
        std::cout << " " << a[i];
        if (a[i] < 0)
        {
            dem++;
        }
    }
    std::cout << std::endl;
    std::cout << "So so am trong A: " << dem;
    return 0;
}