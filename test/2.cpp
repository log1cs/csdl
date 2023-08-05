#include<iostream>
#include<math.h>

using namespace std;


bool square(int n) {
	if(n < 1) {
	return false;
	}

	int i = sqrt(n);

	if(i * i == n) {
	return true;
	}

	return false;
}

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (square(i) == true) {
			std::cout << i << endl;
		}
	}

	return 0;
}
