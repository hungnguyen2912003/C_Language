#include <Stdio.h>
#define Max 100

void NhapMang(int a[], int &n){
		printf("Nhap so luong mang: ");
		scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n){
	printf("Noi dung cac phan tu mang: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int SoMax(int a[], int n){
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max = a[i];
	}
	return max;
}

void ViTriPTMax(int a[], int n){
    int VTMax = SoMax(a, n);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < n; i++){
        if(a[i] == VTMax){
            printf("%d hay a[%d]", i + 1, i);
        }
    }
}

int SoMin(int a[], int n){
	int min = a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min)
			min = a[i];
	}
	return min;
}

void ViTriPTMin(int a[], int n){
    int VTMin = SoMin(a, n);
    printf("\nVi tri cua phan tu nho nhat: ");
    for(int i = 0; i < n; i++){
        if(a[i] == VTMin){
            printf("%d hay a[%d]", i + 1, i);
        }
    }
}
int main(){
	int a[Max], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nPhan tu lon nhat cua mang la: %d", SoMax(a,n));
	ViTriPTMax(a,n);
	printf("\nPhan tu nho nhat cua mang la: %d", SoMin(a,n));
	ViTriPTMin(a,n);
	return 1;
}
