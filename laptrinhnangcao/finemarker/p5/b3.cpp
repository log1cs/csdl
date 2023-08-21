#include<iostream>

int dem(std::string s)
{
    int dem = 0, i = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' '||
            s[i] != ' ' && s[i + 1] == '\0')
        {
            dem++;
        }
    }

    return dem;
}

int main()
{
    std::string str, substr;

    std::cout << "Nhap xau S:";
    getline(std::cin, str);

    std::cout << "So tu cua S: " << dem(str) << std::endl;

    std::cout << "Nhap xau W:";
    getline(std::cin, substr);

    if (str.find(substr) <= str.size()) {
        std::cout << "Xau W xuat hien trong S tai vi tri: " << str.find(substr);
    } else {
        std::cout << "Xau W khong xuat hien trong S!";
    }
}