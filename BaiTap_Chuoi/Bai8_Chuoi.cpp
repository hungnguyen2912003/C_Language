#include <Stdio.h>
#include <string.h>

int Length_S(char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

void DaoNguoc(char s[]){
	int length = Length_S(s);
	for(int i=--length;i>=0;i--){
		printf("%c", s[i]);
	}
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	DaoNguoc(s);
	return 1;
}
