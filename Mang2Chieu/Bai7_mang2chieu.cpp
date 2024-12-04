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

void TongCacGT1Dong(int a[][Maxc], int n, int k){
	int max = a[0][0];
	for(int i=0;i<n;i++){
		if(max<a[k][i]){
			max = a[k][i];
		}
	}
	printf("Phan tu lon nhat tren mot dong trong ma tran: %d", max);
}

void Find_SoChan(int a[][Maxc], int m, int n){
	printf("\nSo chan co hai chu so xuat hien dau tien trong ma tran la: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>10 && a[i][j]<100){
				if(a[i][j]%2==0){
					printf("%d", a[i][j]);
					break;
				}
			}
		}
	}	
}

void SoPTAm1Cot(int a[][Maxc], int m, int h){
	int count = 0;
	for(int j=0;j<m;j++){
		if(a[j][h]<0){
			count++;
		}
	}
	printf("So phan tu am tren mot cot trong ma tran la: %d", count);
}

void TichGTDuong1Dong(int a[][Maxc], int n, int k){
	int kq = 1;
	for(int i=0;i<n;i++){
		if(a[k][i]>0){
			kq *= a[k][i];
		}
	}
	printf("\nTich cac phan tu duong tren mot dong trong ma tran: %d", kq);
}

int main(){
	int a[Maxd][Maxc], m, n, k, h;
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	printf("\nNhap dong can tinh (0->%d): ", m-1);
	scanf("%d", &k);
	TongCacGT1Dong(a,n,k);
	Find_SoChan(a,m,n);
	printf("\nNhap cot can tinh (0->%d): ", n-1);
	scanf("%d", &h);
	SoPTAm1Cot(a,m,h);
	TichGTDuong1Dong(a,n,k);
	return 1;
}
