#include<iostream>
#include<cmath>

struct sophuc
{
    double thuc, ao;

    void nhap(std::string s)
    {
        std::cout << "Cho so phuc " << s << ":" << std::endl;
        std::cout << "Phan thuc: ";
        std::cin >> thuc;
        std::cout << "Phan ao: ";
        std::cin >> ao;
    }
};

void tinhtong(sophuc z1, sophuc z2)
{
    double tongthuc = z1.thuc + z2.thuc;
    double tongao = z1.ao + z2.ao;
    std::cout << "z1 + z2 = " << tongthuc << " + " << tongao << "i" << std::endl;
}

void tinhtich(sophuc z1, sophuc z2)
{
    double tichthuc = z1.thuc * z2.thuc + z1.ao * z2.ao * -1;
    double tichao = z1.thuc * z2.ao + z2.thuc * z1.ao;
    std::cout << "z1 * z2 = " << tichthuc << " + " << tichao << "i" << std::endl;
}

int main()
{
    sophuc z1, z2;
    z1.nhap("z1");
    z2.nhap("z2");
    tinhtong(z1, z2);
    tinhtich(z1, z2);
    return 0;
}