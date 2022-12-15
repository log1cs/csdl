#include<stdio.h>
#include<conio.h>
#include<string.h>

int main () {
	int p, q, i, j, k, slength, wlength;
	char w[100], s[100], r[100], x[100];
	printf("Nhap W = ");
	gets(w);
	printf("Nhap S = ");
	gets(s);
	printf("P = ");
	scanf("%d", &p);
	printf("Q = ");
	scanf("%d", &q);

	// Debugging purposes only - Print the input strings
	//printf("%s", w);
	//printf("\n%s\n", s);

	slength = strlen(s);
	wlength = strlen(w);

	if (p > slength && s > wlength) {
		exit(0);
	} else {
		for (i = 0; i < p; i++) {
		r[i] = w[i];
		}

		k = i;

		for (j = 0; s[j] !='\0';j++) {
		r[k] = s[j];
		k = k + 1;
		}

		for (i; w[i] != '\0'; i++) {
		r[k] = w[i];
		k = k + 1;
		}
	}

	r[k] = '\0';
	printf("Ket qua: %s", r);
	return 0;
}
