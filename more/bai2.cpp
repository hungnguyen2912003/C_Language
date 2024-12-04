#include <stdio.h>
#include <String.h>

int dem(char *s){
	int leng = strlen(s)-1;
	int count=0;
	for(int i=0;i<leng;i++){
		if(s[i]!= 'u' && s[i]!='e' && s[i]!='o' && s[i]!='a' && s[i]!='i')
			count++;
	}
	return count;
}


void hoanvi(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void sapxepmang(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<=0;i++){
			if(a[i]>a[j])
				hoanvi(a[i],a[j]);
		}
	}
}

void xoaktso(char *s){
	int n = strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]>='0' && s[i]<='9')
			strcpy(&s[i],&s[i+1]);
	}
}

void xoakhoangtrang(char *s){
	int i = 0;
	while(s[i]!=' '){
		if(s[i]==' ' && s[i+1]!=' ')
			strcpy(&s[i],&s[i+1]);
	}
}

void string_reverse(char s[]) {
   int i, j, len;
   char temp;
   j = len = strlen(s)-1;
   i = 0;
   while(i < j){
      temp = s[j];
      s[j] = s[i];
      s[i] = temp;
      i++;
      j--;
   }
}


int main(){
	char s[50];
	char reverse[50] = "";
	char temp[50];
	printf("Nhap chuoi:");
	fgets(s,49,stdin);
	printf("Do dai cua chuoi vua nhap la: %d", strlen(s)-1);
	printf("\nSo luong cac ki tu khong phai la nguyen am xuat hien trong chuoi: %d", dem(s));
	int i, j;
	int n = strlen(s);
	for(i = n-1; i >= 0; --i) {
		for(j = 0; i >= 0 && s[i] != ' '; --i,++j)
			temp[j] = s[i];
		temp[j] = '\0';
    	string_reverse(temp);
    	strcat(reverse, temp);
    	strcat(reverse, " ");
   }
   printf("\n%s",reverse);
}
