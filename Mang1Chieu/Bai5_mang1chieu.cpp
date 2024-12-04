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

int DemPT_BS3(int a[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0 && a[i]%3==0)
			count++;
	}
	return count;
}

int TongPTLe(int a[], int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		if(a[i]>100 && a[i]<1000)
			if(a[i]%2==1)
				tong+=a[i];
	}
	return tong;
}

int TimSoChan(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			return a[i];
			break;
		}
	}
	return -1;
}

void TimVTSoLe(int a[], int n){
	printf("\nCac vi tri ma gia tri co gia tri am la: ");
	for(int i=0;i<n;i++){
		if(a[i]<0)
			printf("%d ", i+1);
	}
}

float TBCSoAmLe(int a[], int n){
	int count = 0;
	float s = 0, tb;
	for(int i=0;i<n;i++)
		if(a[i]<0 && a[i]%2!=0){
			s += a[i];
			count++;
		}	
	tb = (float)s/count;
	return tb;
}

int SoChanLonNhat(int a[], int n){
	int max = a[0];
	for(int i=0;i<n;i++){
		if(a[i]%2==0 && max<a[i])
			max = a[i];
	}
	return max;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSo luong phan tu chan la bo so cua 3 la: %d", DemPT_BS3(a,n));
	printf("\nTong cac phan tu le co 3 chu so la: %d", TongPTLe(a,n));
	if(TimSoChan(a,n)==-1)
		return 0;
	else
		printf("\nPhan tu chan dau tien cua mang: %d", TimSoChan(a,n));
	TimVTSoLe(a,n);
	printf("\nTrung binh cong cac so am le co trong mang: %.2f", TBCSoAmLe(a,n));
	printf("\nSo chan lon nhat trong mang la: %d", SoChanLonNhat(a,n));
	return 1;
}
