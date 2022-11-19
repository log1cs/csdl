#include<stdio.h>
#include<math.h>

int main () {
	int m,n;
	int j,i;
	printf("M = "); scanf("%d", &n);
	printf("N = "); scanf("%d", &m);
	if(n > 0 && m > 0) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (j < m) {
					printf("0 ");
				} else {
					printf("0");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
