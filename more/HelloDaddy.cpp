#include<stdio.h>
#include<math.h>

//int Sodao(int n){
//	int temp, sdn = 0;
//	while(n>0){
//		temp = n%10;
//		sdn = sdn*10 + temp;
//		n = n/10;
//	}
//	return sdn;
//}

int SoChinhPhuong(int n){
	int m = (int)sqrt(n);
	if(n<0)
		return 0;
	else
		if(n==m*m)
			return 1;
		else
			return 0;
}

//int KtraSNT(int n){
//	if(n<2)
//		return 0;
//	else{
//		for(int i=2;i<=sqrt(n);i++){
//			if(n%i==0)
//				return 0;
//		}
//		return 1;
//	}
//}

//int TongSoLe(int n){
//	int temp, tong = 0;
//	printf("Cac chu so le cua n la: ");
//	while(n>0){
//		temp = n%10;
//		if(temp%2==1){
//			tong += temp;
//			printf("%d ", temp);
//		}
//		n = n/10;	
//	}
//	return tong;
//}

//int TongSNT(int n){
//	int temp, tong = 0;
//	printf("Cac chu so nguyen to cua n: ");
//	while(n>0){
//		temp = n%10;
//		if(KtraSNT(temp)==1){
//			tong += temp;
//			printf("%d ", temp);
//		}
//		n = n/10;
//	}
//	return tong;
//}

int TongSCP(int n){
	int temp, tong = 0;
	printf("Cac chu so chinh phuong cua n la: ");
	while(n>0){
		temp = n%10;
		if(SoChinhPhuong(n)==1){
			tong += temp;
			printf("%d ", temp);
		}
		n = n/10;
	}
	return tong;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
//	printf("So dao cua %d la: %d", n, Sodao(n));
//	if(SoChinhPhuong(n)==1)
//		printf("%d la so chinh phuong", n);
//	else
//		printf("%d khong phai la so chinh phuong", n);
//	if(KtraSNT(n)==1)
//		printf("%d la so nguyen to", n);
//	else
//		printf("%d khong phai la so nguyen to", n);
//	printf("\nTong cac chu so le cua n la: %d", TongSoLe(n));
//	printf("\nTong cac chu so nguyen to cua n la: %d",TongSNT(n));
	printf("\nTong cac chu so chinh phuong cua n la: %d",TongSCP(n));
	return 1;
}
