#include <stdio.h>
#define Max 5

void NhapMang(int a[][Max], int &n){
	do{
		printf("Nhap cap ma tran: ");
		scanf("%d", &n);
	}while(!(n>=2 && n<=Max));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			printf("Phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void XuatMang(int a[][Max], int n){
	printf("Mang gom co: ");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
}

void Count_SoAm(int a[][Max], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(a[i][j]<0)
				count++;
		}
	printf("\nSo phan tu am trong ma tran la: %d", count);
}

void Print_DuongChan(int a[][Max], int n){
	printf("\nCac phan tu duong chan nam tren duong cheo chinh la: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				if(a[i][j]>0 && a[i][j]%2==0)
					printf("%d ", a[i][j]);
			}
		}	
	}
}

void Tong_TGTren(int a[][Max], int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				tong += a[i][j];
			}
		}	
	}
	printf("\nTong cac phan tu thuoc ma tran tam giac tren (khong tinh duong cheo) tren ma tran vuong la: %d", tong);	
}

void Tong_PTDuongCheoPhu(int a[][Max],int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		tong += a[i][n-1-i];	
	}	
	printf("\nTong cac phan tu thuoc duong cheo phu tren ma tran vuong la: %d", tong);	
}

int main(){
	int a[Max][Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	Count_SoAm(a,n);
	Print_DuongChan(a,n);
	Tong_TGTren(a,n);
	Tong_PTDuongCheoPhu(a,n);
}
