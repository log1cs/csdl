#include <stdio.h>
#include <string.h>

int main () {
	char s[10000];
	int dem=0,i;
	printf("Xau S:");
	gets(s);
	printf("Xoa chu so trong S:");
	for(i = 0;i < strlen(s); i++) {
		if(s[i] < 48|| s[i] > 57) {
			printf("%c",s[i]);
		}
	}
	int k = strlen(s);
	i = 0;
	while(s[i] == ' ') {
		s[i] = '?';
		i++;
	}
	for(i = 0;i < k; i++) {
		if(s[i] == ' ' && s[i + 1] == ' ') {
			s[i]='?';
		}			
	}
	for(i = 0; i < k; i++) {
		if(s[k] == 0 && s[k - 1] == ' ') {
			s[k - 1]='?';
		}		
	}
	printf("\nChuan hoa S:");
	for(i = 0;i < k; i++) {
		if(s[i] != '?' && (s[i] < 48 || s[i] > 57)) {
			printf("%c",s[i]);
		}		
	}
}
	
