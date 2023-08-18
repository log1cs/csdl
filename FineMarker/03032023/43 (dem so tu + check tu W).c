#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdbool.h>

bool check(char s[],char s2[]) {
	int i,dem = 0, ok=1, j;
	if (strlen(s) == 0 && strlen(s2) == 0) {
		return false;
	}
		for(i = 0; i < strlen(s); i++) {
			dem++;
				if(s[i] == s2[0]) {
					ok = 1;
					for(j = 0; j < strlen(s2); j++) {
						if(s2[j] != s[i+j]) {
							ok = 0;
							break;
						}
					}
				if(ok == 1) {
					return true;
					break;
				}
			}
	}
	if(dem == strlen(s)) {
		return false;
	}	
}

int demsotu(char *s)
{
	int n = strlen(s), i;
	if (strlen(s) == 0) {
		return 0;
	}
	int dem=0;
	if(s[0] != ' ')
		dem = 1;
	for(i = 0;i < n - 1; i++)
	{
		if(s[i]==' ' && s[i + 1]!=' ')
			dem++;
	}
	return dem;
}


int main () {
	char s[10000], w[10000];
	printf("Xau S:");
	gets(s);
	
	printf("Xau S co %d tu.", demsotu(s));
	
	printf("\nTu W:");
	scanf("%c", &w);
	
	if (check(s, w) == true) {
		printf("W co trong xau S.");
	} else {
		printf("W khong co trong xau S.");
	}
}
