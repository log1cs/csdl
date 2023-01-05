#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkcp (int n) {
	int x = sqrt(n);
	return x * x == n ? true:false;
}

bool checkc5 (int p) {
	if (p % 5 == 0) {
		return true;
	} else {
		return false;
	}
}

int main ()  {
	int a[10000], n, i;
	
	printf("Nhap n = ");
	scanf("%d", &n);
	
	if (n < 0) {
		printf("n nhap khong dung!");
		return 0;
	} 
	
	int dem1 = 0, dem2 = 0;
	
	for (i = 0; i < n; i++) {
		printf("So thu %d: ", i + 1);
		scanf("%d", &a[i]);
		
		if (checkcp(a[i]) == true) {
			dem1++;
		} 
		
		if (checkc5(a[i]) == true) {
			dem2++;	
		}
	}
	
	printf("Co %d so chia het cho 5.", dem2);
	printf("\nCo %d so chinh phuong", dem1);
	return 0;
}
