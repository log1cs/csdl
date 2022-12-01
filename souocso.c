#include<stdio.h>
#include<math.h>

int main ()  {
	int a,b,i;
	printf("N = ");
	scanf("%d", &a);
	b = 1;
	for (i = 1; i <= a; i++) {
		if (a % i == 0) {
			b = b + 1;
		}
	}
	printf("So %d co %d uoc so.", a, b-1);
	return 0;
}
