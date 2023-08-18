#include<cstring>
#include<iostream>

std::string chuanhoa(std::string s)
{
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }

    while(s[s.size() - 1] == ' ')
    {
        s.erase(s.size(), 1);
    }

    int i = 0;
    while(i < s.size())
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            s.erase(i, 1);
        } else {
            i++;
        }
    }

    return s;
}

int main()
{
    std::string z;
    getline(std::cin, z);

    std::cout << chuanhoa(z);
}