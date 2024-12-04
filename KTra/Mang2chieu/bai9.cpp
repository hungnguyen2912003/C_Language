#include <stdio.h>
#define Maxd 50
#define Maxc 50

void NhapMang(int a[][Maxc], int &m, int &n){
    do{
        printf("Nhap so dong, so cot cua mt: ");
        scanf("%d %d", &m, &n);
    }while(!((m>=2 && m<=10) && (n>=1 && n<=10)));
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

bool SoHoanHao(int n){
    int tong = 0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            tong+=i;
    if(tong==n)
        return true;
    return false;
}

int ktrasohoanhao(int a[][Maxc], int m, int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)   
            if(SoHoanHao(a[i][j])==true)
                return 1;
    return 0;
}

