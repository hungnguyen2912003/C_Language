#include<stdio.h>
#include<string.h>

void xoakhoangtrang(char *s){
	for(int i=0;s[i]!='\0';i++){
		while(s[i]==' ')
			strcpy(&s[i], &s[i+1]);
	}
}

void xoapttrung(char *s){
	char scp[50];
	int count;
	strcpy(scp,s);
	for(int i=0; i<strlen(s)-2;i++)
		for(int j=i+1; j<strlen(s)-1;j++)
			if(scp[i]==scp[j])
				scp[j]=' ';
	xoakhoangtrang(scp);
	for(int i=0; scp[i]!='\0';i++){
		if(scp[i]>='A' && scp[i]<='Z'){
			printf("%c ", scp[i]);
			count=0;
		for(int j=0; scp[j]!='\0'; j++)
			if(scp[i]==scp[j])
				count++;
		printf("%d ", count);
		}
	}
	for(int i=0; scp[i]!='\0';i++){
		if(scp[i]>='a' && scp[i]<='z'){
			printf("%c ", scp[i]);
			count=0;
		for(int j=0; scp[j]!='\0'; j++)
			if(scp[i]==scp[j])
				count++;
		printf("%d ", count);
		}
	}
	for(int i=0; scp[i]!='\0';i++){
		if(scp[i]>='0' && scp[i]<='9'){
			printf("%c ", scp[i]);
			count=0;
		for(int j=0; scp[j]!='\0'; j++)
			if(scp[i]==scp[j])
				count++;
		printf("%d ", count);
		}
	}
	for(int i=0; scp[i]!='\0';i++){
		if(!(scp[i]>='0' && scp[i]<='9' || scp[i]>='A' && scp[i]<='Z' || scp[i]>='a' && scp[i]<='z')){
			printf("%c ", scp[i]);
			count=0;
		for(int j=0; scp[j]!='\0'; j++)
			if(scp[i]==scp[j])
				count++;
		printf("%d ", count);
		}
	}		
}

int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    xoapttrung(s);
}