#include <stdio.h>
#include <string.h>

bool KhoangTrang(char s){
	return s == ' ' || s == '\t' || s == '\n';
}

void Print_KT(char *s, int pos, int length){
	int i;
	for(i = pos; i < pos + length; i++){
		printf("%c", s[i]);
	}
	printf(" %d", length);
	for(i = pos; i < pos + length; i++){
		printf("%c", s[i]);
	}	
}


int Find_Position(char *s, int *length){
	int len = 0;			
	int lenMax = 0;			
	int posMax = 0;			
	int posCurrent = 0;		
	int size = strlen(s);
	int i;
	for(i=0;i<size;i++){
		if(!KhoangTrang(s[i])){
			posCurrent = i-len;
			len++;
		}
		else{
			if(len>lenMax){
				lenMax = len;
				posMax = posCurrent;
			}
			len = 0;
		}
	}
	*length = lenMax;
	return posMax;
}

int main(){
	char s[100];
	fgets(s, 50, stdin);
	int len = 0;
	int pos = Find_Position(s, &len);
	Print_KT(s,pos,len);
}
