#include<stdio.h>
#include<math.h>

int KtraSCP(int n){
	int m = (int)sqrt(n);
	if(n<0)
		return 0;
	else
		if(n==m*m)
			return 1;
		else
			return 0;
}

int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(KtraSCP(n)==1)
		printf("Day la so chinh phuong");
	else
		printf("Day khong phai la so chinh phuong");
	return 1;
}
