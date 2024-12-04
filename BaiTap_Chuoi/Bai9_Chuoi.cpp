#include <Stdio.h>
#include <string.h>

int Length_S(char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count++;
	}
	return count;
}

void ThayThe_Vowel(char s[]){
	int length = Length_S(s);
	for(int i = 0; i<length;i++){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
			s[i] = ' ';
			printf("%c", s[i]);
		}
	}
}

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	ThayThe_Vowel(s);
	puts(s); 
	return 1;
}
