#include<string.h>
#include<stdio.h>

int main () {
	char s[10000]; int i;
	printf("Xau S:");
	gets(s);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
			dem++;
		}
	}
	
	printf("So chu cai trong S: %d", dem);
	printf("\nXau S co %d ky tu.", strlen(s));
	printf("\nIn thuong S:%s", strlwr(s));
	
	return 0;
}
