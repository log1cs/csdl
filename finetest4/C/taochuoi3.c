#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main () {
	char w[100];
	int s;
	size_t i, j;
	printf("Nhap W = ");
	gets(w);

	if (strlen(w) == 0 || strlen(w) == 1) {
		printf("Cac xau con la:");
	} else {
		printf("Cac xau con la:\n");
		size_t n = strlen(w);
		size_t pos = 0;
		char temp[4];
		temp[3] = '\0';
		for (i = 0; i < n; i++) {
			for (j = 0; j < 3; j++) {
				temp[j] = w[pos];
				pos = (pos + 1) % n;
			}
		printf("%s\n", temp);
		}
	}
	return 0;
}
