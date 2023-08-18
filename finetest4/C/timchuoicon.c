#include<stdio.h>
#include<conio.h>
#include<string.h>

int findsubstr(const char *str, char *sub);

void main() {
    char str[100], sub1[100];
    printf("Nhap xau S: ");			// input S strings
    scanf("%[^\n]%*c", str);
    printf("Nhap xau W: ");			// input W strings
    scanf("%[^\n]%*c", sub1);
    printf("W xuat hien trong S o vi tri %d\n", findsubstr(str, sub1));
}

int findsubstr(const char *str, char *sub) {
    const char *p = str;
    int len = strlen(sub);
    while(*p != NULL)
    {
        if (strlen(p) >= len)			// If W strings contains a character that also in the S strings, return the length.
        {					// In this case, i mean how long it will be from the very first character till the duplicated character
            if (strncmp(p, sub, strlen(sub)) == 0) // in both strings.
            {
                return (p - str);
            }
        } else {				// RARE case: Return invalid if nothing duplicated in both strings.
        	printf("W khong xuat hien trong S\n");
			exit(0);
        }
        p++;
    }
}
