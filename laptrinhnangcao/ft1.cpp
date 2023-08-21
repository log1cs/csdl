#include<iostream>
#include<cstring>

int main()
{
    std::string a[100]; int n;
    std::cout << "N = "; std::cin >> n;

    int i = 0;
    for (int i = 0; i <= n; i++)
    {
        // Workaround for fucking broken input
        std::cout << "Ten ngon ngu lap trinh thu " << i + 1 << ": ";
        std::getline(std::cin, a[i]);
    }

    std::string min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[0].size() > a[i].size())
        {
            a[i] = min;
        }
    }

    std::cout << "Ngon ngu ngan nhat cuoi cung la: " << min;
    return 0;
}