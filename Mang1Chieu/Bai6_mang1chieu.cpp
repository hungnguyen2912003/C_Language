#include <stdio.h>
#define Max 50

void NhapMang(int a[], int &n){
	do{
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	}while(!(n>=1 && n<=Max));
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int &n){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

int DemPTBangX(int a[], int n, int x){
	int count = 0;
	for(int i=0;i<n;i++)
		if(a[i]==x)
			count++;
	return count;	
}

void UocSoX(int a[], int n, int x){
	printf("\nNhung phan tu la uoc so cua x la: ");
	for(int i=0;i<n;i++){
		if(x%a[i]==0)
			printf("%d hay a[%d] ", a[i], i);
	}
}

void ThayTheX_0(int a[], int n, int x){
	printf("\nMang sau khi thay the x=0 khi phan tu khong bang x: ");
	for(int i=0;i<n;i++){
		if(a[i]!=x)
			printf("0 ");
		else
			printf("%d ", a[i]);
	}
}

void PTTangDan(int a[], int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang sau khi sap xep tang dan la: ");
    XuatMang(a,n);
}

void ChenX(int a[], int &n, int vt, int x){
	if(vt>=0 && vt<=n){
		for(int i=n;i>vt;i--)
			a[i] = a[i-1];
		a[vt] = x;
		n++;
	}
}
//Xoa Phan tu co gia tri = x
void xoaPhanTu(int a[], int &n, int vtxoa){
	for(int i=vtxoa;i<n;i++){
		a[i] = a[i+1];
	}	
	n--;
}

void xoatatcacacgiatri(int a[], int &n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			xoaPhanTu(a,n,i);
			i--;
		}
	}
}

int main(){
	int a[Max], n, x, vt;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("Cac phan tu co gia tri bang x la: %d", DemPTBangX(a,n,x));
	UocSoX(a,n,x);
	ThayTheX_0(a,n,x);
	PTTangDan(a,n);
	printf("\nNhap vi tri can chen: ");
	scanf("%d", &vt);
	ChenX(a,n,vt,x);
	printf("Mang sau khi chen la: ");
	XuatMang(a,n);
	xoatatcacacgiatri(a,n,x);
	printf("\nMang sau khi xoa phan tu bang x la: ");
	XuatMang(a,n);
	return 1;
}
