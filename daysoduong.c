#include<stdio.h>
#include<math.h>

int main () {
	int n,i;
	printf("Hay nhap mot so duong: ");
	scanf("%d", &n);
	for (i = 0; i >= 0; i++) {
		if (n > 0) {
			i = i + 1;
			printf("Hay nhap mot so duong: ");
			scanf("%d", &n);
		} else {
			printf("Ban da nhap %d so nguyen duong!", i/2);
			break;
		}
	}
	return 0;
}
