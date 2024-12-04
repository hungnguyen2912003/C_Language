#include <stdio.h>
#include <string.h>

/*
	1. Viet chuong trình nhap vào mot chuoi. 
	In ra màn hình theo thu tu tuan suat xuat hien cua các kí tu Hoa, thuong, chu so, kí tu dac biet tru các kí tu khoang trang. Ví du:
	s="  AAB Ba$1   "
	A 2
	B 2
	a 1
	$ 1 
	1 1
*/

void Delete(char *s, int vt){
	int length = strlen(s);
	for(int i=vt;i<length-1;i++){
		s[i] = s[i+1];
	}
	length--;
}

void Delete_Space(char *s){
	int length = strlen(s);
	for(int i=0;i<length;i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			Delete(s,i);
			i--;
			length--;
		}
		if(s[0] == ' '){
			Delete(s,0);
			length--;
		}
		if(s[length-1] == ' '){
			Delete(s, length-1);
			length--;
		}
	}
}



int main(){
	char s[50];
	printf("s = ");
	fgets(s, sizeof(s), stdin);
	Delete_Space(s);
	puts(s);
	return 1;
}
