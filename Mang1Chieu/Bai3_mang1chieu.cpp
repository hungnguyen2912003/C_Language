#include <stdio.h>
#define Max 50

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	}while(!(n>=1 && n<=Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n){
	printf("Noi dung mang: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

int ptnhonhat(int a[], int n){
	int min = a[0];
	for(int i=0;i<n;i++){
		if(min>a[i])
			min = a[i];
	}
	return min;
}

int ptlonnhat(int a[], int n){
	int max = a[0];
	for(int i=0;i<n;i++){
		if(max<a[i])
			max = a[i];
	}
	return max;	
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nPhan tu nho nhat cua mang: %d", ptnhonhat(a,n));
	printf("\nPhan tu lon nhat cua mang: %d", ptlonnhat(a,n));
	return 1;
}
