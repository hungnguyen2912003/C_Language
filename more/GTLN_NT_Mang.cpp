#include <Stdio.h>
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

int TimMax(int a[], int n){
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max = a[i];
	}
	return max;
}

int TimMin(int a[], int n){
	int min = a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min)
			min = a[i];
	}
	return min;
}

int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nPhan tu lon nhat cua mang la: %d", TimMax(a,n));
	printf("\nPhan tu nho nhat cua mang la: %d", TimMin(a,n));
	return 1;
}
