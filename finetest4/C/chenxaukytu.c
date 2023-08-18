#include<stdio.h>
#include<string.h>

int main(){
    char s[1000], w[1000];
    int i = 0;
    printf("Nhap W = "); gets(w);
    printf("Nhap S = "); gets(s);
    int p, q;
    printf("P = "); scanf("%d", &p);
    printf("Q = "); scanf("%d", &q);
    if (p > strlen(w) || q > strlen(w) || p < 0 || q < 0) return 0;
    else{
        printf("Ket qua: ");
        for (i = 0; i < strlen(w); i++){
            if((i == p || i == q) && p != q) printf("%s", s);
            else if (i == p && i == q) printf("%s%s", s, s);
            printf("%c", w[i]);
        }
    }
    return 0;
}
