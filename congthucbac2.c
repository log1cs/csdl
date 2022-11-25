#include<stdio.h>
#include<math.h>

int main () {
	int a,b,c,y;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	if (b <= c) {			// Neu b nho hon hoac bang c, thuc hien phep tinh y
		y = a * a + (3 * a) - 1;
	} else if (b > c) {		// Neu b > c, thi y = 0, theo de bai
		y = 0;
	}
	printf("Y = %d", y);		// Output
	return 0;
}
