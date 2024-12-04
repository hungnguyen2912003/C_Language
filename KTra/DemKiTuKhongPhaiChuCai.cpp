#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	int dem = 0;
    int i=0;
	printf("Nhap chuoi:");
	gets(s);
    while(s[i]!='\0'){
    	if (!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z'))
        	dem++;
            i++;
    }
	printf("Cac ki tu khong phai la chu cai trong chuoi vua nhap la: %d", dem);
	return 1;
}
