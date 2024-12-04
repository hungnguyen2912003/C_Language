#include <stdio.h>
#include <string.h>

void xuatChuoi(char s[]){
	printf("%s", s);
}

void TrichXuat(char s[]){
	char kiTuDau[100], kiTuCuoi[100];
	int h=0, j=0;
	int length = strlen(s);
	//Trich xuat ki tu dau!
	{
		for(int i=0; i<length; i++)
			kiTuDau[h++]=s[i];
		kiTuDau[h]=char(00);
	}
	//Trich xuat ki tu cuoi!
	{
		for(int i=0; i<length; i++)
			kiTuCuoi[j++]=s[i]; 
		kiTuCuoi[j]=char(00);
	}
	printf("+>Cac ki tu dau:");
	xuatChuoi(kiTuDau);
	printf("\n+>Cac ki tu cuoi:");	
	xuatChuoi(kiTuCuoi);
}

int main(){
	char s[50];
	gets(s);
	TrichXuat(s);
}
