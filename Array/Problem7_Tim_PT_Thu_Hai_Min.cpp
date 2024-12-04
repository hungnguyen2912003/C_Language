#include <stdio.h>

/*
	Write a program in C to find the second smallest element in an array
	Viet chuong trình trong C de tim phan tu nho nhat thu hai trong mot mang.
*/

void Input_Elements(int arr1[], int &n){
	printf("\n\nTim phan tu nho nhat thu hai trong mot mang\n");
	printf("------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}
/* tìm vi trí cua phan tu nho nhat trong mang */

void Find_Second_Min_Element(int arr1[], int n){
	int sml = arr1[0];
	int sml2nd;
	int j = 0;
	for(int i=0;i<n;i++){
		if(sml>arr1[i]){
			sml = arr1[i];
			j = i;	
		}
	}
/* bo qua phan tu nho nhat và tìm phan tu nho nhat thu 2 trong mang */
	sml2nd = 99;
	for(int i=0;i<n;i++){
		if(i==j){
			i++; /*Bo qua phan tu nho nhat*/
			i--;
		}
		else{
			if(sml2nd>arr1[i]){
				sml2nd=arr1[i];
			}
		}
	}
	printf("Phan tu thu hai lon nhat trong mang la: %d \n\n", sml2nd);
}

int main(){
	int arr1[50], n;
	Input_Elements(arr1,n);
	Find_Second_Min_Element(arr1,n);
}
