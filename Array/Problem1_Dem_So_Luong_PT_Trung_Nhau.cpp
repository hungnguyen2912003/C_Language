#include <stdio.h>

/*
	Write a program in C to count a total number of duplicate elements in an array.
	Viet chuong trình trong C de dem tong so phan tu trùng lap trong mot mang.
*/

void Input_Elements(int arr1[], int &n){
	printf("\n\nDem tong so phan tu trung lap trong mot mang\n");
	printf("------------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}

void Copy_Array(int arr1[], int arr2[], int arr3[], int n){
	for(int i=0;i<n;i++){
		arr2[i]=arr1[i];
		arr3[i]=0;
	}
}

void Element_Dulicate(int arr1[], int arr2[], int arr3[], int n){
	int mm=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				arr3[j]=mm;
				mm++;
			}
		}
		mm=1;
	}
}

void Print_Array(int arr3[], int n){
	int ctr = 0;
	for(int i=0;i<n;i++){
		if(arr3[i]==2)
			ctr++;
	}
	printf("Tong so phan tu trung nhau duoc tim thay trong mang la: %d\n", ctr);
	printf("\n\n");
}

int main(){
	int arr1[100];
	int arr2[100];
	int arr3[100];
	int n;
	Input_Elements(arr1,n);
	Copy_Array(arr1,arr2,arr3,n);
	Element_Dulicate(arr1,arr2,arr3,n);
	Print_Array(arr3,n);
}
