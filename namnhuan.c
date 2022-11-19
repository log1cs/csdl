#include <stdio.h>

int main() {
   int a;
   printf("N = ");
   scanf("%d", &a);
   if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)) {
      printf("%d la nam nhuan", a);
   } else {
      printf("%d khong phai nam nhuan", a);
   }
   return 0;
}
