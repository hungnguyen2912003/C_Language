#include <stdio.h>
#include <string.h>

/*
	1. Viet chuong tr�nh nhap v�o mot chuoi. 
	In ra m�n h�nh theo thu tu tuan suat xuat hien cua c�c k� tu Hoa, thuong, chu so, k� tu dac biet tru c�c k� tu khoang trang. V� du:
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
