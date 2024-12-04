/*
	Cau 2 (5.0 diem). Viet chuong trinh nhap vào mot chuoi và thuc hien cac yeu cau sau:
		a. dem so luong cac ky tu không phai là chu cai xuat hien trong chuoi neu có (1.5d)
		b. in ra cac tu trong chuoi, moi tu nam tren mot dong (biet rang cac tu cach nhau bang khoang trang) (1.5d)
		c. viet hàm tim tu có chieu dài lon nhat trong chuoi, xuat ra màn hinh tu dó và do dài tuong ung (1.0d)
		d. in ra màn hinh theo thu tu tuan suat xuat hien cua cac ki tu Hoa, thuong, chu so, ky tu dac biet tru cac ky tt khoang trang (1.0d)
			Vi du: s=" AAB Ba$1 " ! A 2 B 2 a 1 1 1 $ 1
*/

#include <stdio.h>
#include <string.h>

void xoa(char *s, int vtx){
	int length = strlen(s);
	for(int i=vtx;i<length;i++){
		s[i] = s[i+1];
	}
	length--;
}

void xoakhoangtrang(char *s){
	int length = strlen(s);
	for(int i=0;i<length;i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			xoa(s,i);
			i--;
		}
	}
	if(s[0] == ' ')
		xoa(s,0);
	if(s[length-1] == ' '){
		xoa(s, length-1);
	}
}

int DemKyTu(char *s){
	int count = 0;
	int length = strlen(s)-1;
	for(int i=0;i<length;i++){
		if(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
			count++;
	}
	return count;
}

void InKyTuMotDong(char *s){
	int length = strlen(s)-1;
	for(int i=0;i<length;i++){
		if(s[i] == ' ')
			printf("\n");
		else
			printf("%c ", s[i]);
	}
}

void tansuat(char *s){
    int length= strlen(s);
    int count;
    int count2;
    for (int i=0;i<length;i++){
        count2=0;
        for (int j=0;j<i;j++){
            if(s[j]==s[i]){
                count2=1;
                break;
            }
        }
        if(count2==0){  
            count=0;  
            for(int k=i;k<length;k++){
                if(s[i]==s[k])
                    count++;
            }
            if(s[i]!=' ')
            printf("%c %d ",s[i],count);
        }
    }
}

int main(){
	char s[50];
	printf("s=");
	gets(s);
	xoakhoangtrang(s);
	printf("So luong cac ky tu khong phai la chu cai xuat hien trong chuoi la: %d", DemKyTu(s));
	printf("\nCac ki tu nam tren mot dong la: \n"); 
	InKyTuMotDong(s);
	printf("Thu tu tan suat xuat hien:\n");
	tansuat(s);
}
