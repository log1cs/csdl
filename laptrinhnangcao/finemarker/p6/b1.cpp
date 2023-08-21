#include<iostream>
#include<cmath>

struct PhanSo
{
    int tu;
    int mau;
};

PhanSo tong(PhanSo a, PhanSo b)
{
	PhanSo tongps;
	tongps.tu=a.tu*b.mau+b.tu*a.mau;
    tongps.mau=a.mau*b.mau;
    return tongps;
}

void nhap(PhanSo ps)
{
    std::cout << "Tu:";
    std::cin >> ps.tu;

    std::cout << "Mau:";
    std::cin >> ps.mau;    
}

int main()
{
    PhanSo a, b;

    std::cout << "Phan so a:" << std::endl;
    nhap(a);

    std::cout << "Phan so b:" << std::endl;
    nhap(b);

    if (std::isinf((float)a.tu / (float)a.mau) == false || 
        std::isinf((float)b.tu / (float)b.mau) == false) {
        
        std::cout << "Co phan so khong hop le!";
        return 0;
    } else {
        //std::cout << "Tong a + b = " << tong(a, b);
    }    
}