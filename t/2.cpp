#include<iostream>
#include<math.h>

int main() {
    int a[10000];
    int n, k, count = 0, ret = 0;

    std::cin >> n >> k;

    if (n < 1 || k < 1 || n > pow(10, 6) || k > pow(10, 12)) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];

        if (a[i] < 1 || a[i] > pow(10,6)) {
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            count++;
            std::cout << count << std::endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        while (ret != k) {
            ret = a[0] + a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (ret != k) {
            ret += a[i];
            count++;
        }
    }

    std::cout << ret << std::endl;

    if (ret == k) {
        std::cout << count << std::endl;
    } else if (ret < k || ret > k) {
        std::cout << "15GG" << std::endl;
    }

    return 0;
}
