#include<stdio.h>
#include<string.h>

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
	
	if (dem <= 0) {
		printf("Ky tu c khong co trong S!");
	} else {
		printf("Ky tu c co trong S: %d lan.", dem);
	}
	
	printf("\nIn hoa va dao nguoc S: %s", strrev(strupr(s)));
	
	return 0;
}
