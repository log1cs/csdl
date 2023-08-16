#include<iostream>

using namespace std;

int main()
{
	int thang;
	cout << "Nhap thang (thang 1 - thang 12): ";
	cin >> thang;
	
	// Day bien thang xuong switch -> switch(thang)
	// Vi du: Neu thang = 3 -> switch(3) -> chay vao case so 3.	
	switch(thang)
	{
		case 1:
			cout << "Thang 1 co 31 ngay" << endl;
			break;
		case 2:
			cout << "Thang 2 co 28/29 ngay" << endl;
			break;
		case 3:
			cout << "Thang 3 co 31 ngay" << endl;
			break;
		case 4:
			cout << "Thang 4 co 30 ngay" << endl;
			break;
		case 5:
			cout << "Thang 5 co 31 ngay" << endl;
			break;
		case 6:
			cout << "Thang 6 co 30 ngay" << endl;
			break;
		case 7:
			cout << "Thang 7 co 31 ngay" << endl;
			break;
		case 8:
			cout << "Thang 8 co 31 ngay" << endl;
			break;
		case 9:
			cout << "Thang 9 co 30 ngay" << endl;
			break;
		case 10:
			cout << "Thang 10 co 31 ngay" << endl;
			break;
		case 11:
			cout << "Thang 11 co 30 ngay" << endl;
			break;
		case 12:
			cout << "Thang 12 co 31 ngay" << endl;
			break;
		default:
			cout << "Sai dieu kien!" << endl;
			break;
	}
	return 0;
}
