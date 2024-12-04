#include <stdio.h>
#include <math.h>

struct point{
	float x, y;
};


//struct HINHCHUNHAT{
//	struct DIEM traitren;
//	struct DIEM phaiduoi;
//} hcn1;
//
//struct SINHVIEN{
//	char hoten[30];
//	struc PERSON *father, *mother;
//};


 
int main(){
//	float d;
//	d = sqrt(pow(diem1.x - diem2.x,2) + pow(diem1.y - diem2.x,2));
//	printf("d(A|B) = 0.1%f", d);

//	DIEM diem1, diem2;
//	printf("Nhap du lieu diem 1: ");
//	scanf("%f %f", &diem1.x, &diem1.y);
//	printf("Nhap du lieu diem 2: ");
//	scanf("%f %f", &diem2.x, &diem2.y);	
//	fflush(stdin);
//
//	hcn1.traitren.x = 2912;
//	hcn1.traitren.y = 1704;
	point a,b;
	scanf("%f %f", &a.x, &a.y);
	fflush(stdin);
	scanf("%f %f", &b.x, &b.y);
	printf("a(%0.1f, %0.1f)", a.x, a.y);
	printf("\nb(%0.1f, %0.1f)", b.x, b.y);	
}
