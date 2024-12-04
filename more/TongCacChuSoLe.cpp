#include<stdio.h>

int TongCacChuSoLe(int n){
	int temp;
	int tong = 0;
	printf("Cac chu so le la: ");
	while(n>0){
		temp = n%10;
		if(temp%2==1){
			tong += temp;
			printf("%d	", temp);
		}
		n=n/10;
	}
	return tong;
//	printf("\nTong cac chu so le la: %d", tong);
}

int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("\nTong cac chu so le la: %d", TongCacChuSoLe(n));
	return 1;
}
