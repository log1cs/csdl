#include<iostream>

// Usage:
// Comment it to turn off BAI_2, uncomment
// it to compile without BAI_2.
#define BAI_2 1

int Fibo(int n)
{
// We guard it so it only compiles
// when the function enabled.
#ifdef BAI_2
    // Bai 2
    if (n > 0 && n <= 3) {
        return 1;
    }
#else
    // Bai 1.
    if (n > 0 && n <= 2) {
        return 1;
    }
#endif

    return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    int n;
    do
    {
        std::cout << "N = ";
        std::cin >> n;
    } while (n < 1 || n > 19);

    std::cout << "So Fibonacci thu " << n << " la: " << Fibo(n);
    return 0;
}