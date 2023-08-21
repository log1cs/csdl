#include<iostream>
#include<cstring>

int main()
{
    std::string a[100];
    int n;

    do
    {
        std::cout << "N = ";
        std::cin >> n;
    } while (n < 1 || n > 9);

    // Yes. You are not wrong.
    // Workaround for broken input.
    std::getline(std::cin, a[0]);
    
    for (int i = 1; i <= n; i++)
    {
        std::cout << "Ho ten thu " << i << ": ";
        std::getline(std::cin, a[i]);
    }

    std::string min = a[1];

    for (int i = 1; i <= n; i++)
    {
        if (min.size() > a[i].size())
        {
            min = a[i];
        }
    }

    std::cout << "Ho ten ngan nhat (dau tien): " << min << std::endl;
    return 0;
}
