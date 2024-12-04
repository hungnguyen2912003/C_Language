#include <stdio.h>
#define Max 50

void NhapMang(int a[][Max], int &n){
	printf("Nhap vao cap ma tran: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void XuatMang(int a[][Max], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main(){
	int a[Max][Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
}
