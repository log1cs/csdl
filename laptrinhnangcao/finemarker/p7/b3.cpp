#include<iostream>

int main()
{
    float a[10000], x, tong = 0;;
    int n;

    do
    {
        std::cout << "Cho n = ";
        std::cin >> n;
    } while (n <= 4 || n > 99);
    
    for (int i = 1; i <= n; i++)
    {
        std::cout << "Nhap phan tu thu " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << "Hien thi danh sach:";
    
    for (int i = 1; i <= n; i++)
    {
        std::cout << " " << a[i];
    }

    std::cout << std::endl;
    std::cout << "Hay xoa phan tu o dau va cuoi danh sach!" << std::endl;

    std::cout << "Hien thi danh sach:";

    for (int i = 2; i <= n - 1; i++)
    {
        std::cout << " " << a[i];
    }

    std::cout << std::endl;
    std::cout << "Cho x = ";
    std::cin >> x;

    a[1] = x;
    a[n] = x;
    std::cout << std::endl;
    std::cout << "Hay them x vao dau va cuoi danh sach!" << std::endl;
    std::cout << "Hien thi danh sach:";

    for (int i = 1; i <= n; i++)
    {
        std::cout << " " << a[i];
        tong += a[i];
    }

    std::cout << std::endl;
    std::cout << "Tong cac phan tu: " << tong;
    return 0;
}