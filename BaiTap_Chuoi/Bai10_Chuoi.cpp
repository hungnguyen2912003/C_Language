#include <Stdio.h>
#include <string.h>

int Length_S(char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

int DoiXung(char s[]){
	int length = Length_S(s);
	for(int i=0;i<length/2;i++)
		if(s[i] != s[length - 1 - i])
			return 0;
	return 1;
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	if(DoiXung(s)==1)
		printf("Chuoi doi xung");
	else
		printf("Chuoi khong doi xung");
	return 1;
}
