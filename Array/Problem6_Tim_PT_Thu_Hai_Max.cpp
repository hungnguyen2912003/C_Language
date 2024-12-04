#include <stdio.h>

/*
	Write a program in C to find the second largest element in an array
	Viet chuong trình trong C de tim phan tu lon thu hai trong mot mang.
*/

void Input_Elements(int arr1[], int &n){
	printf("\n\nTim phan tu lon thu hai trong mot mang\n");
	printf("------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}
/* tìm vi trí cua phan tu lon nhat trong mang */

void Find_Second_Max_Element(int arr1[], int n){
	int lrg = arr1[0];
	int lrg2nd;
	int j = 0;
	for(int i=0;i<n;i++){
		if(lrg<arr1[i]){
			lrg = arr1[i];
			j = i;	
		}
	}
/* bo qua phan tu lon nhat và tìm phan tu lon nhat thu 2 trong mang */
	lrg2nd = 0;
	for(int i=0;i<n;i++){
		if(i==j){
			i++; /*Bo qua phan tu lon nhat*/
			i--;
		}
		else{
			if(lrg2nd<arr1[i]){
				lrg2nd=arr1[i];
			}
		}
	}
	printf("Phan tu thu hai lon nhat trong mang la: %d \n\n", lrg2nd);
}

int main(){
	int arr1[50], n;
	Input_Elements(arr1,n);
	Find_Second_Max_Element(arr1,n);
}



