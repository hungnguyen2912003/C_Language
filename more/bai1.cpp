#include <stdio.h>
#define Max 15

void nhapmang(int a[][Max], int &n){
	do{
	printf("Nhap vao cap ma tran: ");
	scanf("%d", &n);
	}while(!(n>=2 && n<15));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatmang(int a[][Max], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

float tbc(int a[][Max], int n){
	int tong = 0;
	int count = 0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i+j==n-1 && a[i][j]%2!=0){
				tong+=a[i][j];
				count++;
			}
	return (float)(tong/count);			
}

int gtnn(int a[][Max], int n){
	int min = a[0][0];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)	
			if(i>j)
				if(min>a[i][j])
					min = a[i][j];
	return min;		
}

void caud(int b[][Max], int n, int c){
	n = 15;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i==j)
				b[i][j]=0;
			else
				b[i][j]=c;
	xuatmang(b,n);
}

int main(){
	int a[Max][Max], b[Max][Max], n, c;
	nhapmang(a,n);
	xuatmang(a,n);
	printf("Trung binh cong cac pt la so le tren duong cheo phu: %0.1f", tbc(a,n));
	printf("\nPT co gia tri nho nhat trong cac phan tu o nua tam giac phia duoi duong cheo chinh: %d", gtnn(a,n));
	printf("\nNhap so c: ");
	scanf("%d", &c);
	printf("Ma tran moi theo de bai la\n");
	caud(b,n,c);
}
