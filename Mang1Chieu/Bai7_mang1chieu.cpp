#include <stdio.h>
#include <math.h>
#define Max 50

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	}while(!(n>=1 && n<=Max));
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

int KtraSNT(int n){
	if(n<2)
		return 0;
	else{
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
		return 1;
	}
}

int check_MangSNT(int a[], int n){
	for(int i=0;i<n;i++){
		if(KtraSNT(a[i])==1){
			return 1;
		}
	}
	return 0;
}

void InSNT(int a[], int n){
	for(int i=0;i<n;i++){
		if(KtraSNT(a[i])==1)
			printf("%d ", a[i]);
	}
}

int check_MangAllSNT(int a[], int n){
	for(int i=0;i<n;i++)
		if(KtraSNT(a[i]==1))
			return 1;
	return 0;
}

int KtraMangTang(int a[], int n){
	for(int i=0;i<n-1;i++)
		if(a[i]>a[i+1])
			return 0;
	return 1;
}

int KtraMangGiam(int a[], int n){
	for(int i=0;i<n-1;i++)
		if(a[i]<a[i+1])
			return 0;
	return 1;
}

void VTSoDuongNhoNhat(int a[], int n){
    int minduong = 0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            minduong = a[i];
            break;
        }
    }
    if(minduong!=0){
		for(int i=0;i<n;i++)
			if(a[i]>0 && a[i]<minduong){
				minduong = a[i];
				printf("\nPhan tu duong nho nhat trong mang: %d", minduong);
				printf("\nVi tri phan tu duong nho nhat trong mang (0 -> %d): %d",n-1, i);
			}
	}
	else
		printf("\nKhong co phan tu duong trong mang");
}

void VTSoAmNhoNhat(int a[], int n){
    int minam = 0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            minam = a[i];
            break;
        }
    }
	if(minam!=0){
		for(int i=0;i<n;i++)
			if(a[i]<0 && a[i]<minam){
				minam = a[i];
				printf("\nPhan tu am nho nhat trong mang: %d", minam);
				printf("\nVi tri phan tu am nho nhat trong mang (0 -> %d): %d",n-1, i);
			}
	}
	else
		printf("\nKhong co phan tu am trong mang");
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	if(check_MangSNT(a,n)==1){
		printf("\nMang co chua so nguyen to: ");
		InSNT(a,n);
	}
	else
		printf("\nMang khong chua so nguyen to");
	if(check_MangAllSNT(a,n)==0)
		printf("\nMang co phan tu khong phai toan bo so nguyen to");
	else
		printf("\nMang co phan tu toan bo so nguyen to");
	if(KtraMangTang(a,n)==0)
		printf("\nMang khong co thu tu tang");
	else
		printf("\nMang co thu tu tang");
	if(KtraMangGiam(a,n)==0)
		printf("\nMang khong co thu tu giam");
	else
		printf("\nMang co thu tu giam");
	VTSoDuongNhoNhat(a,n);
	VTSoAmNhoNhat(a,n);
	return 1;
}
