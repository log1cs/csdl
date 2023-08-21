#include<iostream>
#include<vector>

int main()
{
    std::vector<double> sp1;
    double p, x;
    int n;

    do
    {
        std::cout << "Cho N = ";
        std::cin >> n;
    } while (n <= -1 || n > 99);
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "Phan tu thu " << i + 1 << ": ";
        std::cin >> p;
        sp1.push_back(p);
    }

    std::cout << "Danh sach:";
    for (int i = 0; i < n; i++)
    {
        std::cout << " " << sp1[i];
    }

    std::cout << std::endl;
    std::cout << "Cho x = ";
    std::cin >> x;

    sp1.push_back(x);

    std::cout << "Danh sach:";
    for (int i = 0; i < sp1.size(); i++)
    {
        std::cout << " " << sp1[i];
    }

    return 0;
}