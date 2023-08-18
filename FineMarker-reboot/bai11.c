#include<stdio.h>
#include<math.h>

int main () {
	int a[10000], n, i; 			// Khai bao mang, bien n va bien i
	do {							//
		printf("Nhap n = ");		//	Hien thi "Nhap n = " cho den khi thoa man dieu kien
		scanf("%d", &n);			//	Nhap gia tri
	} while (n < 0 || n > 19);		//	Khi n thoa man dieu kien, tiep tuc chuong trinh
	
	for (i = 0; i < n; i++) {		// Vong lap chay tu i = 0 cho den khi i < n (VD n = 6 thi i se
		printf("A[%d] = ", i);		// chay den 5 (vi i < n)
		scanf("%d", &a[i]);			// Nhap gia tri cho mang
	}
	
	printf("Dao nguoc day so:");
	
	int dem = 0;					// Khai bao bien dem = 0
	
	for (i = n - 1; i >= 0; i--) {	
		printf(" %d", a[i]);
		if (a[i] % 2 == 0 && a[i] > 0) {
			dem++;
		}
	}
	
	printf("\nCo %d so nguyen duong chan!", dem);
	return 0;
}
