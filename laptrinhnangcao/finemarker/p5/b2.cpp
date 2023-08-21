#include<iostream>
#include<cstring>

std::string chuanhoa(std::string s)
{
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }

    while(s[s.size() - 1] == ' ')
    {
        s.erase(s.size() - 1, 1);
    }

    int i = 0;
    while (i < s.size()) {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            s.erase(i, 1);
        } else {
            i++;
        }
    }

    return s;
}

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
    std::string s;
    std::cout << "Nhap xau:";
    std::getline(std::cin, s);

    if (s.length() == 0) {
        std::cout << "Xau rong!";
        return 0;
    } else {
        std::cout << "Chuan hoa:" << chuanhoa(s) << std::endl;
        std::cout << "So tu:" << dem(chuanhoa(s)); 
    }

    return 0;
}
