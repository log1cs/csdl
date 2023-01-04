#include<string.h>
#include<stdio.h>

int main () {
	char s[10000];
	int i = 0;
	printf("Xau S:");
	gets(s);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
			dem++;
		}
	}
	
	printf("So chu so: %d", dem);
	printf("\nXau S in thuong: %s", strlwr(s));
	
	return 0;
}
