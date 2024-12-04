#include<stdio.h>
#include<string.h>

void PrintKTDau(char s[]){
	int length = strlen(s);
    for(int i=0; i<length-1; i++){
        if(s[i]==' ') 
		continue;
        printf("%c",s[i]);
        if(s[i]!=' ' && s[i+1]==' ')
            break;
    }
}

void Reverse(char s[], char a[]){
    int length=strlen(s)-1;
    for(int i=0; i<length; i++)
        a[i]=s[length-i];
}

void PrintKTCuoi(char s[]){
    int vtt;
	int length = strlen(s);
    for(int i=1; i<length-1; i++)
        if(s[i]!=' ' && s[i+1]==' '){
            vtt=i;
            break;
        }
    for(int i=vtt; i>=0; i--){
        printf("%c",s[i]);
        if(s[i]!=' ' && s[i-1]==' ')
            break;
    }
}

int main(){
    char s[50], a[50];
    fgets(s,49,stdin);
	PrintKTDau(s);
    printf(" ");
	Reverse(s,a);
	PrintKTCuoi(a);
}
