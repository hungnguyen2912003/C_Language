#include <stdio.h>
#define Max 100

void NhapMang(int a[], int &n){
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

float TBC(int a[], int n){
	int dem = 0;
	float tong = 0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem++;
			tong +=a[i];
		}
	}
	return (float)tong/dem;
}

int Frequency(int a[], int n){
	int check = 0;
	for(int i=1;i<n;i++){
		if(a[i]==a[0])
			check++;
	}
	return check;
}

void ThayThe(int a[], int n){
	printf("\nMang sau khi thay cac so le trong mang bang 2 lan gia tri cu cua no: ");
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)
			a[i]= a[i]*2;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
}


int KtraXenKe(int a[], int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>0 && a[j]<0)
				return 1;
	return 0;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nTrung binh cong cac so duong trong mang: %.2f", TBC(a,n));
	printf("\nSo lan xuat hien trong mang cua cac phan tu bang voi phan tu thu nhat (a[0]) la: %d", Frequency(a,n));
	ThayThe(a,n);
	if(KtraXenKe(a,n)==1)
		printf("\nTrong mang co xen ke so am va so duong");
	else
		printf("\nTrong mang khong co xen ke so am va so duong");
	return 1;
}
