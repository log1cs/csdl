#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkcp(int z) {
	int x = sqrt(z);
	return x * x == z ? true:false;
}

int main () {
	int a[10000], i, n;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n < 0 || n > 99);
	
	for (i = 0; i < n; i++) {
		printf("So thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	int max = a[0];
	
	for (i = 0;i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("\nSo lon nhat: %d", max);
	
	printf("\nCac so chinh phuong:");
	for (i = 0; i < n; i++) {
		if (checkcp(a[i]) == true) {
			printf(" %d", a[i]);
		}
	}
	return 0;
}
