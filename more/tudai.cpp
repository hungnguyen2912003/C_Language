#include<stdio.h>
#include<string.h>

int longest_word(char *s){
    int lw=0, i=0;
    while(i<strlen(s)-1){
        int letters=0;
        while(s[i]!=' ' and i<strlen(s)-1){
            letters++;
            i++;
        }
        if(letters>lw)
            lw=letters;
        i++;
    }
    return lw;
}

void in_longest_word(char *s){
    int lw=longest_word(s);
    char *token=strtok(s," \n");
    while(token!=NULL){
        if(strlen(token)==lw)
            printf("%s %d ",token,lw);
        token=strtok(NULL," \n");
    }
}

int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    in_longest_word(s);
    return 1;
}