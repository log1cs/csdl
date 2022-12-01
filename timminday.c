#include<stdio.h>
#include<math.h>

int main () {
	int n, i;
	printf("N = ");
	scanf("%d", &n);
	float a[n];
	for(i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%g", &a[i]);
	}

	float m = a[0];

	for(i = 0; i < n; i++) {
		if (m > a[i]) {
		m = a[i];
	}
	}
	printf("Gia tri nho nhat trong A: %g", m);
	return 0;
}
