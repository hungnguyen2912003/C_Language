#include <stdio.h>
#include <math.h>
#define Max 50

void NhapMang(int a[], int fr1[], int &na){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &na);
	}while(!(na>=1 && na<=Max));
	for(int i=0;i<na;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		fr1[i]=-1;
	}
}

void XuatMang(int a[], int &na){
	printf("Mang A gom: ");
	for(int i=0;i<na;i++){
		printf("%d ", a[i]);
	}
}


void Hoanvi(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

/*Tao mang B gom cac so am cua mang A va sap xep mang B theo thu tu tang dan*/

void MangB(int a[], int b[], int na, int &nb){
	nb = 0;
	printf("\nMang B gom cac so am cua mang A: ");
	for(int i=0; i<na; i++){
		if(a[i]<0){
			b[nb]=a[i];
			printf("%d ", b[nb]);
			nb++;
		}
	}
}
void MangB_TangDan(int b[], int nb){
    printf("\nMang B sau khi sap xep tang dan la: ");
    for(int i=0;i<nb-1;i++){
        for(int j=i+1;j<nb;j++)
            if(b[i] > b[j])
				Hoanvi(b[i],b[j]);
	}
	for(int i=0;i<nb;i++){
		printf("%d ", b[i]);
	}
}

/*Tao mang C gom cac so duong cua mang A va sap xep mang C theo thu tu giam dan*/

void MangC(int a[], int c[], int na, int &nc){
	nc = 0;
	printf("\nMang C gom cac so duong cua mang A: ");
	for(int i=0; i<na; i++){
		if(a[i]>0){
			c[nc]=a[i];
			printf("%d ", c[nc]);
			nc++;
		}
	}
}

void MangC_GiamDan(int c[], int nc){
    printf("\nMang C sau khi sap xep giam dan la: ");
    for(int i=0;i<nc-1;i++){
        for(int j=i+1;j<nc;j++)
            if(c[i] < c[j])
				Hoanvi(c[i],c[j]);
	}
	for(int i=0;i<nc;i++){
		printf("%d ", c[i]);
	}
}

/*Sap xep mang a sao cho cac so am tang dan, so duong giam dan*/
void SapxepMangA(int a[], int na){
	printf("\nMang A sau khi sap xep cac so am tang dan, cac so duong giam dan: ");
	for(int i=0;i<=na;i++){
		for(int j=i+1;j<na;j++){
			if(a[i]<0 && a[j]<0){
				if(a[i]>a[j])
					Hoanvi(a[i],a[j]);
			}
			if(a[i]>0 && a[j]>0){
				if(a[i]<a[j])
					Hoanvi(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<na;i++)
		printf("%d ", a[i]);
}


void Check_Element(int a[], int na){
	int check = 0;
	for(int i=0;i<na-1;i++)
		for(int j=i+1;j<na;j++)
			if(a[i]*2==a[j])
				check = 1;
	if(check==1)
		printf("\nMang a thoa man dieu kien: Cac phan tu dung sau co gia tri lon gap hai lan phan tu dung lien ke truoc do");
	else
		printf("\nMang a khong thoa man dieu kien: Cac phan tu dung sau co gia tri lon gap hai lan phan tu dung lien ke truoc do");				
}

void Count(int a[], int fr1[], int n){
	int ctr;
	for(int i=0;i<n;i++){
		ctr = 1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				ctr++;
				fr1[j] = 0;
			}
		}
		if(fr1[i]!=0){
			fr1[i] = ctr;
		}
	}
}

void Print_Element(int a[], int fr1[], int n){
	printf("\nCac phan tu lap lai dung 2 lan la: ");
	for(int i=0;i<n;i++)
		if(fr1[i]==2)
			printf("%d ", a[i]);
}

int main(){
	int a[Max], b[Max], c[Max], fr1[Max], na, nb, nc;
	NhapMang(a,fr1,na);
	XuatMang(a,na);
	Check_Element(a,na);
	MangB(a,b,na,nb);
	MangB_TangDan(b,nb);
	MangC(a,c,na,nc);
	MangC_GiamDan(c,nc);
	SapxepMangA(a,na);
	Count(a,fr1,na);
	Print_Element(a,fr1,na);
	return 1;
}
