#include<iostream>

using namespace std;

int main()
{
	int a;

// Vi du.
menu:	// Menu lua chon (Dong 11)
	cout << "[1] Thu hai" << endl;
	cout << "[2] Thu ba" << endl;
	cout << "[3] Thu tu" << endl;
	cout << "[4] Thu nam" << endl;
	cout << "[5] Thu sau" << endl;
	cout << "[6] Thu bay" << endl;
	cout << "[7] Chu nhat" << endl;	
	cout << "Nhap 1 - 7: " << endl;
	
	cin >> a;
	
	switch(a)
	{
		case 1:
			cout << "Hom nay la thu hai" << endl;
			goto menu; 
		case 2:
			cout << "Hom nay la thu ba" << endl;
			goto menu;
		case 3:
			cout << "Hom nay la thu tu" << endl;
			goto menu;
		case 4:
			cout << "Hom nay la thu nam" << endl;
			goto menu;
		case 5:
			cout << "Hom nay la thu sau" << endl;
			goto menu;
		case 6:
			cout << "Hom nay la thu bay" << endl;
			goto menu;
		case 7:
			cout << "Hom nay la chu nhat" << endl;
			goto menu;
		default:
			cout << "Nhap sai!" << endl;
			break;
	}
	
	return 0;
}
