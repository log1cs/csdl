#include<iostream>
#include<cmath>

struct ps
{
    int tu;
    int mau;

    void nhap(char s)
    {
        std::cout << "Cho phan so " << s << ":" << std::endl;
        std::cout << "Tu: ";
        std::cin >> tu;
        std::cout << "Mau: ";
        std::cin >> mau;
    }
};

int uocchung(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }

        if (b > a)
        {
            b -= a;
        }
    }

    return a;
}

void toigian(ps &a)
{
    if (a.mau < 0)
    {
        a.tu *= -1;
        a.mau *= -1;
    }

    if (a.tu == 0) {
        a.mau = 1;
    } else {
        int ucln = uocchung(abs(a.tu), abs(a.mau));
        a.tu /= ucln;
        a.mau /= ucln;
    }
}

int main()
{
    ps a;
    a.nhap('a');
    if (a.mau == 0) {
        std::cout << "Phan so khong hop le!";
    } else {
        toigian(a);
        std::cout << "Chuan hoa phan so: " << a.tu << "/" << a.mau;
    }

    return 0;
}