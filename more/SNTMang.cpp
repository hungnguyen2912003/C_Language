#include <stdio.h>
#include <math.h>
#define Max 100

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(!(n>0 && n<Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n){
	printf("Noi dung cac phan tu trong mang: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

bool KtraSNT(int n){
	if(n<2)
		return false;
	else{
		for(int i=2;i<sqrt(n);i++)
			if(n%i==0)
				return false;
		return true;
	}
}


int InSNT(int a[], int n){
	printf("\nCac so nguyen to trong mang la: ");
	for(int i=0;i<n;i++)
		if(KtraSNT(a[i])==true)
			printf("%d ", a[i]);
		else
			return 0;
	return 1;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	InSNT(a,n);
	return 1;
}
