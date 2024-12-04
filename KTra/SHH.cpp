#include <stdio.h>

bool Check_SHH(int n){
	int tong = 0;
	for(int i=1;i<=n/2;i++){
		tong += i;
	}
	if(tong==n)	return true;
	return false;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(Check_SHH(n)==true)
		printf("%d la so hoan hao", n);
	else
		printf("%d khong phai la so hoan hao ", n);
}
