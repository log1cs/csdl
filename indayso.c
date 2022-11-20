#include<stdio.h>
#include<math.h>

int main () {
	int a,b,e,n,i;
	printf("N = ");
	scanf("%d", &n);
	a = 2 * n;
	b = 3 * n;
	printf("Day so: %d", a);
	for(i == a; a < b; i++) { // Cho i bằng a, khi a nhỏ hơn b thì vòng lặp cứ thế lặp lại
		a = a + 1;
		printf(" ");
		printf("%d", a);
	}
	return 0;
}
