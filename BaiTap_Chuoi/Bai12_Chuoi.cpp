#include <stdio.h>
#include <string.h>

void xoakhoangtrangthua(char *s){
	int i = 0;
	int length = strlen(s)-1;
	while(s[0]==' '){
		strcpy(&s[0], &s[i+1]);
	}
	if(s[length-1]==' ')
		s[length-1]='\0';
	while(s[i]!='\0'){
		if(s[i]==' ' && (s[i+1]==' ' || s[i+1]=='\0')){
			strcpy(&s[i], &s[i+1]);
			i--;
		}
		i++;
	}
}

int main(){
	char s[50];
	fgets(s,49,stdin);
	xoakhoangtrangthua(s);
	puts(s);
}
