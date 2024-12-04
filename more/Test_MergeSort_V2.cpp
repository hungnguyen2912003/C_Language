#include <stdio.h>
#define MAX 30

// Hàm tr?n hai do?n dã du?c s?p x?p
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
  int i = 0, j = 0, k = 0;
  while (i < leftSize && j < rightSize) {
    if (left[i] <= right[j]) {
      arr[k++] = left[i++];
    } else {
      arr[k++] = right[j++];
    }
  }
  while (i < leftSize) {
    arr[k++] = left[i++];
  }
  while (j < rightSize) {
    arr[k++] = right[j++];
  }
}

// Hàm s?p x?p tr?n không d? quy
void iterativeMergeSort(int arr[], int n) {
  int size; // Kích thu?c c?a do?n
  int left; // Ch? s? b?t d?u c?a do?n bên trái
  for (size = 1; size < n; size = 2 * size) {
    left = 0;
    while (left + size < n) {
      int mid = left + size - 1;
      int right = mid + size;
      if (right >= n) {
        right = n - 1;
      }
      // Tr?n hai do?n bên trái và bên ph?i
      int leftArr[size], rightArr[right - mid];
      for (int i = 0; i < size; i++) {
        leftArr[i] = arr[left + i];
      }
      for (int i = 0; i < right - mid; i++) {
        rightArr[i] = arr[mid + 1 + i];
      }
      merge(arr + left, leftArr, size, rightArr, right - mid);
      left = right + 1;
    }
  }
}

// Hàm chính d? ki?m tra hàm s?p x?p tr?n không d? quy
int main() {
  int arr[] = {38, 27, 43, 3, 9, 82, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("M?ng ban d?u:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  iterativeMergeSort(arr, n);
  printf("M?ng dã s?p x?p:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
