#include <stdio.h>

/*
	Write a program in C to separate odd and even integers in separate arrays.
	Viet chuong trình trong C de tach cac so nguyen chan va le trong cac mang rieng biet.
*/

void Input_Elements(int arr1[], int &n){
	printf("\n\nTach cac so nguyen chan va le trong cac mang rieng biet\n");
	printf("-----------------------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}

void Check_Element(int arr1[], int arr2[], int arr3[], int n){
	int j = 0, k = 0;
	for(int i=0;i<n;i++){
		if(arr1[i]%2==0){
			arr2[j] = arr1[i];
			j++;
		}
		else{
			arr3[k] = arr1[i];
			k++;
		}
	}
	printf("\nCac phan tu chan la: \n");
	for(int i=0;i<j;i++){
		printf("%d ", arr2[i]);
	}
	printf("\nCac phan tu le la: \n");
	for(int i=0;i<k;i++){
		printf("%d ", arr3[i]);	
	}
	printf("\n\n");
}

int main(){
	int arr1[10], arr2[10], arr3[10];
	int n;
	Input_Elements(arr1,n);
	Check_Element(arr1, arr2, arr3, n);
}

