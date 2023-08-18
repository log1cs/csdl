#include<stdio.h>
#include<math.h>

int main () {
	int a1 = 1484, a2 = 1533, a3 = 1786, a4 = 2242, a5 = 2503, a6 = 2587, n, c;
	printf("N = ");
	scanf("%d", &n);
	if (n <= 50) {
		c = n * a1;
	} else if (n >= 51 && n <= 100) {
		c = 50 * a1 + ((n - 50) * a2);
	} else if (n >= 101 && n <= 200) {
		c = 50 * a1 + (50 * a2) + ((n - 100) * a3);
	} else if (n >= 201 && n <= 300) {
		c = 50 * a1 + (50 * a2) + (100 * a3) + ((n - 200) * a4);
	} else if (n >= 301 && n <= 400) {
		c = 50 * a1 + (50 * a2) + (100 * a3) + (100 * a4) + ((n - 300) * a5);		
	} else if (n > 400) {
		c = 50 * a1 + (50 * a2) + (100 * a3) + (100 * a4) + (100 * a5) + ((n - 400) * a6);			
	}
	printf("So tien phai nop: %d", c);
	return 0;
}
