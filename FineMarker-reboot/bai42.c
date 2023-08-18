#include<stdio.h>
#include<string.h>

int demtu(char *s) {
	int n = strlen(s), i;
	if (strlen(s) == 0) {
		return 0;
	}
	
	int dem = 0;
	
	if (s[0] != ' ') {
		dem = 1;
	}
	
	for (i = 0; i < n - 1; i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			dem++;
		}
	}
	
	return dem;
}

int main () {
	char s[10000];
	printf("Xau S:");
	gets(s);
	
	printf("Xau S co %d tu!", demtu(s));
	printf("\nDao nguoc S:%s", strrev(s));
	return 0;
}


