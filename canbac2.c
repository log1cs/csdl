#include<stdio.h>
#include<math.h>

int main () {
	double n,b;							// Khai bao bien n va bien b
	printf("N = ");						
	scanf("%lf", &n);
	b = sqrt(n);						// b = can bac 2 cua (n)
	printf("Can bac 2 cua N = %g", b);  // Output
}
