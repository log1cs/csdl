#include<iostream>

int main()
{
	int A[5] = {65, 20, 30, 50, 7};

	std::cout << sizeof(A) / sizeof(A[0]) << std::endl;

	return 0;
}
