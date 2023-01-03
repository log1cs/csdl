#include<math.h>
#include<stdio.h>

int main () {
	int a[10000], n, i;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n > 99);
		for (i = 0; i < n; i++) {
			printf("So %d:", i+1);
			scanf("%d", &a[i]);
		}
		
		printf("In so le:");
		
		for (i = 0; i < n; i++) {
			if (a[i] % 2 != 0) {
			printf(" %d", a[i]);
			}
		}
	return 0;
}
