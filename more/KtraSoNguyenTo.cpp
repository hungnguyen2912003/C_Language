#include<stdio.h>
#include<math.h>

int KtraSNT(int n){
	int dem = 0;
	if(n<2)
		return 0;
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0)
		dem++;
	}
	if(dem==0)
		printf("%d la so nguyen to", n);
	else
		printf("%d khong phai la so nguyen to", n);
	return n;
}
int main(){
	int n;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	KtraSNT(n);
	return 1;
}
