#include <stdio.h>
#define Maxc 50
#define Maxd 50

void NhapMang(int a[][Maxc], int &m, int &n){
    do{
        printf("Nhap so dong, so cot cua mt: ");
        scanf("%d %d", &m, &n);
    }while(!((m>=2 && m<=5) && (n>=2 && n<=10)));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
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

int tichgiatrile(int a[][Maxc], int m, int n){
    int tich=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]%2==1)
                tich*=a[i][j];
    return tich;
}

int tichsochan1cot(int a[][Maxc], int n, int k){
    int tich = 1;
    for(int i=0; i<n;i++)
        if(a[i][k]%2==0)
            tich*=a[i][k];
    return tich;
}

int sohoanthien(int n){
    int tong =0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            tong+=i;
    if(tong==n)
        return 1;
    return 0;
}

int tongcacsohoanthien(int a[][Maxc], int m, int n){
    int tong =0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(sohoanthien(a[i][j])==1)
                tong+=a[i][j];
    return tong;
}

void trituyetdoi(int a[][Maxc], int m, int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)  
            a[i][j]=-a[i][j];
}

int main(){
    int a[Maxd][Maxc], n, m, k;
    NhapMang(a,m,n);
    XuatMang(a,m,n);
    printf("Tich cac so le trong mt: %d", tichgiatrile(a,m,n));
    printf("\nNhap cot thu k: ");
    scanf("%d", &k);
    printf("\nTich cac so chan tren mot cot trong ma tran: %d", tichsochan1cot(a,m,k));
    printf("\nTong cac so hoan thien: %d\n", tongcacsohoanthien(a,m,n));
    trituyetdoi(a,m,n);
    XuatMang(a,m,n);
}