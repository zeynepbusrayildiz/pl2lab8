#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size);

int main() {
    int i, data[] = {5, 1, 4, 2, 8};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printf("sorted: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}

void bubbleSort(int array[], int size) {
	int step, i;
    for (step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

