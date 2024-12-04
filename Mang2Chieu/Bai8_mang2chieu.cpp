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

void TichCacGTLe(int a[][Maxc], int m, int n){
	int kq = 1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2!=0){
				kq *= a[i][j];
			}
		}
	}
	printf("\nTich cac phan tu le trong ma tran: %d", kq);
}

void TichSoChanTrenCot(int a[][Maxc], int m, int h){
	int kq = 1;
	for(int i=0;i<m;i++){
		if(a[i][h]%2==0){
			kq *= a[i][h];
		}
	}
	printf("Tich cac so chan tren mot cot la: %d", kq);
}

bool check_PefectNumber(int x){
	int tong = 0; 
	for(int i=1;i<=x/2;i++){
		if(x%i==0)
			tong += i;
	}
	if(tong==x)
		return true;
	return false;
}

void PefectNumber(int a[][Maxc], int m, int n){
	int sum = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				if(check_PefectNumber(a[i][j])==true)
				sum += a[i][j];
			}
			else
				break;
		}
	}
	printf("\nTong cac so hoan thien trong ma tran la: %d", sum);	
}

void PrintPefectNumber(int a[][Maxc], int m, int n){
	printf("\nCac phan tu la so hoan thien la: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				if(check_PefectNumber(a[i][j])==true)
					printf("%d ", a[i][j]);
			}
			else
				break;
		}
	}
}

void ThayThe(int a[][Maxc], int m, int n){
	printf("\nMa tran sau khi bien doi gia tri am bang tri tuyet doi cua no: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<0){
				a[i][j] = -a[i][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
}

int main(){
	int a[Maxd][Maxc], m, n, h;
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	TichCacGTLe(a,m,n);
	printf("\nNhap cot can tinh (0->%d): ", n-1);
	scanf("%d", &h);
	TichSoChanTrenCot(a,m,h);
	PrintPefectNumber(a,m,n);
	PefectNumber(a,m,n);
	ThayThe(a,m,n);
	return 1;
}
