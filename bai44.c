#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	char s[10000], c;
	int i;
	printf("Xau:");
	gets(s);
	
	printf("Ky tu:");
	scanf("%c", &c);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	
	if (dem <= 0) {
		printf("Ky tu '%c' khong co trong S.");
	} else {
		printf("Ky tu '%c' trong '%s': %d lan.", c, s, dem);
	}
	
	printf("\nS in hoa: %s", strupr(s));
	return 0;
}
