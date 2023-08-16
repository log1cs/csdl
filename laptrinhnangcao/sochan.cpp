#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	// Khoi tao bien tong va bien dem
	int tong = 0, count = 0;
	
	/* Tinh trung binh cong cac so tu 
	1 den n (voi n nhap tu ban phim) */
	for (int i = 0; i <= n; i++)
	{
		tong = tong + i;
		count++;
	}
	
	cout << "Trung binh cong cua n so nhap tu ban phim la: " << tong / count << endl;
	
	/* Tinh tong va trung binh cong cac so chan tu 
	1 den n (voi n nhap tu ban phim) */
	
	// Khoi tao bien tong va bien dem
	int z = 0, dem = 0;
	
	// Cho i = 2, moi mot lan vong lap chay
	// se cong 2 vao i, cho den khi thoa man
	// dieu kien.
	for (int i = 2; i <= n; i+=2)
	{
		dem++;
		z = z + i;
	}
	
	// Tinh trung binh cong.
	double tbc = z / dem;
	cout << endl;
	cout << "Tong cua cac so chan tu 1 den n la: " << z << endl;
	cout << "Trung binh cong cua cac so chan tu 1 den n la: " << tbc << endl;
	
	return 0;
}
