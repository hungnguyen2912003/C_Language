#include <stdio.h>
#include <string.h>

int Length_S(char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

void KyTu_OneRow(char s[]){
	int length = Length_S(s);
	for(int i=0;i<length;i++)
		printf("\n%c", s[i]);
}

int Count_KyTu(char s[]){
	int count = 0;
	int length = Length_S(s);
	for(int i=0;i<length;i++){
		count++;
	}
	return count;
}

//Nguyen Am (vowels): a, e, i, o, u
int Count_Vowel(char s[]){
	int count = 0;
	int length = Length_S(s);
	for(int i = 0; i<length;i++){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
			count++;		
	}
	return count;
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi khi moi ky tu tren mot dong: ");
	KyTu_OneRow(s);
	printf("\nSo ky tu trong chuoi: %d", Count_KyTu(s));
	printf("\nSo ky tu khong phai la nguyen am trong chuoi: %d", Count_Vowel(s));
}

