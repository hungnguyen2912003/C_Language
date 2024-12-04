#include <stdio.h>
#define MAX 100

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong phan tu cua n: ");
		scanf("%d", &n);
	}while(!(n>0 && n<MAX));
	for(int i=0; i<n; i++){
		printf("Nhap phan tu lan thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n){
	printf("Noi dung cua mang la: ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int Tong(int a[], int n){
	int s=0;
	for(int i=0; i<n; i++)
		s +=a[i];
	return s;
}

int main(){
	int a[MAX], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTong phan tu cua mang la: %d", Tong(a,n));
	return 1;
}
