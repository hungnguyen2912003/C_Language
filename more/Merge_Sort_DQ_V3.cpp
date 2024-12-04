#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int compar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    // Khai báo và kh?i t?o m?ng a và temp
    int a[] = {5, 2, 8, 1, 6};
    int size = sizeof(a) / sizeof(a[0]);
    
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = a[i];
    }

    // In m?ng tru?c khi s?p x?p
    printf("Mang truoc khi sap xep:\n");
    printArray(a, size);

    // S?p x?p m?ng a
    qsort(a, size, sizeof(int), compar);

    // In m?ng a sau khi s?p x?p
    printf("Mang a sau khi sap xep:\n");
    printArray(a, size);

    // In m?ng temp (v?n gi? nguyên giá tr? lúc tru?c khi s?p x?p)
    printf("Mang temp (giu nguyen gia tri truoc khi sap xep):\n");
    printArray(temp, size);

    return 0;
}
