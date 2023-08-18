#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkcp(int z) {
	int x = sqrt(z);
	return x * x == z ? true:false;
}

int main () {
	int a[10000], i, n;
	printf("N = ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nDao nguoc:");
	
	int max = a[0];
	for (i = n - 1; i >= 0; i--) {
		printf(" %d", a[i]);	
		if (checkcp(a[i]) == true && max < a[i]) {
			max = a[i];
		}	
	}
	
	printf("\nChinh phuong max: %d", max);
}
