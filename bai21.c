#include<string.h>
#include<stdio.h>

int main () {
	char s[10000], c;
	int i;
	printf("Xau S:");
	gets(s);
	
	printf("Ky tu c:");
	scanf("%c", &c);
	
	int dem = 0;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	
	printf("Ky tu '%c' xuat hien %d lan trong xau S", c, dem);
	printf("\nIn hoa: %s", strupr(s));
	return 0;
}
