#include<iostream>

using namespace std;

int main()
{
	// Ham for tang dan:
	// for (bat dau; diem ket thuc; tang(hoac giam))
	// i++ la i + 1
	for(int i = 0; i <= 9; i++)
	{
		cout << i << " ";
	}
	
	cout << endl;
	
	// i-- la i - 1
	for (int i = 9; i >= 0; i--) 
	{
		cout << i << " ";
	}
	
	return 0;
}
