#include <stdio.h>

/*
	Write a program in C to count the frequency of each element of an array.
	Viet chuong trình trong C de dem tan suat xuat hien cua tung phan tu cua mang
*/

void Input_Elements(int arr1[], int fr1[], int &n){
	printf("\n\nDem tan suat xuat hien cua tung phan tu cua mang\n");
	printf("----------------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d", &n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
		fr1[i]=-1;
	}
}

void Count(int arr1[], int fr1[], int n){
	int ctr;
	for(int i=0;i<n;i++){
		ctr = 1;
		for(int j=i+1;j<n;j++){
			if(arr1[i]==arr1[j]){
				ctr++;
				fr1[j] = 0;
			}
		}
		if(fr1[i]!=0){
			fr1[i] = ctr;
		}
	}
}

void Print_Element(int arr1[], int fr1[], int n){
	printf("Tan suat cua tat ca cac phan tu trong mang la: \n");
	for(int i=0;i<n;i++){
		if(fr1[i]!=0){
			printf("%d xay ra %d lan\n", arr1[i], fr1[i]);
		}
	}
}

int main(){
	int arr1[100], fr1[100];
	int n;
	Input_Elements(arr1,fr1,n);
	Count(arr1,fr1,n);
	Print_Element(arr1,fr1,n);
}
