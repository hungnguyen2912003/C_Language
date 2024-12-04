#include <stdio.h>
#include <string.h>

int KtraChuoi(char *s1, char *s2){
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	for(int i=0;i<length1;i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] += 32;
	}
	for(int i=0;i<length2;i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] += 32;
	}	
	if(length1<length2){
		return -1;
	}
	else
		return 1;
	if(length1==length2)
		return 0;
}


int main(){
	char s1[50], s2[50];
	printf("Nhap chuoi 1: ");
	fgets(s1,49,stdin);
	printf("Nhap chuoi 2: ");
	fgets(s2,49,stdin);
	if(KtraChuoi(s1,s2)==-1)
		printf("Chuoi 1 be hon chuoi 2");
	if(KtraChuoi(s1,s2)==1)
		printf("Chuoi 1 lon hon chuoi 2");
	if(KtraChuoi(s1,s2)==0)
		printf("Chuoi 1 bang chuoi 2");		
}
