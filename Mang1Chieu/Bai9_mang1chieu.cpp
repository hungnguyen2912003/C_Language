#include <stdio.h>
#include <math.h>
#define Max 50

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	}while(!(n>=5 && n<=Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int &n){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

int Check_X(int a[], int n, int x){
	for(int i=0;i<n;i++)
		if(a[i]>x){
			return -1;
		}
	return 1;
}

float TBC(int a[], int n, int x){
	int dem  = 0;
	float tong = 0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			dem++;
			tong += a[i];
		}
	}
	return (float)tong/dem;
}


int demptduong(int a[], int n, int x){
	int dem = 0;
	for(int i=0;i<n;i++)
		if(a[i]>0 && x%a[i]!=0)
			dem++;
	return dem;
}

void indemptduong(int a[], int n, int x){
	printf("\n => Cac phan tu duong khong phai la uoc so cua x: ");
	for(int i=0;i<n;i++)
		if(a[i]>0 && x%a[i]!=0)
			printf("%d ", a[i]);
}

void Chen_X(int a[], int &n, int x){
	int vt = n/2;
	printf("\nMang sau khi chen x vao chinh giua mang a: ");
	for(int i=n;i>vt;i--)
		a[i]=a[i-1];	
	a[vt]=x;
	n++;
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

void TaoMang(int a[], int n, int b[], int &nb, int c[], int &nc, int x){
	nb = 0;
	nc = 0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			b[nb]=a[i];
			nb++;
		}
		if(a[i]>=x){
			c[nc]=a[i];
			nc++;
		}
	}
}

int main(){
	int a[Max], b[Max], c[Max], n, nb, nc, x;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nNhap so x: ");
	scanf("%d", &x);
	if(Check_X(a,n,x)==1)
		printf("\nX lon hon moi phan tu trong mang a");
	else
		printf("\nX khong lon hon moi phan tu trong mang a");
	float tbc = TBC(a,n,x);
	printf("\nTrung binh cong cac phan tu trong mang a nho hon x la: %.2f", tbc);
	printf("\nCac phan tu duong trong mang a khong phai la uoc so cua x: %d", demptduong(a,n,x));
	indemptduong(a,n,x);
	Chen_X(a,n,x);
	TaoMang(a,n,b,nb,c,nc,x);
	printf("\nMang B la: ");
	XuatMang(b,nb);
	printf("\nMang C la: ");
	XuatMang(c,nc);
	return 1;
}
