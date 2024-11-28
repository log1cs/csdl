#include<iostream>
#include<cmath>

bool snt(int z)
{
    if (z <= 1)
    {
        return false;
    } else if (z > 2) {
        if (z % 2 == 0) {
            return false;
        }

        for (int i = 3; i < sqrt((float)z); i += 2)
        {
            if (z % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool scp(int l)
{
    int i = 0;
    while (i * i <= l)
    {
        if (i * i == l)
        {
            return true;
        }
        i++;
    }
    return false;
}

void print(int a[], int n)
{
    std::cout << "Day so vua nhap: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void printscp(int a[], int n)
{
    std::cout << "Day so chinh phuong: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i]) == true)
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}

void printnt(int a[], int n)
{
    std::cout << "Day so nguyen to:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == true) 
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}

void tong(int a[], int n)
{
    int z = 0;
    std::cout << "Tong cac so chinh phuong co trong mang = ";
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i]) == true)
        {
            z = z + a[i];
        }
    }
    std::cout << z << std::endl;
}

void nhap()
{
    int a[10000], n;
    std::cout << "Nhap n: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "A[" << i << "] = ";
        std::cin >> a[i];
    }

    print(a, n);
    printscp(a, n);
    printnt(a, n);
    tong(a, n);
}

int main()
{
    nhap();
}