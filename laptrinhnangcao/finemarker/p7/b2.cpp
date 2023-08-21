#include<iostream>
#include<vector>

int main()
{
    int a[10000], n, p, x, tong = 0;

    do
    {
        std::cout << "Cho n = ";
        std::cin >> n;
    } while (n <= 4 || n > 99);
    
    for (int i = 1; i <= n; i++)
    {
        std::cout << "Nhap phan tu " << i << ": ";
        std::cin >> a[i];
    }
    std::cout << "Cho x = ";
    std::cin >> x;

    a[0] = x;
    std::cout << "Hay them x vao dau danh sach!" << std::endl;

    std::cout << "In danh sach:";
    for (int i = 0; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tong += a[i];
        }

        std::cout << " " << a[i];
    }
    std::cout << std::endl;
    std::cout << "Tong cac so chan: " << tong;
    return 0;
}