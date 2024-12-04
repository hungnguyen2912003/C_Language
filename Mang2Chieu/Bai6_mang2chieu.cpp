#include <stdio.h>
#define Maxd 5
#define Maxc 10

void NhapMang(int a[][Maxc], int &m, int &n){
	do{
		printf("Nhap so dong, so cot ma tran: ");
		scanf("%d %d", &m, &n);
	}while(!(m>=2 && m<=Maxd) && !(n>=2 && n<Maxc));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void XuatMang(int a[][Maxc], int m, int n){
	printf("Ma tran vua nhap la: ");
	for(int i=0;i<m;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
}

void TongCacSoDuong(int a[][Maxc], int m, int n){
	int tong = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				tong += a[i][j];
			}
		}
	}
	printf("\nTong cac so duong trong ma tran la: %d", tong);
}

void TongCacGT1Dong(int a[][Maxc], int n, int k){
	int tong = 0;
	for(int i=0;i<n;i++){
		tong += a[k][i];
	}
	printf("Tong cac phan tu tren mot dong trong ma tran: %d", tong);
}

void Check_SoDuong(int a[][Maxc], int m, int n){
	int check = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				check = 1;
			}
		}
	}
	if(check == 1)
		printf("\nMa tran co so duong");
	else
		printf("\nMa tran khong co so duong");
}

void Check_ToanSoDuong(int a[][Maxc], int m, int n){
	int check = 1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<0){
				check = 0;
				break;
			}
		}
	}
	if(check==0)
		printf("\nMa tran khong toan so duong");
	else
		printf("\nMa tran toan so duong");	
}

int main(){
	int a[Maxd][Maxc], m, n, k;
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	TongCacSoDuong(a,m,n);
	printf("\nNhap dong can tinh (0->n): ");
	scanf("%d", &k);
	TongCacGT1Dong(a,n,k);
	Check_SoDuong(a,m,n);
	Check_ToanSoDuong(a,m,n);
	return 1;
}
