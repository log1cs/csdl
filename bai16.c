#include<stdio.h>
#include<math.h>

int main () {
	int a[10000], n, i;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n > 99);	
	
	for (i = 0; i < n; i++) {
		printf("So %d:", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("In day:");
	
	int tong = 0;
	
	for (i = 0; i < n; i++) {
		printf(" %d", a[i]);
		if (a[i] % 2 == 0 && a[i] > 0) {
			tong = tong + a[i];
		}
	}	
	
	if (tong == 0) {
		printf("\nKhong co so duong chan!");
	} else {
		printf("\nTong so duong chan: %d", tong);
	}
	
	return 0;
}
