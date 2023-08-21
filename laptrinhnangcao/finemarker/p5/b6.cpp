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

    int count = dem(str);

    for (int i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]) && !isalpha(str[i]) && str[i] != ' ')
            {
                str.erase(i, 1);
                i--;
            }
    }
    std::cout << "Xau S sau khi xoa:" << str << std::endl;
    std::cout << "So tu cua S:" << count;
    return 0;
}