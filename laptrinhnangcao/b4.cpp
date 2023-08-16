#include<iostream>
#include<cmath>

bool cp(int n)
{
    int x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }

    return false;
}

int main()
{
    int a[100], n;

    do
    {
        std::cout << "N = ";
        std::cin >> n;
    } while (n < 0 || n > 19);

    for (int i = 0; i < n; i++)
    {
        std::cout << "So thu " << i + 1 << ": ";
        std::cin >> a[i];
    }

    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            std::cout << a[i];
        } else {
            std::cout << a[i] << " ";
        }
    }

    int dem = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (cp(a[i]) == true)
        {
            max = a[i];
            if (max > a[i])
            {
                max = a[i];
            }
        }
    }

    std::cout << std::endl;
    std::cout << "So chinh phuong lon nhat trong mang la: " << max << std::endl;
}