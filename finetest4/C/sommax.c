#include<stdio.h>
#include<math.h>

int main () {
	int s,i,n;					// Khai bao s,i,n
	s = 0;						// s = 0
	printf("N = ");
	scanf("%d", &n);			// Doc N
	if (n >= 1) {
	for (i = 0; i + s < n;i++) {	// Cho i = 0, i + s < n va i + 1
		if (i + s >= n) {			// Neu i + s >= n, phan mem tu dong ngat
			break;
		}
		s+=i;						// Neu khong, s+1 cho den khi bang i
	}
	printf("m lon nhat = %d", i-1);
	} else if (n <= 0) {			// Neu n <= 0 thi i = 0
		i = 0;
		printf("m lon nhat = 0");
	}
	return 0;
}
