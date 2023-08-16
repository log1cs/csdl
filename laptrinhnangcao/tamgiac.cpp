#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	
	// Neu 2 canh cong lai lon hon 1 canh = thoa man dieu kien
	if (a + b > c && b + c > a && c + a > b)
	{
		cout << "a, b, c la 3 canh cua mot tam giac" << endl;
	} else {
		cout << "a, b, c khong phai la canh cua mot tam giac" << endl;
	}
	
	// Neu 3 canh a, b, c bang nhau thi la tam giac deu
	if (a == b && b == c)
	{
		cout << "a, b, c la tam giac deu" << endl;
	} else {
		cout << "a, b, c khong phai la tam giac deu" << endl;
	}
	
	return 0;
}

