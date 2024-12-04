#include <stdio.h>
#define Max 100
#include <math.h>

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong cua mang: ");
		scanf("%d", &n);
	}while(!(n>0 && n<Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n){
	printf("Noi dung cac phan tu trong mang: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

float TBC(int a[], int n){
	float s=0;
	float dem = 0;
	printf("\nCac vi tri chan trong mang la: ");
	for(int i=0;i<n;i++){
		if(i%2==0){
			s +=a[i];
			printf("\n\ta[%d] = %d", i, a[i]);
			dem++;
		}
	}
	float tbc=s/dem;
	return tbc;
}


int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTrung binh cong cac phan tu o vi tri chan la %.2f", TBC(a,n));
	return 1;
}
