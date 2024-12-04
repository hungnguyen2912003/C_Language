#include<stdio.h>
#include<string.h>

void xoa_khoang_trang_thua(char *s){
    int n=strlen(s)-1;
    int i=0;
    //xoa khoang trang dau
    while(s[0]==' ')
        strcpy(&s[0],&s[1]);
    //xoa khoang trang cuoi
    if(s[n-1]==' ')
        s[n-1]='\0';
    //xoa khoang trang giua
    while(s[i]!='\0'){
        if(s[i]==' ' and (s[i+1]==' ' or s[i+1]=='\0')){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
        i++;
    }
}

void xoa_ki_tu_dac_biet(char *s){
    int i=0;
    while(s[i]!='\0'){
        if((s[i]<65 or s[i]>90) and (s[i]<97 or s[i]>122) and s[i]!=' '){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
        i++;
    }
}

void in_hoa_ki_tu_dau_tu(char *s){
    int n=strlen(s)-1;
    strlwr(s);
    if(s[0]>=97 and s[0]<=122)
        s[0]-=32;
    for(int i=1; i<n; i++)
        if(s[i]>=97 and s[i]<122 and s[i-1]==' ')
            s[i]-=32;
}

int main(){
    char s[100];
    fgets(s, 99, stdin);
    xoa_khoang_trang_thua(s);
    puts(s);
    return 1;
}