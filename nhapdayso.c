#include<stdio.h>
#include<math.h>

int main () {
	int n;
	printf("N = ");
	scanf("%d", &n);
	int i, a[n];
	for(i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("Day A =");

	int m = 0;

	for(i = 0; i < n; i++) {
	printf(" %d", a[i]);
		if (a[i] < 0) {
		   m++;
		}
	}
	printf("\nSo so am trong A: %d", m);
	return 0;

}
