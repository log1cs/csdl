#include<stdio.h>
#include<math.h>

int main() {
	float n, f;
	printf("N = ");
	scanf("%f", &n);
	f = 0;
	for (n; n >= 0; n--) {
	   f = n + sqrt(f);
	}
	printf("F(n) = %g", f);
	return 0;
}
