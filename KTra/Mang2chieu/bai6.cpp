#include <stdio.h>
#define Maxc 50
#define Maxd 50

void NhapMang(int a[][Maxc], int &m, int &n){
    do{
        printf("Nhap so dong, so cot cua ma tran: ");
        scanf("%d %d", &m, &n);
    }while(!((m>=2 && m<=5) && (n>=2 && n<=10)));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMang(int a[][Maxc], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int tongsoduong(int a[][Maxc], int m, int n){
    int tong = 0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) 
            if(a[i][j]>0)
                tong+=a[i][j];
    return tong;
}

int tonggiatri1dong(int a[][Maxc], int n, int k){
    int tong=0;
    for(int i=0; i<n;i++)
        tong+=a[k][i];
    return tong;
}

bool ktrasoduong(int a[][Maxc], int m, int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]>0)
                return true;
    return false;
}

bool mttoanduong(int a[][Maxc], int m, int n){
    int count = 0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]>0)
                count++;
    if(count==m*n)
        return true;
    else
        return false; 
}

int main(){
    int a[Maxd][Maxc], n, m, k;
    NhapMang(a,m,n);
    XuatMang(a,m,n);
    printf("Tong cac so duong trong mt: %d", tongsoduong(a,m,n));
    printf("\nNhap hang thu k can tinh: ");
    scanf("%d", &k);
    printf("Tong cac gia tri tren mot dong trong ma tran: %d", tonggiatri1dong(a,n,k));
    if(ktrasoduong(a,m,n)==true)
        printf("\nMa tran ton tai so duong");
    else
        printf("\nMa tran khong ton tai so duong");
    if(mttoanduong(a,m,n)==true)
        printf("\nMa tran toan so duong");
    else
        printf("\nMa tran khong toan so duong");
}