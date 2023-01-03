#include<math.h>
#include<stdio.h>

int main () {
	int n, i, a[100];
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n > 50);
	
	for (i = 0; i < n; i++) {
		printf("A[%d]=", i);
		scanf("%d", &a[i]);
	}
	
	printf("In day:");
	
	int c3 = 0;
	
	for (i = 0; i < n; i++) {
			printf(" %d", a[i]);
			if (a[i] > 0 && a[i] % 3 == 0) {			
				c3++;
			}
	}
	
	printf("\nCo %d so nguyen duong chia het cho 3!", c3);
	return 0;
}
