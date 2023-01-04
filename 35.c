#include <stdio.h>
#include <math.h>
int main () {
	int i,n,max=-1e9,cp,a[500];
	printf ("N = "); scanf ("%d", &n);
	if (n<=0) printf ("N = %d khong duong!", n);
	else {
		for (i=0;i<n;i++){
			printf ("A[%d] = ", i); scanf ("%d", &a[i]);
		}
		printf ("\nDao nguoc:");
		for (i = n - 1;i >= 0; i--){
			printf (" %d", a[i]);
			cp=sqrt (a[i]);
			// Neu a[i] > max thi max se bang a[i]
			if (a[i]>max&&a[i]==cp*cp) max=a[i];
		}
		if (max!=-1e9) printf ("\nChinh phuong max: %d", max);
		else return 0;
	}
}
