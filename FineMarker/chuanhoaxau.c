#include <stdio.h>
#include <string.h>

char toupper(char thuong) {
    if(charx >= 'a' && charx <= 'z') charx = charx-32;
    return charx;
}

void choa(char a[]) {
    int n = strlen(a);
 	int i,j;
    for(i = 0;i < n; i++){
        if(a[i] == ' '){
            for(j = i;j < n - 1; j++){
                a[j] = a[j+1];
            }
            a[n-1] = NULL;
            i--;
            n--;
        }
        else break;
    }
    for(i = n - 1; i >= 0; i--) {
        if(a[i] == ' ') {
            a[i] = NULL;
            n--;
        }
        else break;
    }
    for(i = 1;i < n - 1; i++) {
        if(a[i] == a[i+1]) {
            for(j = i;j < n - 1; j++) {
                a[j] = a[j+1];
            }
            a[n-1] = NULL;
            i--;
            n--;
        }
    }
    a[0] =  toupper(a[0]);  
}

int main() {
    char a[100];
	gets(a);
    chuanHoa(a);
    printf("Chuan hoa-ed:");
    puts(a);
    return 0;
}
