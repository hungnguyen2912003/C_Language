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
void TongSNT(int n){
	int temp;
	int tong = 0;
	printf("Cac chu so nguyen to la: ");
	while(n>0){
		temp = n%10;
		if(KtraSNT(temp)==true){
			tong += temp;
			printf("%d	", temp);
		}
		n = n/10;
	}
	printf("\nTong cac chu so chinh phuong la: %d", tong);
}
int main(){
	int n;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	TongSNT(n);
	return 1;
}
