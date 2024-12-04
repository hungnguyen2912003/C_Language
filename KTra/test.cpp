#include <stdio.h>
#include <string.h>

void xoakttthua(char *s){
    int i = 0;
    int n = strlen(s)-1;
    while(s[0]==' '){
        strcpy(&s[0],&s[i+1]);
    }
    if(s[n-1]==' ')
        s[n-1]=='\0';
    while(s[i]!='\0'){
        if(s[i]==' ' and (s[i+1]==' ' or s[i+1]=='\0')){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
        i++;
    }
}

int tudainhat(char *s){
    int tudai=0, i=0;
    while(i<strlen(s)-1){
        int tu=0;
        while(s[i]!=' ' and i<strlen(s)-1){
            tu++;
            i++;
        }
        if(tu>tudai)
            tudai=tu;
        i++;
    }
    return tudai;
}

void intudai(char *s){
    int tudai=tudainhat(s);
    char *word=strtok(s," \n");
    while(word!=NULL){
        if(strlen(word)==tudai)
            printf("%s %d ",word,tudai);
        word=strtok(NULL," \n");
    }
}

int main(){
    char s[50];
    printf("s=");
    fgets(s,49,stdin);
    xoakttthua(s);
    puts(s);
    intudai(s);
}