#include<iostream>
#include<cmath>

bool cp(int n)
{
    int x = sqrt(n);
    return x * x == n ? true:false;
}

int main()
{
    int a[10000], n, dem = 0; 
    do 
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n < 1 || n > 19);

    for (int i = 0; i < n; i++)
    {
        std::cout << "So thu " << i + 1 << ": ";
        std::cin >> a[i];
    }

    std::cout << "Dao nguoc day so:";
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << " " << a[i];
        if (cp(a[i]) == true)
        {
            dem++;
            s += a[i];
        }
    } 

    std::cout << std::endl;
    std::cout << "Day co " << dem << " so chinh phuong." << std::endl;
    std::cout << "Tong cac so chinh phuong S = " << s;
}
