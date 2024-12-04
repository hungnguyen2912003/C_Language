#include <stdio.h>
#define Max 100

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(!(n>0 && n<Max));
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n){
	printf("Noi dung cua mang la: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

void InCacPhanTuLe(int a[], int n){
	printf("\nCac phan tu le trong mang la: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
			printf("%d ", a[i]);
	}	
}

int Tong(int a[], int n){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
			s +=a[i];
	}
	return s;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	InCacPhanTuLe(a,n);
	printf("\nTong cac phan tu le trong mang la %d", Tong(a,n));
	return 1;
}
