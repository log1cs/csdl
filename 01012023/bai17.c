#include<stdio.h>
#include<math.h>

int main () {
	int n, a[10000], i;
	do {
	printf("Nhap n = ");
	scanf("%d", &n);
	} while (n < 0 || n > 99);
	
	int tong = 0;
	for (i = 0; i < n; i++) {
		printf("So thu %d: ", i+1);
		scanf("%d", &a[i]);
		tong = tong + a[i];
	}
	
	float tbc = tong * 1.00 / n * 1.00;
	
	int max = a[0], min = a[0];
	
	for (i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	
	printf("\nSo max = %d, so min = %d", max, min);
	printf("\nTrung binh cong day so: %g", tbc);
	return 0;
}
