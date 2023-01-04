#include<stdio.h>
#include<math.h>

int main () {
	int a[10000], n, i;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n >= 50);
	
	int tong = 0;
	
	for (i = 0; i < n; i++) {
		printf("A[%d]=", i);
		scanf("%d", &a[i]);
		
		if (a[i] % 3 == 0) {
			tong = tong + a[i];
		}
	}
	
	printf("In day:");
	
	for (i = 0; i < n; i++) {
		printf(" %d" , a[i]);
	}
	
	printf("\nTong cac so nguyen chia het cho 3 la: %d", tong);
	return 0;
}
