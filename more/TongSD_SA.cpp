#include <stdio.h>
#define Max 100

void NhapMang(int a[], int &n){
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n){
	printf("Noi dung cac phan tu mang: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}


int TongSoDuong(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]>=0)
			tong+=a[i];
	}
	return tong;
}

int TongSoAm(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]<0)
			tong+=a[i];
	}
	return tong;
}


int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTong cac so duong trong mang la: %d", TongSoDuong(a,n));
	printf("\nTong cac so am trong mang la: %d", TongSoAm(a,n));
	return 1;
}
