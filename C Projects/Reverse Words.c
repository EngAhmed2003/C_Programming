/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */

#include <stdio.h>
#include <string.h>

void reverse_words(char str[]) {
    int length = strlen(str), start = 0;
    for (int i = 0, j = length - 1; i <= j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for (int end = 0; end <= length; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            for (int i = start, j = end - 1; i <= j; i++, j--) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    reverse_words(str);
    printf("The string in reverse form is : %s", str);
    return 0;
}