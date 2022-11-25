#include<stdio.h>
#include<math.h>

int main () {
	float a,b,c,d;		// a = diem mieng, b = diem mot tiet, c = diem hoc ky, d = diem trung binh
	printf("Diem Mieng = ");
	scanf("%f", &a);
	printf("Diem Mot Tiet = ");
	scanf("%f", &b);
	printf("Diem Hoc Ky = ");
	scanf("%f", &c);
	d = ((a + (b * 2) + (c * 3)) / 6);		// d = Ðiem TB = (Mieng + Mot Tiet x 2 + Hoc Ky x 3) / 6
	printf("Diem TB = %g", d);
	return 0;
}
