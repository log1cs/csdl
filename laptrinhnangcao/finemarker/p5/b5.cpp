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

    if (str.length() == 0)
    {
        std::cout << "Xau rong!";
        return 0;
    }

    std::cout << "So tu cua S: " << dem(str) << std::endl;
    
    int c;

    for (int i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]) && !isalpha(str[i]))
            {
                c++;
            }
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]) && !isalpha(str[i]))
            {
                str.erase(i, 1);
                i--;
            }
    }
    std::cout << "So ky tu khong la chu cai/chu so: " << c << std::endl;
    std::cout << "Xau S sau khi xoa:" << str;
    return 0;
}