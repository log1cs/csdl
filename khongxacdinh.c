#include<stdio.h>
#include<math.h>

int main () {
	int x; float b;
	printf("Nhap x = ");
	scanf("%d", &x);
	if (x < 0 || x == 3) {
		printf("Bieu thuc khong xac dinh");
	} else {
		b = (1 + sqrt(x)) / (x - 3);
		printf("Ket qua: %g", b);
	}
	return 0;
}
