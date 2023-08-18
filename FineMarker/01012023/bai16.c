#include<stdio.h>
#include<string.h>

int main () {
	char s[1000]; int i, demcc = 0;
	printf("Xau S:");
	gets(s);
	
	for (i = 0; i <= strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
			demcc++;
		}
	}
	
	printf("So chu cai trong S: %d", demcc);
	printf("\nXau S co %d ky tu.", strlen(s));
	printf("\nIn thuong S:%s", strlwr(s));
}
