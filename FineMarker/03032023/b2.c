#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main () {
	char s[10000], c;
	int i;
	printf("Xau S:");
	gets(s);
	
	printf("Ky tu C:");
	scanf("%c", &c);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	
	printf("Co %d ky tu C trong xau S", dem);
	printf("\nXau S doi nguoc hoa thuong: ");	
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] = s[i] + 32;
		} else if (s[i] >= 97 && s[i] <= 122) {
			s[i] = s[i] - 32;	
		}
		printf("%c", s[i]);	
	}
	return 0;
}
