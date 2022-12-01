#include<stdio.h>
#include<math.h>

int main  () {
	int n,a,i;
	printf("N = ");
	scanf("%d", &n);
	a = 0;
	for(i = 2; i <= n; i++) {
		if (n >= 2) {
		a = a + (i - 1) * i * (i + 1);
	}
	}
	printf("A = %d", a);
	return 0;
}
