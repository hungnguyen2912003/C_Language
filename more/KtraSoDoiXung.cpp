#include<stdio.h>

/*
	Input : 1221
	Output: la so doi xung
*/

int SoDao(int n){
	int tong = 0;
	while(n>0){
		int temp;
		temp = n%10; //Temp = Chu so cuoi cua n
		tong = tong*10 + temp; //Tong = Tong*10 + Chu so cuoi n
		n = n/10; // n chia 10 lay phan nguyen bo bot con so cuoi6
	}
	return tong;
}

bool KtraSoDoiXung(int n){
	if(SoDao(n)==n)
		return true;
	else
		return false;
}

int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(KtraSoDoiXung(n)==true)
		printf("%d la so doi xung", n);
	else
		printf("%d khong phai la so doi xung", n);
	return 1;	
}
