#include<string.h>
#include<stdio.h>

int main () {
	char s[10000];
	int i = 0;
	printf("Xau S:");
	gets(s);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			dem++;
		}
	}
	
	printf("So chu cai in hoa: %d", dem);
	printf("\nDao nguoc S: %s", strrev(s));
	
	return 0;
}
