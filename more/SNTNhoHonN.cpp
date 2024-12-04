#include <stdio.h>
#include <math.h>

bool KtraSNT(int n){
	if(n<2)
		return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return false;
		return true;
	}
}

int InSNT(int n){
	for(int i=0;i<=n;i++){
		if(KtraSNT(i)==true)
			printf("%d ", i);
	}
	return 1;
}

int TongSNT(int n){
	int tong=0;
	for(int i=2;i<=n;i++)
		if(KtraSNT(i)==true)
			tong +=i;
	return tong;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
	}while(!(n>0 && n<50));
	printf("Cac so nguyen to nho hon n la: ");
	InSNT(n);
	int tong = TongSNT(n);
	printf("\nTong cac so nguyen to nho hon n la: %d", tong);
	return 1;
}
