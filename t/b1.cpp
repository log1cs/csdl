#include<iostream>
#include<bits/stdc++.h>

int main() {
    int min = INT_MAX, max = INT_MIN, a;

    do {
        std::cin >> a;

    if (a > max && a != 0) {
        max = a;
    } 
    
    if (a < min && a != 0) {
        min = a;
    }

    } while (a != 0);

    std::cout << max << " " << min << std::endl;
    return 0;
}