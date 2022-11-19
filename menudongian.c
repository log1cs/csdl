#include<stdio.h>

int main () {							// Main program
	int a;

menu: 								// Display menu
	printf("[1] Buoi sang\n");
	printf("[2] Buoi trua\n");
	printf("[3] Buoi chieu\n");
	printf("[4] Buoi toi\n");
	printf("[5] Ket thuc\n");
	printf("Chon chuc nang: ");
	scanf("%d", &a);
	
	switch(a) {						// Switch between case.
		case 1:
			printf("Chao buoi sang\n");
			goto menu;
		case 2:
			printf("Den gio nghi trua roi, di an thoi\n");
			goto menu;
		case 3:
			printf("Het gio lam viec, ve nha nao\n");
			goto menu;
		case 4:
			printf("Chuan bi ngu buoi toi\n");
			goto menu;
		case 5:
			printf("Chuc ngu ngon\n");
			break;
		default:						// In case unrelated option are given, break.
			break;
	}	
	return 0;
}

