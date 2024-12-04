#include <stdio.h>
#define Max 50

/*
	Cau 1 (5.0 diem). Viet chuong trinh nhap v�o mot ma tran vu�ng c� n � n
	phan tu cac so nguyen, voi n kh�ng be hon 2. Thuc hien cac yeu cau sau:
	a. neu nhap n kh�ng thoa yeu cau thi yeu cau nhap lai cho den khi d�ng (0.5d)
	b. xuat ra m�n hinh ma tran d� (0.5d)
	c. tinh trung binh cong cac phan tu chan tren duong cheo chinh (1.5d)
	d. in ra m�n hinh cac phan tu l� so ho�n hao xuat hien trong ma tran neu c� (1.5d)
	e. xuat ra m�n hinh phan tu c� gia tri nho nhat tai cac vi tri h�ng chan, cot le trong ma tran (1.0d)
*/

void NhapMang(int a[][Max], int &n){
	do{
		printf("Nhap so luong phan tu trong mang: ");
		scanf("%d", &n);
	}while(!(n>2 && n<Max));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void XuatMang(int a[][Max], int n){
	printf("Mang sau khi nhap: ");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
}

float TBC(int a[][Max], int n){
	int tong = 0;
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j && a[i][j]%2==0){
				tong += a[i][j];
				count++;
			}
		}
	}
	return (float)tong/count;
}

int KTSoHoanHao(int n){
	int tong = 0;
	for(int i=1;i<n;i++)
		if(n%i==0)
			tong+=i;
	if(tong==n)
		return 1;
	return 0;
}

void SoHoanHao(int a[][Max], int n){
	printf("\nCac phan tu la so hoan hao xuat hien trong ma tran: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(KTSoHoanHao(a[i][j]))
				printf("%d ", a[i][j]);
		}
	}
}

void SoNhoNhat(int a[][Max], int n){
	int min = a[0][0];
	printf("\nPhan tu co gia tri nho nhat tai cac vi tri hang chan, cot le trong ma tran: ");
	for(int i=0;i<n;i++){
		if(i%2==0)
			for(int j=0;j<n;j++)
				if(j%2==1 && a[i][j]<min)
						printf("%d", a[i][j]);
	}
}

int main(){
	int a[Max][Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTrung binh cong cac phan tu chan tren duong cheo chinh: %0.2f", TBC(a,n));
	SoHoanHao(a,n);
	SoNhoNhat(a,n);
	return 1;
}
