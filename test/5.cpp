#include<iostream>

using namespace std;

bool prime(int n) {

    if (n == 0 || n == 1) {
        return false;
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        } else {
            return true;
        }
    }
}

int main() {
    int n, i = 0;
    std::cin >> n;

    for (i > 0; i < n; i++) {
        if(prime(i) == true) {
            std::cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
