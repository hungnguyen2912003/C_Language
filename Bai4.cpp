#include <stdio.h>
#include <string.h>

int Count_KyTu(char *s){
	int count = 0;
	int length = strlen(s)-1;
	if(s[0] != ' ')
		count = 1;
	for(int i=0;i<length;i++){
		if(s[i] == ' ' && s[i+1] !=' ')
			count++;
	}
	return count;
}

void InTu(char s){
	if()
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	printf("Trong chuoi co %d tu", Count_KyTu(s));
	
}
