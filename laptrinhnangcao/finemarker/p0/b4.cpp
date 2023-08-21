#include<iostream>
#include<cstring>

int main()
{
    std::string a[10000];
    int n;

    std::cout << "N = ";
    std::cin >> n;

    getline(std::cin, a[0]);
    
    for (int i = 1; i <= n; i++)
    {
        std::cout << "Ten ngon ngu lap trinh thu " << i << ": ";
        getline(std::cin, a[i]);
    }

    std::string min = a[1];

    for (int i = 1; i <= n; i++)
    {
        if(min.length() >= a[i].length())
        {
            min = a[i];
        }
    }

    std::cout << "Ngon ngu ngan nhat cuoi cung la: " << min;
    return 0;
}