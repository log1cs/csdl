#include<iostream>
#include<cmath>

int main()
{
    float a[10000], x;
    int n, dai = 0;

    do
    {
        std::cout << "Cho so phan tu n = ";
        std::cin >> n;
    } while (n < 5);

    for (int i = 1; i <= n; i++)
    {
        std::cout << "Nhap phan tu thu " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << std::endl;
    std::cout << "Hien thi danh sach:";

    for (int i = 1; i <= n; i++)
    {
        std::cout << " " << a[i];
    }

    std::cout << std::endl;
    std::cout << "Cho x = ";
    std::cin >> x;

    a[0] = x;
    a[n + 1] = x;

    std::cout << "Hay them x vao dau va cuoi danh sach." << std::endl; 
    std::cout << "Hien thi danh sach:";

    for (int i = 0; i <= n + 1; i++)
    {
        std::cout << " " << a[i];
    }   

    std::cout << std::endl;
    std::cout << "Hay xoa o cuoi danh sach:" << std::endl;
    std::cout << "Hien thi danh sach:";
    
    for (int i = 0; i <= n; i++)
    {
        dai = i;
        std::cout << " " << a[i];
    }
    std::cout << std::endl;
    std::cout << "Do dai cua DS = " << dai + 1;
}