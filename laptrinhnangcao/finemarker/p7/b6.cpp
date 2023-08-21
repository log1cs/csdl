#include<iostream>
#include<cmath>

bool checknt(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checknt(i) == true)
        {
            std::cout << " " << i;
        }
    }
}

int main()
{
    int n, x;

    do
    {
        std::cout << "Cho n = ";
        std::cin >> n;
    } while (n < 9 || n > 100);

    std::cout << "Hien thi lai danh sach:";
    print(n);

    std::cout << std::endl;
    std::cout << "Cho so nguyen x = ";
    std::cin >> x;

    if (checknt(x) == false) {
        std::cout << "x khong phai la so nguyen to!" << std::endl;
        std::cout << "Hien thi lai danh sach:";
        print(n);
        return 0;
    } else {
        std::cout << "x la so nguyen to. Hay them x vao dau danh sach." << std::endl;
        std::cout << "Hien thi lai danh sach: " << x;
        print(n);
    }
    return 0;
}