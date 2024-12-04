#include <stdio.h>

/*Viet chuong trình trong C de tìm tong các duong chéo bên phai cua ma tran.*/


void Input_Elements(int arr1[][50], int &n){
	printf("\n\nTim tong cac duong cheo ben phai cua ma tran\n");
	printf("-------------------------------------------\n");
	printf("Nhap kich thuoc cua ma tran vuong: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu - [%d],[%d]: ", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
}

void Sum_Diagonal(int arr1[][50], int n){
	int sum = 0;
	printf("Ma tran la: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%4d", arr1[i][j]);
		printf("\n");
			if(i==j)
				sum += arr1[i][j];
	}
		printf("Tong cac duong cheo ben phai cua ma tran: %d\n", sum);
}

int main(){
	int arr1[50][50], n;
	Input_Elements(arr1,n);
	Sum_Diagonal(arr1,n);
	return 1;
}
