#include<iostream>

int main()
{
    int a[10000], n; 
    do 
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n < 1 || n > 49);

    for (int i = 1; i <= n; i++)
    {
        std::cout << "So thu " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << "Cho x = ";
    std::cin >> a[0];

    std::cout << "Day so:";
    for (int i = 0; i <= n; i++)
    {
        std::cout << " " << a[i];
    }
    return 0;
}