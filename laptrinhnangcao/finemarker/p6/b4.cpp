#include<iostream>
#include<cmath>

struct phanso
{
    int tu;
    int mau;
};

void nhap(char s, phanso &a)
{
    std::cout << "Phan so " << s << ":" << std::endl;
    std::cout << "Tu: ";
    std::cin >> a.tu;
    std::cout << "Mau: ";
    std::cin >> a.mau;

    if (a.mau < 0)
    {
        a.mau *= -1;
        a.tu *= -1;
    }
}

int uocchung(int a, int b)
{
    while (a != b)
    {
        if (a > b) {
            a -= b;
        }
        
        if (b > a) {
            b -= a;
        }
    }

    return a;
}

void calc(phanso a, phanso b)
{
    int mauchung = a.mau * b.mau;
    int tuso = (a.tu * b.mau) - (b.tu * a.mau);

    if (tuso == 0) {
        std::cout << "Hieu a - b = 0/1" << std::endl;
    } else {
        int ucln = uocchung(abs(tuso), abs(mauchung));
        tuso /= ucln;
        mauchung /= ucln;
        std::cout << "Hieu a - b = " << tuso << "/" << mauchung;
    }
}

int main()
{
    phanso a, b;
    nhap('a', a);
    nhap('b', b);

    if (a.mau == 0 || b.mau == 0) {
        std::cout << "Co phan so khong hop le!";
    } else {
        calc(a, b);
    }

    return 0;
}
