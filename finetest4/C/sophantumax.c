#include<stdio.h>
#include<math.h>

int main()
{
	int a[1000];
	int temp;
	int i, n, x;
	printf("N = ");
	scanf("%d", &n);
	printf("a[0] = ");
	scanf("%d", &a[0]);
	temp = a[0];
	x = 1;
	for(i = 1;i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
		if(temp < a[i])
		{
			temp = a[i];
			x=1;
		}
		else if (temp==a[i])
		{
			x++;
		}
	}
	printf("Gia tri lon nhat cua A: %d\n", temp);
	printf("So phan tu co gia tri lon nhat: %d\n", x);
	return 0;
}
