// PHAI CO
#include<iostream> // Thu vien nhap/xuat du lieu ra man hinh

// PHAI CO
using namespace std;

int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	
	// Neu a lon hon b thi in ra "a lon hon b"
	// con khong thi in ra "b lon hon a".
	if (a > b) {
		cout << "a lon hon b" << endl;
	} else if (b > a) {
		cout << "b lon hon a" << endl;
	} else if (a == b) {
		cout << "a bang b" << endl;
	} else {
		cout << "Khong so sanh duoc" << endl;		
	}
	
	int c;
	cout << "Nhap c: ";
	cin >> c;
	
	// && = va, || = hoac.
	if (a > c && a > b)
	{
		cout << "a lon nhat" << endl;
	} else if (b > a && b > c) {
		cout << "b lon nhat" << endl;
	} else if (c > a && c > b) {
		cout << "c lon nhat" << endl;
	} else {
		cout << "Khong so sanh duoc" << endl;
	}

	// || Hoac
	if (a + b == c || b + c == a || c + a == b) {
		cout << "2 trong 3 so cong lai thanh 1 tong" << endl;
	}
    return 0;
}
