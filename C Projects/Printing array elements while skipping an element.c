#include <stdio.h>

void printArrayFromIndex(int arr[], int start, int size) {
    for (int i = start; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int x = 0;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    do {
        printArrayFromIndex(arr, x, size);
        x += 1;
    } while (x < size);
    return 0;
}