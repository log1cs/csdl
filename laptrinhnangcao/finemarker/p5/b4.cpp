#include<iostream>
#include<cstring>

int dem(std::string s)
{
    int dem = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ' ||
            s[i] != ' ' && s[i + 1] == '\0')
        {
             dem++;
        }
    }

    return dem;
}

int main()
{
    std::string str;

    std::cout << "Nhap xau S:";
    getline(std::cin, str);

    std::cout << "So tu cua S:" << dem(str) << std::endl;

    std::cout << "Xau S sau khi xoa:";

    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            std::cout << str[i];
        }
    }    

    return 0;
}