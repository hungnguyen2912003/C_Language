#include<stdio.h>
#include<math.h>

bool KtraSNT(int n){
	if(n<2)
		return false;
	else{
		for(int i = 2; i<=sqrt(n); i++)
			if(n%i==0)
				return false;
		return true;
	}
}
int main(){
	int n;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	if(KtraSNT(n)==true)
		printf("%d la so nguyen to", n);
	else
		printf("%d khong phai la so nguyen to", n);
	return 1;
}
