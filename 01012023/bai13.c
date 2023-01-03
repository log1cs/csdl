#include<stdio.h> 
#include<string.h>

int main () {
	char s[1000];
	int i, tu = 0;
	printf("Xau S:");
	gets(s);
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			tu++;
		}
	}
	
	printf("Xau S co %d tu!", tu);
	printf("\nXau S in hoa: %s", strupr(s));
	
}
