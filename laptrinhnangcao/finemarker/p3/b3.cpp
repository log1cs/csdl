#include<iostream>
#include<cmath>

bool cp(int n)
{
    int x = sqrt(n);
    return x * x == n ? true:false;
}

int main()
{
    int a[10000], n, s = 0, dem = 0; 
    do 
    {
        std::cout << "N = ";
        std::cin >> n;
    } while (n < 1 || n > 99);

    for (int i = 0; i < n; i++)
    {
        std::cout << "So thu " << i + 1 << ": ";
        std::cin >> a[i];
    }

    std::cout << "Cho x = ";
    std::cin >> a[0];

    std::cout << "In day so:";
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << " " << a[i];
        if (cp(a[i]) == true)
        {   
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    } 

    std::cout << std::endl;
    if (max == 0)
    {
        std::cout << "Day khong co so chinh phuong!";
    } else {
        std::cout << "So chinh phuong lon nhat: " << max;
    }

    return 0;
}
