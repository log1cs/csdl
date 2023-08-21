#include<iostream>
#include<cmath>

bool nt(int n)
{
    if (n < 2)
    {
        return false;
    } else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }

        for (int i = 3; i < sqrt(n); i += 2)
        {
            if (n % i  == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int a[10000], n, dem = 0; 
    do 
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n < 1 || n > 99);

    for (int i = 0; i < n; i++)
    {
        std::cout << "So thu " << i + 1 << ": ";
        std::cin >> a[i];
    }

    std::cout << "x = ";
    std::cin >> a[n];

    for (int i = 0; i < n; i++)
    {
        if (nt(a[i]) == true)
        {   
            dem++;
        }
    }
    
    std::cout << "In day so:";
    for (int i = 0; i <= n; i++)
    {
        std::cout << " " << a[i];
    } 

    std::cout << std::endl;
    std::cout << "Day co " << dem << " so nguyen to.";
    return 0;
}
