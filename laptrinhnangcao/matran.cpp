#include<iostream>
#include<iomanip>
#include<cmath>

bool cp(int n)
{
    int x = sqrt(n);

    if (x * x == n)
    {
        return true;
    }

    return false;
}

int main()
{
    int a[100][100], n;

    std::cout << "n = ";
    std::cin >> n;

    int i = 0, j = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "A[" << i << "][" << j << "] = ";
            std::cin >> a[i][j];
        }
    }

    std::cout << std::endl;
    std::cout << "Output: " << std::endl;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(cp(a[i][j]) == true)
            {
                dem++;
            }

            std::cout << std::setw(4) << a[i][j];
        }
        
        std::cout << std::endl;
    }

    std::cout << "Chinh phuong = " << dem << std::endl;
    return 0;
}