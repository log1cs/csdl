#include<stdio.h>
#include<math.h>

int main () {
	int a[100], dem, i, n;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n > 50);
	
	for (i = 0; i < n; i++) {
		printf("A[%d]=", i);
		scanf("%d", &a[i]);
		if (a[i] % 3 == 0 && a[i] > 0) {
			dem++;
		}
	}	

	printf("In day:");	
	for (i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}	
	
	printf("\nCo %d so nguyen duong chia het cho 3!", dem);
	return 0;
}
