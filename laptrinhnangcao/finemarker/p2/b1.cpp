#include<iostream>
#include<cmath>

// Usage:
// Comment it to turn off BAI_2, uncomment
// it to compile without BAI_2.
// Same with the rest.
//#define BAI_2 1
#define BAI_4 1
//#define BAI_6 1

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

#ifdef BAI_6
	return 2 * Fibo(n - 1) + Fibo(n - 2);
#else
    return Fibo(n - 1) + Fibo(n - 2);
#endif	
}

int main()
{
    int n;
#ifdef BAI_4
#else
    do
    {
#endif
        std::cout << "N = ";
        std::cin >> n;
#ifdef BAI_4
#elif BAI_6
		if (n < 6 || n > 20) {
			std::cout << "Moi nhap lai so lieu!" << std::endl;
		}
	} while (n < 6 || n > 20);
	
#else    
    } while (n < 1 || n > 19);
#endif

#ifdef BAI_4
    std::cout << "So Fibonacci thu " << n << " la: " << Fibo(abs(n));
#elif BAI_6
    std::cout << "So hang thu " << n << " la: " << Fibo(n);
#else
    std::cout << "So Fibonacci thu " << n << " la: " << Fibo(n);
#endif

    return 0;
}