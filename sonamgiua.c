#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	printf("A = ");
	scanf_s("%lf", &a);
	printf("B = ");
	scanf_s("%lf", &b);
	printf("C = ");
	scanf_s("%lf", &c);
	printf("X = ");
	if (a > b)
	{
		if (a < c)
			printf("%g", a);
		else if (b > c)
			printf("%g", b);
		     else printf("%g", c);
	}
	else if (b < c)
		printf("%g", b);
       	     else if (a > c)
		     printf("%g", a);
		  else printf("%g", c);
        return 0;
}
