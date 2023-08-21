#include<iostream>
#include<cmath>

bool cp(int c)
{
    int x = sqrt(c);
    return x * x == c ? true:false;
}

int main()
{
    int n;
    std::cout << "Nhap N = ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "n khong duong!";
    } else {
        std::cout << "So chinh phuong:";
        for (int i = 0; i < n; i++)
        {
            if (cp(i) == true)
            {
                std::cout << " " << i;
            }
        }
    }
    
    return 0;
}