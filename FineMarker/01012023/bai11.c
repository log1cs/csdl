#include<string.h>
#include<math.h>
#include<stdio.h>

int main() {
	char s[10000], c;
	int dem = 0, i = 0;
	printf("Xau S:");
	gets(s);

	printf("Ky tu c:");
	scanf("%c", &c);

	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	printf("Ky tu '%c' xuat hien %d lan trong xau S", c, dem);
	printf("\nIn hoa:%s", strupr(s));
	return 0;
}
