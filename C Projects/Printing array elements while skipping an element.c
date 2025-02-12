/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */

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