#include<iostream>

int main()
{
    int n, x, tong;
    do
    {
        std::cout << "Cho n = ";
        std::cin >> n;
    } while (n < 11);
    
    std::cout << "Hien thi danh sach:";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << " " << i;
        }
    }

    std::cout << std::endl;
    std::cout << "Cho so nguyen x = ";
    std::cin >> x;

    tong = x;

    if (x % 2 == 0)
    {
        std::cout << "Them x vao dau danh sach!" << std::endl;
        std::cout << "Hien thi danh sach:";

        std::cout << " " << x;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << " " << i;
                tong += i;
            }
        }
    } else {
        std::cout << "Them x vao cuoi danh sach!" << std::endl;
        std::cout << "Hien thi danh sach:";

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << " " << i;
                tong += i;
            }
        }

        std::cout << " " << x;
    }

    std::cout << std::endl;
    std::cout << "Tong cac phan tu: " << tong;
    return 0;
}