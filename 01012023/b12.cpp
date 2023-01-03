#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkcp (int z) {
	int x = sqrt(z);
	return x * x == z ? true:false;
}

bool checkc5 (int p) {
	if (p % 5 == 0) {
		return true;
	} else {
		return false;
	}
}

int main () {
	int n, i, a[100], cp = 0, c5 = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	if (n < 0) {
		printf("n nhap khong dung!");
		return 0;
	} else {
		for (i = 0; i < n; i++) {
			printf("So thu %d: ", i + 1);
			scanf("%d", &a[i]);
		}
		
		for (i = 0; i < n; i++) {
			if (checkc5(a[i]) == true) {
				c5++;
			}
			if (checkcp(a[i]) == true) {
				cp++;
			}
		}
		
		printf("\nCo %d so chia het cho 5.", c5);
		printf("\nCo %d so chinh phuong.", cp);	
		return 0;
	}
}
