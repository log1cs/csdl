#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double x, y, kq;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	
menu:
	cout << "[1] Tinh (x + y) / (x^2 + y^2 + 1)" << endl;
	cout << "[2] Tinh e^x + 5 * y" << endl;
	cout << "[3] Tinh (1 + x^2) * y" << endl;
	cout << "Nhap lua chon (1-3): " << endl;
	
	int n;
	cin >> n;
	
	switch(n)
	{
		case 1:
			cout << "Chon [1]." << endl;
			kq = (x + y) / (pow(x, 2) + pow(y, 2) + 1);
			cout << "Ket qua cua bieu thuc la: " << kq << endl;
			goto menu;
		case 2:
			cout << "Chon [2]." << endl;
			// exp(0, 1, 2, ...) = tinh so e
			// Vi du: exp(1) = 1 * e = 1 * 2.718281828
			kq = pow(exp(1), x) + 5 * y;
			cout << "Ket qua cua bieu thuc la: " << kq << endl;
			goto menu;			
		case 3:
			cout << "Chon [3]." << endl;
			kq = (1 + pow(x, 2)) * y;
			cout << "Ket qua cua bieu thuc la: " << kq << endl;
			goto menu;
		default:
			cout << "Sai dieu kien!" << endl;
			break;
	}
	
	return 0;
}
