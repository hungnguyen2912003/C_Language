#include <stdio.h>
#define MaxRow 50
#define MaxColumn 50
/*
	Write a program in C for addition of two Matrices of same size.
	Viet chuong trình trong C de cong hai ma tran co cung kich thuoc.
*/

void Input_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int &n){
	printf("\n\nCong hai ma tran co cung kich thuoc\n");
	printf("---------------------------------------\n");
	printf("Nhap kich thuoc cua ma tran vuong (nho hon 5): ");
	scanf("%d", &n);
	printf("Nhap phan tu vao ma tran thu nhat: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu - [%d],[%d]: ",i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Nhap phan tu vao ma tran thu hai: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu - [%d],[%d]: ",i, j);
			scanf("%d", &brr1[i][j]);
		}
	}	
}

void Output_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int n){
	printf("\nMa tran thu nhat la: ");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", arr1[i][j]);
		}
	}
	printf("\nMa tran thu hai la: ");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", brr1[i][j]);
		}
	}	
}

void Sum_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int n){
	int crr1[MaxRow][MaxColumn];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			crr1[i][j] = arr1[i][j] + brr1[i][j];
	printf("\nTong cac phan tu cua 2 ma tran la: ");
	for (int i=0;i<n;i++){
		printf("\n");
		for (int j=0;j<n;j++)
			printf("%d\t",crr1[i][j]);
	}	
}

int main(){
	int arr1[MaxRow][MaxColumn], brr1[MaxRow][MaxColumn], n;
	Input_Matrix(arr1, brr1, n);
	Output_Matrix(arr1, brr1, n);
	Sum_Matrix(arr1, brr1, n);
}
