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
	printf("Noi dung phan tu cua mang: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

void InCacPhanTu(int a[], int n){
	printf("\nCac phan tu chan trong mang: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			printf("%d ", a[i]);
	}
}

float TBC(int a[], int n){
	float s=0;
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			s +=a[i];
			dem++;
		}
	}
	float tbc = s/dem;
	return tbc;
	
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	InCacPhanTu(a,n);
	printf("\nTrung binh cong cac phan tu chan la: %.2f", TBC(a,n));
	return 1;
}
