#include<stdio.h>
#include<string.h>

int main() {
	char c[100][100];
	int n;
	printf("N = ");
	scanf("%d", &n);
	gets(c[0]);								// Skip gia tri c[0], bat dau c[1]
	int i, k, x;
	if (n != 0) {
		for(i = 1; i <= n; i++) {
			printf("Ten ngon ngu lap trinh thu %d: ", i);
			gets(c[i]);
			if(strlen(c[i]) <= k) {
				k = strlen(c[i]);
				x = i;
		}
	}
	printf("Ngon ngu ngan nhat cuoi cung la: %s", c[x]);
	} else {
	printf("Ngon ngu ngan nhat cuoi cung la: ");
	}
	return 0;
}
