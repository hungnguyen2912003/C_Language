#include <stdio.h>
#define MaxRow 50
#define MaxColumn 50
/*
	Write a program in C for multiplication of two quare Matrices.
	Viet chuong trình trong C de nhan hai ma tran vuong.
*/

void Input_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int &r1, int &r2, int &c1, int &c2){
	printf("\n\nNhan hai ma tran vuong\n");
	printf("--------------------------\n");
	printf("Nhap so dong va cot cua ma tran thu nhat: ");
	scanf("%d %d", &r1, &c1);
	printf("Nhap so dong va cot cua ma tran thu hai: ");
	scanf("%d %d", &r2, &c2);
	if(c1!=r2){
		printf("Phep nhan cua ma tran khong ton tai");
		printf("\nCot cua ma tran thu nhat va dong cua ma tran thu hai phai bang nhau");
	}
	else{
		printf("Nhap so luong phan tu cua ma tran thu nhat: \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("Phan tu - [%d],[%d]: ", i, j);
				scanf("%d", &arr1[i][j]);
			}
		}
		printf("Nhap so luong phan tu cua ma tran thu hai: \n");
		for(int i=0;i<r2;i++){
			for(int j=0;j<c2;j++){
				printf("Phan tu - [%d],[%d]: ", i, j);
				scanf("%d", &brr1[i][j]);
			}
		}		
	}
}

void Output_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int r1, int r2, int c1, int c2){
	printf("\nMa tran thu nhat la: ");
	for(int i=0;i<r1;i++){
		printf("\n");
		for(int j=0;j<c1;j++){
			printf("%d\t", arr1[i][j]);
		}
	}
	printf("\nMa tran thu hai la: ");
	for(int i=0;i<r2;i++){
		printf("\n");
		for(int j=0;j<c2;j++){
			printf("%d\t", brr1[i][j]);
		}
	}	
}

void Multiplication_Matrix(int arr1[][MaxColumn], int brr1[][MaxColumn], int r1, int c1, int c2){
	int sum = 0;
	int crr1[MaxRow][MaxColumn];
	for(int i=0;i<r1;i++)
		for(int j=0;j<c2;j++)
			crr1[i][j]=0;
				for(int i=0;i<r1;i++){ //Dong cua ma tran thu nhat
					for(int j=0;j<c2;j++){
						for(int k=0; k<c1;k++){
							sum +=arr1[i][k]*brr1[k][i];
							crr1[i][j]=sum;
						}
					}
				}
	printf("\nPhep nhan cua hai ma tran la: ");
	for(int i=0;i<r1;i++){
		printf("\n");
		for(int j=0;j<c2;j++){
			printf("%d\t", crr1[i][j]);
		}
	}
	printf("\n\n");
}

int main(){
	int arr1[MaxRow][MaxColumn], brr1[MaxRow][MaxColumn];
	int r1, r2, c1, c2;
	Input_Matrix(arr1, brr1, r1, r2, c1, c2);
	Output_Matrix(arr1, brr1, r1, r2, c1, c2);
	Multiplication_Matrix(arr1, brr1, r1, c1, c2);
}

