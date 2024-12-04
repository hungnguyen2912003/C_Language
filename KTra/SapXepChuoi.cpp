#include <stdio.h>
#include <String.h>

int main(){
	char s[50];
	printf("Nhap chuoi:");
	gets(s);
	int i, j;
	char temp;
	int length = strlen(s);
	for(i=0;i<length-1;i++){
		for(j=i+1;j<length;j++){
			if(s[i]>s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("Chuoi sau khi sap xep tang dan la: %s", s);
	for(i=0;i<length-1;i++){
		for(j=i+1;j<length;j++){
			if(s[i]<s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("\nChuoi sau khi sap xep giam dan la: %s", s);
	return 1;
}
