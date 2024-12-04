#include<stdio.h>
#include<string.h>

void Frequency(char s[]){
    int n= strlen(s);
    int count;
    int count2;
    for (int i=0;i<n;i++){
        count2=0;
        for (int j=0;j<i;j++){
            if(s[j]==s[i]){
                count2=1;
                break;
            }
        }
        if(count2==0){  
            count=0;  
            for(int k=i;k<n;k++){
                if(s[i]==s[k])
                    count++;

            }
            if(s[i]!=' ')
            printf("%c %d\n",s[i],count);
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
			Delete(s,i);
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
    Frequency(s);
}
