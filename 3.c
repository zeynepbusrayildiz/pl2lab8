#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("unsorted: \n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("sorted: \n");
    printArray(arr, n);
    return 0;
}

void insertionSort(int arr[], int n) {
	int i;
    for (i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

