#include <stdio.h>
#include <math.h>
int DaoSo(int n){
	int sdn=0, temp;
	while(n>0){
		temp = n%10;
		sdn = sdn*10 + temp;
		n=n/10;
	}
	return sdn;
}

bool KtraSDX(int n){
	if(DaoSo(n)==n)
		return true;
	else
		return false;
}

bool KtraSCP(int n){
	int m = (int)sqrt(n);
	if(m*m==n)
		return true;
	else
		return false;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(KtraSDX(n)==true)
		printf("%d la so doi xung", n);
	else
		printf("%d khong phai la so doi xung", n);
	if(KtraSCP(n)==true)
		printf("\n%d la so chinh phuong", n);
	else
		printf("\n%d khong phai la so chinh phuong", n);
	return 1;
}
