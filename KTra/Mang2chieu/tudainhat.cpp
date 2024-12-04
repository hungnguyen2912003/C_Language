#include<stdio.h>
#include<string.h>

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
    char s[100];
    fgets(s, sizeof(s), stdin);
    intudai(s);
    return 1;
}