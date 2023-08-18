#include<iostream>
#include<cstring>

int main()
{
    std::string string, substring;
    getline(std::cin, string);
    getline(std::cin, substring);

    int p, q;
    std::cin >> p >> q;

    if (q > string.size() || p > string.size())
    {
        return 0;
    } else {
        if (p < q)
        {
            string.insert(q, substring);
            string.insert(p, substring);
        } else {
            string.insert(p, substring);
            string.insert(q, substring);            
        }
    }

    std::cout << string;
    return 0;
}