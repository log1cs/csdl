#include <stdio.h>

int main(void) {
  char a[100];
  printf("Nhap W = ");			// input S strings
  scanf("%[^\n]%*c", a);
  int i, j;
  for (i = 0; a[i] != '\0'; i ++) {				// Remove number in strings
    if (a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9') {
      for (j = i; a[j] != '\0'; j ++)
        a[j] = a[j + 1];
      i--;
    }
  }
  printf("W sau khi xoa cac chu so = %s", a);			// Print the output.
return 0;
}
