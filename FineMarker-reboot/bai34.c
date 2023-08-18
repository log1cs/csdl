#include<math.h>
#include<stdio.h>
#include<stdbool.h>

bool checkcp (int z) {
	int x = sqrt(z);
	return x * x == z ? true:false;
}

int main () {
	int a[10000], i, n;
	printf("Nhap (4<n<20) n = ");
	scanf("%d", &n);
	
	if (n < 4 || n > 20) {
		printf("n khong hop le!");
		return 0;
	}
	
	for (i = 0; i < n; i++) {
		printf("So thu %d:", i + 1);
		scanf("%d", &a[i]);
	}
	
	int dem = 0;
	
	printf("\nIn so chan:");
	
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf(" %d", a[i]);
		}
		if (checkcp(a[i]) == true) {
			dem++;
		}
	}
	printf("\nDay co %d so chinh phuong!", dem);
	return 0;
}
