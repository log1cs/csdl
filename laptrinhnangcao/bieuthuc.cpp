// PHAI CO
#include<iostream> // Thu vien nhap/xuat du lieu ra man hinh

// PHAI CO
using namespace std;

int main()
{
    int a, b, d, e, f, g;
    // cout - hien thi noi dung len man hinh
    cout << "Nhap a: ";
    // cin - nhap noi dung vao
    cin >> a;

    // cout - hien thi noi dung len man hinh
    cout << "Nhap b: ";
    // cin - nhap noi dung vao
    cin >> b;
    
    // a + b
    d = a + b;
    cout << "a + b = " << d << endl;
    // a - b
    e = a - b;
    cout << "a - b = " << e << endl;
    // a * b
    f = a * b;
    cout << "a * b = " << f << endl;

    // Chia lay phan du (a % b)
    g = a % b;
    cout << "a % b = " << g << endl;

    // float, double = kieu du lieu (thap phan)
    float c;
    // Chuyen doi a va b sang kieu du lieu thap phan
    c = a * 1.00 / b * 1.00;
    
    // cout - hien thi noi dung len man hinh
	// endl - xuong dong
    cout << "a / b: " << c << endl;

	// Co the co hoac khong.
    return 0;
}
