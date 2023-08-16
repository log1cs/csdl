#include<iostream>

using namespace std;

int main()
{
	int z = 0;
	
	for(int i = 0; i <= 10; i++)
	{
		z = z + i;	
		// Cach 2: Co the dung z += i (la z = z + i)
	}
	
	cout << "z = " << z << endl;
	return 0;
}
