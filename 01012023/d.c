#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main() {
	char s[10000], c[10000];
	int i = 0, a = 0, d = 0;
	printf("Xau S:");
	gets(s);

	a = strlen(s);

	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) {
			d++;
		}
	}

	c[i] = strlwr(s);

	printf("So chu cai trong S: %d", d);
	printf("\nXau S co %d ky tu.", a);
	printf("\nIn thuong S: %s", c);
}
