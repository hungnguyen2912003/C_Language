#include <stdio.h>
#define Max 100

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	}while(!(n>0 && n<Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n){
	printf("Noi dung cac phan tu mang: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int Count_SoChan(int a[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			count++;
	}
	return count;
}

int TongPTChan(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			tong+=a[i];
	}
	return tong;
}

int Count_SoLe(int a[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
			count++;
	}
	return count;
}

int TongPTLe(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
			tong+=a[i];
	}
	return tong;
}

float TBC(int a[], int n){
	int s = 0;
	for(int i=0;i<n;i++){
		s+=a[i];
	}	
	float tbc = (float)s/n;
	return tbc;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSo luong cac phan tu chan trong mang la: %d", Count_SoChan(a,n));
	printf("\nTong cac phan tu chan trong mang la: %d", TongPTChan(a,n));
	printf("\nSo luong cac phan tu le trong mang la: %d", Count_SoLe(a,n));
	printf("\nTong cac phan tu le trong mang la: %d", TongPTLe(a,n));
	printf("\nTrung binh cong cac phan tu trong mang la: %.2f", TBC(a,n));
	return 1;
}
