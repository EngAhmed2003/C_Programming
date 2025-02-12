/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */

#include <stdio.h>

void max_num(int num) {
    int binary[32] = {0}, i = 0;
    int count1 = 0, count2 = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = 0; j < 32; j++) {
        if (binary[j] == 1) {
            count2++;
            if (count2 > count1) {
                count1 = count2;
            }
        } else {
            count2 = 0;
        }
    }

    printf("Max number of ones is : %d", count1);
}

int main() {
    int num;
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%d", &num);
    max_num(num);
    return 0;
}