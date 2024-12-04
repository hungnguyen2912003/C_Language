#include <stdio.h>
#include <string.h>

int Length_S(char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

int Check_KyTu(char s[]){
	int length = Length_S(s);
	int check = 0;
	for(int i=0;i<length;i++){
		if(s[i] == 'a')
			check = 1;
	}
	return check;
}

int Frequency(char s[]){
	int length = Length_S(s);
	int count = 0;
	for(int i=0;i<length;i++){
		if(s[i] == 'a'){
			count++;
		}
	}
	return count;
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	if(Check_KyTu(s)==0)
		printf("\nKhong co ky tu 'a' trong chuoi. ");
	else
		printf("\nCo ky tu 'a' trong chuoi. ");
	if(Frequency(s)==0)
		printf("So lan xuat hien = 0");
	else
		printf("So lan xuat hien = %d", Frequency(s));
	return 1;
}
