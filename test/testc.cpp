#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char** argv) {
	int n;
	float S=0;
		cout<<"Nhap n: ";
		cin>>n;
		
	for (float i=1; i<=1/n; i++)
	{
		S = S + (pow(-1, i+1)*1.0 )/ i; 
	}
	cout<<"Tong la: S= "<<S<<"\n";
	return 0;
}
