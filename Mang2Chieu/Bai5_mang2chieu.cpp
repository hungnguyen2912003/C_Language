#include <stdio.h>
#define Max 5

void NhapMang(int a[][Max], int &n){
	do{
		printf("Nhap cap ma tran: ");
		scanf("%d", &n);
	}while(!(n>=2 && n<=Max));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void XuatMang(int a[][Max], int n){
	printf("Mang gom co: ");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
}

void TongPT_DuongCheoChinh(int a[][Max], int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum += a[i][j];
			}
		}
	}
	printf("\nTong cac phan tu nam tren duong cheo chinh la: %d", sum);
}

void InPT_DuongCheoChinh(int a[][Max], int n){
	printf("\nCac phan tu nam tren duong cheo chinh: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				printf("%d ", a[i][j]);
			}
		}
	}
}


void Dem_SoChan(int a[][Max], int n){
	int dem = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==0){
				dem++;
			}
		}
	}
	if(dem==0)
		printf("\nKhong co phan tu chan trong ma tran");
	else
		printf("\nCac phan tu chan trong ma tran la: %d", dem);
}

void PT_DongChan_CotLe(int a[][Max], int n){
	printf("\nCac phan tu thuoc dong chan va cot le: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==0 && j%2!=0)
				printf("%d ", a[i][j]);
		}
	}
}

int main(){
	int a[Max][Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	InPT_DuongCheoChinh(a,n);
	TongPT_DuongCheoChinh(a,n);
	Dem_SoChan(a,n);
	PT_DongChan_CotLe(a,n);
	return 1;
}
