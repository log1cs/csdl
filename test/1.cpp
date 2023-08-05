#include<iostream>

using namespace std;

int main() {
	int n;
	int ret = 100;
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Not valid" << endl;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		std::cout << ret + i << std::endl;
	}

	return 0;
}
