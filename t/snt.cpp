#include<cmath>
#include<iostream>

bool checksnt (int x)
{
	if (x < 2) {
		return false;
	} else {
		for (int i = 2; i <= x; i++) {
			if (x % i == 0) {
				return true;
			}
		}
	}
}

void print(int n)
{
	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && checksnt(i)) {
			std::cout << i << " ";
		}
	}
}

int main()
{
	int x;
	std::cin >> x;
	checksnt(x);
	print(x);
	std::cout << std::endl;

	return 0;
}
