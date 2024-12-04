#include <stdio.h>
#define Max 50

void NhapMang(int a[][Max], int &n){
    do{
    printf("Nhap cap cua ma tran: ");
    scanf("%d", &n);
    }while(!(n>=2 && n<=5));
    for (int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][Max], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int TongDCC(int a[][Max], int n){
    int tong = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                tong+=a[i][j];
    return tong;    
}

int DemPTChan(int a[][Max], int n){
    int count = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]%2==0)
                count++;
    return count;
}

void PTDCCL(int a[][Max], int n){
    printf("\nCac pt thuoc dong chan, cot le: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i%2==0 and j%2!=0)
                printf("%d ", a[i][j]);
}

int main(){
    int a[Max][Max], n;
    NhapMang(a,n);
    XuatMang(a,n);
    printf("Tong pt tren duong cheo chinh: %d", TongDCC(a,n));
    printf("\nCac pt chan trong mt la: %d", DemPTChan(a,n));
    PTDCCL(a,n);
}