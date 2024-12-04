#include <stdio.h>
#include <String.h>

void tansoxuathien (char s[]){
    int n= strlen(s);
    int dem;
    int dadem;
    for (int i=0;i<n;i++){
        dadem =0;
        for (int j=0;j<i;j++){
            if(s[j]==s[i] && s[i] != ' ' && s[j] != ' '){
                dadem=1;
                break;
            }
        }
        if(dadem==0){  
            dem =0;  
            for(int k=i;k<n;k++){
                if(s[i]==s[k] && s[i] != ' ' && s[k] != ' ')
                    dem++;

            }
            printf("%c %d\n",s[i],dem);
        }
    }
}

void Delete(char s[], int vt){
	int length = strlen(s);
	for(int i=vt;i<=length;i++){
		s[i] = s[i+1];
	}
	length--;
}

void Delete_Space(char s[]){
	int length = strlen(s);
	//Giua chuoi
	for(int i=0;i<length;i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			for(int j = i + 1; j<length;j++){
				s[j] = s[j+1];
			}
			i--;
			length--;
		}
		else if(s[i] == ' ' && s[i+1] == ' '){
			for(int j=i;j<length;j++){
				s[j] = s[j]+1;
			}
			i--;
			length--;
		}
	}
	//Dau Chuoi
	if(s[0] == ' '){
		Delete(s,0);
		length--;
	}
	//Cuoi chuoi
	if(s[length-1] == ' '){
		Delete(s, length-1);
		length--;
	}
}


int main (){
    char s[50];
    printf("s=");
    gets(s);
    Delete_Space(s);
    tansoxuathien(s);
}
