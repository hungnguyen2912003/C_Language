#include <stdio.h>

/*
	Write a program in C to print all unique elements in an array
	Viet chuong trình trong C de in tat ca các phan tu duy nhat trong mot mang
*/

void Input_Elements(int arr1[], int &n){
	printf("\n\nIn tat ca cac phan tu duy nhat cua mot mang\n");
	printf("-----------------------------------------------\n");
	printf("Nhap so phan tu se duoc luu tru trong mang: ");
	scanf("%d",&n);
	printf("Nhap %d phan tu trong mang: \n",n);
	for(int i=0;i<n;i++){
		printf("Phan tu - %d: ",i);
		scanf("%d", &arr1[i]);
	}
}

void All_Unique_Element(int arr1[], int n){
    printf("\nCac phan tu duy nhat duoc tim thay trong mang la: \n");
    for(int i=0; i<n; i++){
        int ctr=0;
        for(int j=0,k=n; j<k+1; j++){
            /*Dem tang khi tim thay gia tri trung nhau.*/
            if (i!=j){
		       if(arr1[i]==arr1[j]){
                 ctr++;
               }
             }
        }
       if(ctr==0){
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}

int main(){
	int arr1[100], n;
	Input_Elements(arr1,n);
	All_Unique_Element(arr1,n);
}

