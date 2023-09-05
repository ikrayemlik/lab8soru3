
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, anahtar, j;
    for (i = 1; i < n; i++) {
        anahtar = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > anahtar) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = anahtar;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\nSorted array using Insertion Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
