#include<stdio.h>
#include<math.h>

int main () {
        int n,i;
        printf("N = ");
        scanf("%d", &n);
        float a[n];

        for(i = 0; i < n; i++) {
                printf("A[%d] = ", i);
                scanf("%f", &a[i]);
        }

        printf("Cac phan tu o vi tri chan:");

        for(i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf(" %g", a[i]);
            }
        }
        return 0;
}
