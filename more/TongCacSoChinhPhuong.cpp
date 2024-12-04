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
void TongSCP(int n){
	int temp, tong =0;
	while(n>0){
		temp = n%10;
		if(KtraSCP(temp)==1){
			tong += temp;
			printf("%d	", temp);
		}
		n = n/10;
	}
	printf("\nTong cac chu so chinh phuong la: %d", tong);
}
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	TongSCP(n);
	return 1;
}
