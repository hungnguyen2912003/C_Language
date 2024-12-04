#include <stdio.h>
#include <string.h>

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


//void Kt2(char *s){
//	int length = strlen(s) - 1;
//	while(s[0] == ' ')
//		strcpy(&s[0], &s[1]);	//Xoa Dau Chuoi
//	while(s[strlen(s)-2] == ' ')
//		s[strlen(s)-1] = '\0';	//Xoa Cuoi Chuoi
//	for(int i=0;i<length;i++){		//Xoa Ben Trong Chuoi
//		if(s[i] == ' ' && s[i+1] == ' '){
//			strcpy(&s[i], &s[i+1]);
//			i--;
//		}
//	}
//}

void ChuanHoa_KyTu(char s[]){
	int length = strlen(s);
	for(int i=0;i<length;i++){
		if(i==0 || (i>0 && s[i-1] == ' ')){
			if(s[i] >= 'a' && s[i] <= 'z')
				s[i] -=32;
		}
		else{
			if(s[i] >= 'A' && s[i] <= 'Z')
				s[i] +=32;		
		}
	}
}


int main(){
	char s[100];
	printf("Nhap ho ten: ");
	fgets(s, 50, stdin);
	Delete_Space(s);
//	Kt2(s);
	ChuanHoa_KyTu(s);
	puts(s);
	return 1;
}
