#include <stdio.h>
#include <math.h>
#define Maxd 5
#define Maxc 10

void NhapMang(int a[][Maxc], int &m, int &n){
	do{
		printf("Nhap so dong, so cot ma tran: ");
		scanf("%d %d", &m, &n);
	}while(!(m>=2 && m<=Maxd) && !(n>=1 && n<Maxc));
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

bool check_PefectNumber(int a){
	int tong = 0; 
	for(int i=1;i<=a/2;i++){
		if(a%i==0)
			tong += i;
	}
	if(tong==a)	return true;
	return false;
}

void PefectNumber(int a[][Maxc], int m, int n){
	int check = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(check_PefectNumber(a[i][j])==true){
				check++;
			}
		}
	}
	if(check==0)
		printf("\nMa tran khong ton tai so hoan thien");
	else
		printf("\nMa tran ton tai so hoan thien");	
}

void PrintPefectNumber(int a[][Maxc], int m, int n){
	printf("\nCac phan tu la so hoan thien trong ma tran: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(check_PefectNumber(a[i][j])==true){
				printf("%d ", a[i][j]);
			}
		}
	}
}

void Check_Row_Upper(int a[][Maxc], int n, int k){
	int check = 0;
	for(int i=0;i<n;i++){
		for(int j= i+1; j<n; j++)
			if(a[k][i] > a[k][j]){
				check = 0;
				break;
			}
			else
				check++;
	}
	if(check == 0)
		printf("Cac phan tu trong mot hang cua ma tran khong tang dan");
	else
		printf("Cac phan tu trong mot hang cua ma tran tang dan");
}

void Check_Columm_Lower(int a[][Maxc], int m, int h){
	int check = 0;
	for(int i=0;i<m;i++){
		for(int j= i+1; j<m; j++)
			if(a[i][h] < a[j][h]){
				check = 0;
				break;
			}
			else
				check++;
	}
	if(check == 0)
		printf("Cac phan tu trong mot cot cua ma tran khong giam dan");
	else
		printf("Cac phan tu trong mot hang cua ma tran giam dan");
}

int Check_SoChinhPhuong(int n){
	return sqrt((float)n)==(int)sqrt((float)n);
}

void Print_Columm_SoChinhPhuong(int a[][Maxc], int m, int n)
{
	int flag, i, j;
	for(i=0;i<m;i++)
	{
		flag = 0;
		for(j=0;j<n;j++)
		{
			if(Check_SoChinhPhuong(a[i][j])==1)
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			printf("\nCot a[%d] co chua so chinh phuong", j);		
		}
	}
}

int main(){
	int a[Maxd][Maxc], m, n, k, h;
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	PefectNumber(a,m,n);
	PrintPefectNumber(a,m,n);
	printf("\nNhap so dong k can thuc hien (0->%d): ", m-1);
	scanf("%d", &k);
	Check_Row_Upper(a,n,k);
	printf("\nNhap so cot h can thuc hien (0->%d): ", n-1);
	scanf("%d", &h);
	Check_Columm_Lower(a,m,n);
	Print_Columm_SoChinhPhuong(a,m,n);
	return 1;
}
