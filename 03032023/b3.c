#include<math.h>
#include<stdio.h>
#include<stdbool.h>

bool checknt(int n) {
	int i = 0;
	if (n < 2) {
		return false;
	} else if (n == 2) {
		return true;
	} else if (n % 2 == 0) {
		return false;
	} 
	for (i = 3; i < sqrt(n); i+=2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main () {
	int n, i, a[10000], dem = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	if (n < 0 || n > 99) { 
		printf("n = %d khong hop le!", n);
		return 0;
	} else {
		for (i = 0; i < n; i++) {
			printf("A[%d] = ", i);
			scanf("%d", &a[i]);
		}
		
		for (i = 0; i < n; i++) {
			if (checknt(a[i]) == true) {
				dem++;
			}
		}
		
		printf("Day co %d so nguyen to.", dem); 
		return 0;
	}
}
