#include<string.h>
#include<math.h>
#include<stdio.h>

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
	
	if (strstr(s, w) != NULL) {						// Cach su dung strstr: strstr(xau S, xau W)
		printf("W co trong xau S.");
	} else {
		printf("W khong co trong xau S.");
	}
}

