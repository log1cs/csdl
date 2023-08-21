#include<iostream>

// Usage:
// Comment it to turn off BAI_2, uncomment
// it to compile without BAI_2.
// Same with the rest.
#define BAI_5 1

int C(int k, int n) {
	if (k == 0 || k == n)
    {
        return 1;
    }
    
    if (k == 1) 
    {
        return n;
    }

    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    int n, k;
#ifdef BAI_5
    do
    {
#endif
        std::cout << "n = ";
        std::cin >> n;
        std::cout << "k = ";
        std::cin >> k;
#ifdef BAI_5
        if (k < 0 || n < k) {
            std::cout << "Moi nhap lai so lieu!" << std::endl;
        }
    } while (k < 0 || n < k);
#endif

#ifdef BAI_5
#else
    if (0 <= k && k <= n) {
#endif
    std::cout << "C(" << k << "," << n << ") = " << C(k, n);
#ifdef BAI_5
#else
    } else {
        std::cout << "So lieu khong hop le!";
    }
#endif
    return 0;
}