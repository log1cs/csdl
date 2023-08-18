#include<iostream>
#include<cstring>

std::string chuanhoa(std::string a)
{
    a = " " + a;

    for (int i = 1; i < a.size(); i++)
    {
        a[i] = std::tolower(a[i]);
    }

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] == ' ' && a[i] != ' ')
        {
            a[i] = std::toupper(a[i]);
        }
    }

    while (a[0] == ' ') 
    {
        a.erase(0, 1);
    }

    while(a[a.size() - 1] == ' ')
    {
        a.erase(a.size() - 1, 1);
    }

    int i = 0;
    while(i < a.size())
    {
        if(a[i] == ' ' && a[i + 1] == ' ') {
            a.erase(i, 1);
        } else {
            i++;
        }
    }

    return a;
}

std::string tach(std::string a)
{
    std::string ten;
    a = " " + a;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == ' ')
        {
            for (int j = 0; j < a.length() - 1 - i; j++)
            {
                ten += a[i + 1 + j];
            }
            break;
        }
    }

    while (a[0] == ' ')
    {
        a.erase(0, 1);
    }

    return ten;
}

void sapxep(std::string a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                std::string tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void output(std::string a[], int n)
{
    std::cout << "DSSV da sap xep la: " << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Sinh vien [" << i + 1 << "]: " << chuanhoa(a[i]) << std::endl; 
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "Ten [" << i + 1 << "]: " << tach(chuanhoa(a[i])) << std::endl;
    }
}

int demten(std::string a[], std::string ten, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ten == tach(chuanhoa(a[i])))
        {
            dem++;
        }
    }

    return dem;
}

int main()
{
    std::string a[100]; 
    int i = 0;

    std::cout << "Nhap DSSV (<100), go Enter de thoat..." << std::endl;
    do
    {
        std::cout << "Nhap ten sinh vien: ";
        getline(std::cin, a[i]);

        if (a[i].size() == 0 || i == 100)
        {
            break;
            exit(0);
        }

        i++;
    } while (1);

    sapxep(a, i);
    output(a, i);

    std::string ten;
    std::cout << "Give a name that you want to find: ";
    std::cin >> ten;

    std::cout << "The name '" << ten << "' appear " << demten(a, ten, i) << " times.";
    return 0;
}