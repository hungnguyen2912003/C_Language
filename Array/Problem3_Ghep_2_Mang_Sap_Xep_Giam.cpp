#include <stdio.h>

/*
	Write a program in C to merge two arrays of same size sorted in decending order.
	Viet chuong trình trong C de hop nhat hai mang co cung kich thuoc duoc sap xep theo thu tu giam dan
*/

void Input_Elements1(int arr1[], int &s1){
	printf("\n\nHop nhat hai mang co cung kich thuoc duoc sap xep theo thu tu giam dan\n");
	printf("--------------------------------------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang thu nhat: ");
	scanf("%d",&s1);
	printf("Nhap %d phan tu trong mang: \n",s1);
	for(int i=0;i<s1;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}

void Input_Elements2(int arr2[], int &s2){
	printf("Nhap so phan tu se duoc luu tru trong mang thu hai: ");
	scanf("%d",&s2);
	printf("Nhap %d phan tu trong mang: \n",s2);
	for(int i=0;i<s2;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr2[i]);
	}
}

/*Kich thuoc cua mang da hop nhat la kich thuoc cua mang dau tien va kich thuoc cua mang thu hai*/

/*-------------------------------Chen vao mang thu 3------------------------------------------*/
void Insert_Third_Array(int arr1[], int arr2[], int arr3[], int s1, int s2){
	for(int i=0;i<s1;i++){
		arr3[i]=arr1[i];
		for(int j=0;j<s2;j++){
			arr3[i]=arr2[j];
			i++;
		}
	}
}

/*--------------------------------Sap xep mang theo thu tu giam---------------------------------*/
void Sort_Array(int arr3[], int s3){
	for(int i=0;i<s3;i++){
		for(int k=0;k<s3-1;k++){
			if(arr3[k]<=arr3[k+1]){
				int temp = arr3[k+1];
				arr3[k+1] = arr3[k];
				arr3[k] = temp;
			}
		}
	}
}

/*------------------------------In mang da hop nhat---------------------------------------------*/
void Print_Array(int arr3[], int s3){
	printf("Mang da hop nhat theo thu tu giam dan la: ");
	for(int i=0;i<s3;i++){
		printf("%d ", arr3[i]);
	}
	printf("\n\n");
}

int main(){
	int arr1[100], arr2[100], arr3[100];
	int s1, s2, s3;
	Input_Elements1(arr1,s1);
	Input_Elements2(arr2,s2);
	s3 = s2 + s1;
	Insert_Third_Array(arr1, arr2, arr3, s1, s2);
	Sort_Array(arr3,s3);
	Print_Array(arr3, s3);
}
