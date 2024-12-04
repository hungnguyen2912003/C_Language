#include <stdio.h>
#include <string.h>

void xuatChuoi(char s[]){
	printf("%s", s);
}

void TrichXuat(char s[]){
	char kiTuDau[100], kiTuCuoi[100], kiTuPos[100];
	int n;//So luong ki tu muon trich xuat!
	int h=0, j=0, k=0, pos;//Tang size cho chuoi!
	int length = strlen(s);
	printf("----Trich Xuat Ki Tu Dau/Cuoi/Vi Tri----\n");
	//Nhap vao so ki tu muon trich xuat!
	do
	{
		printf("Nhap vao so n ki tu muon trich: ");
		scanf("%d", &n);
	} while(n>length);//So luong ki tu muon trich xuat phai nho hon do dai chuoi a!
	//Trich xuat ki tu dau!
	{
		for(int i=0; i<n; i++)
			kiTuDau[h++]=s[i];
		kiTuDau[h]=char(00);
	}
	//Trich xuat ki tu cuoi!
	{
		for(int i=length-n; i<length; i++)
			kiTuCuoi[j++]=s[i]; 
		kiTuCuoi[j]=char(00);
	}
	printf("+>Cac ki tu dau:");
	xuatChuoi(kiTuDau);
	printf("\n+>Cac ki tu cuoi:");	
	xuatChuoi(kiTuCuoi);
	//Trich xuat ki tu tai vi tri da yeu cau!
	{
		do
		{
			printf("\nChon vi tri muon trich xuat tai vi tri pos trong chuoi: ");
			scanf("%d", &pos);//pos vi tri trich xuat!
			printf("Nhap vao so n ki tu muon trich: ");
			scanf("%d", &n);
		} while (pos<=0 || pos>length);
		for(int i=pos; i<pos+n; i++)
			kiTuPos[k++]=s[i];
		kiTuPos[k]=char(00);
	}
	//Xuat!
	printf("+>Cac ki tu duoc trich xuat tai vi tri pos:");
	xuatChuoi(kiTuPos);
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

int main(){
	char s[100];
	printf("Nhap chuoi:");
	gets(s);
	Delete_Space(s);
	TrichXuat(s);
}
