// Tinh phuong trinh ax^2 + bx + c = 0
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double a, b, c;
	
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	
	// Cach dung: pow(so hang, so mu)
	double delta = pow(b, 2) - (4 * a * c);
	
	if (delta < 0) {
		cout << "Phuong trinh vo nghiem" << endl;
	} else if (delta == 0) {
		double nghiemkep = -b / (2 * a);
		cout << "Phuong trinh co nghiem kep x1 = x2 = " << nghiemkep << endl;
	} else {
		// sqrt(so hang) - can bac hai cua mot so hang
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		
		cout << "Phuong trinh co 2 nghiem." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	
	return 0;
}
