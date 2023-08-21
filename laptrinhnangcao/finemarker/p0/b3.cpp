#include<iostream>
#include<cmath>

int main()
{
    float a[10000];
    int n;

    std::cout << "N = ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "A[" << i << "] = ";
        std::cin >> a[i];
    }

    std::cout << "Cac phan tu o vi tri chan:";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << " " << a[i];
        }
    }

    return 0;
}