#include<stdio.h>
#include<string.h>
void delete_whitespace(char *s){
    for(int i=0; s[i]!='\0';i++){
        while(s[i]==' ') {strcpy(&s[i],&s[i+1]);} // xoa dau chuoi
    }
}
void delete_coincide(char *s){// xoa phan tu trung trong chuoi
    char sp[100];
    int dem;
    strcpy(sp,s);
    int len = strlen(sp);
    for(int i=0; i<len-2; i++)
        for(int j=i+1; j<len-1; j++)
            if(sp[i]==sp[j]){
                sp[j]=' ';// danh dau trung la bang '' 
            }
    delete_whitespace(sp);
    for(int i=0; sp[i]!='\0'; i++){
        if(sp[i]>='A' && sp[i]<='Z'){// in ra hoa
            printf("%c ",sp[i]);
            dem=0;
            for(int j=0; s[j]!='\0'; j++)
                    if(sp[i]==s[j]) dem++;
            printf("%d ",dem);
        }
    }
    for(int i=0; sp[i]!='\0'; i++){
        if(sp[i]>='a' && sp[i]<='z'){// in ra thuong
            printf("%c ",sp[i]);
            dem=0;
            for(int j=0; s[j]!='\0'; j++)
                    if(sp[i]==s[j]) dem++;
            printf("%d ",dem);
        }
    }   
    for(int i=0; sp[i]!='\0'; i++){
        if(sp[i]>='0' && sp[i]<='9'){// in ra so
            printf("%c ",sp[i]);
            dem=0;
            for(int j=0; s[j]!='\0'; j++)
                    if(sp[i]==s[j]) dem++;
            printf("%d ",dem);
        }
    }      
    for(int i=0; sp[i]!='\0'; i++){//kt dac biet
        if(!(sp[i]>='0' && sp[i]<='9' || sp[i]>='a' && sp[i]<='z' || sp[i]>='A' && sp[i]<='Z')){// in ra thuong
            printf("%c ",sp[i]);
            dem=0;
            for(int j=0; s[j]!='\0'; j++)
                    if(sp[i]==s[j]) dem++;
            printf("%d ",dem);
        }
    }          
}
int main(){
    char s[50];
    fgets(s,sizeof(s), stdin); //AAB Ba$1
    delete_coincide(s);
}
