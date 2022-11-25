#include<stdio.h>
#include<math.h>

int main () {
        int a,b;                // Khai bao gia tri a,b
        printf("A=");
        scanf("%d", &a);        // Nhap gia tri A
        printf("B=");
        scanf("%d", &b);        // Nhap gia tri B
        printf("A+B=%d", a + b);        // a + b
        printf("\nA-B=%d", a - b);      // a - b
        printf("\nAxB=%d", a * b);      // a * b
        printf("\nA:B=%d", a / b);      // a chia b lay thuong
        printf("\nA%%B=%d\n", a % b);      // a chia b lay so du
        return 0;
}
