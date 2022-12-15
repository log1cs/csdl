#include<stdio.h>
#include<string.h>

int main()
{
	char c[100][100];
	int n;
	printf("N = ");
	scanf_s("%d", &n);
	fgets(c[0], sizeof(c[0] + 1), stdin);
	int i, k, x;
	if(n!=0)
	{
		printf("Ten ngon ngu lap trinh thu 1: ");
		fgets(c[1], sizeof(c[1]) + 1, stdin);
		k = strlen(c[1]);
		x = 1;
		for(i=2; i<=n; i++)
		{
			printf("Ten ngon ngu lap trinh thu %d: ", i);
			fgets(c[i], sizeof(c[i]) + 1, stdin);
			if(strlen(c[i]) <= k)
			{
				k = strlen(c[i]);
				x = i;
			}
		}
	printf("Ngon ngu ngan nhat cuoi cung la: %s", c[x]);
	}
	else{
		printf("Ngon ngu ngan nhat cuoi cung la: ");
	}
	return 0;
}
