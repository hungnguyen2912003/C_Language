#include <stdio.h>
#include <math.h>

bool CheckSCP(int n){
	int m = sqrt(n);
	if(m*m==n)
		return true;
	else
		return false;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(CheckSCP(n)==true)
		printf("%d la so chinh phuong", n);
	else
		printf("%d khong phai la so chinh phuong ", n);
}
