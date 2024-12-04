#include<stdio.h>

/*
	Input: So nguyen duong n
	Output: So dao cua n
		Ex: n = 1234 => So dao cua n la 4321
*/

int SoDao(int n){
	int tong = 0;
	while(n>0){
		int temp;
		temp = n%10; //Temp = Chu so cuoi cua n
		tong = tong*10 + temp; //Tong = Tong*10 + Chu so cuoi n
		n = n/10; // n chia 10 lay phan nguyen bo bot con so cuoi6
	}
/*
	VD: n = 1234
- Vong lap 1: 
	1234 % 10 = 4----->Luu vao Temp1
	Tong1 = Tong*10 + Temp1 = 0*10 + 4 = 4
	n1 = n/10 = 1234/10=123
- Vong lap 2:
	123 % 10 = 3------>Luu vao Temp2
	Tong2 = Tong1*10 + Temp2 = 4*10 + 3 = 43
	n2 = n1/10 = 123/10=12
- Vong lap 3:
	12 % 10 = 2------->Luu vao Temp3
	Tong3 = Tong2*10 + Temp3 = 43*10 + 2 = 432
	n3 = n2/10 = 1
- Vong lap 4:
	1 % 10 = 1-------->Luu vao Temp4
	Tong4 = Tong3*10 + Temp4 = 432*10 + 1 = 4321
	n4 = n3/10 = 0 => Ngung vong lap
*/ 
	printf("So dao cua n la: %d", tong);
	return tong;
}

int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	SoDao(n);
	return 1;
}
