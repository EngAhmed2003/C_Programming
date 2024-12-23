/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main() {
    int number,n,bit;
    int binary[32] = {0};
    int i = 31;

    printf("Enter a number in decimal system : ");
    fflush(stdout);
    scanf("%d", &number);

    printf("Enter the least significant bit : ");
    fflush(stdout);
    scanf("%d", &bit);

    n=number;

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i--;
    }

    printf("%d in binary system is : ",n);
    for (int j = 0; j < 32; j++) {
        printf("%d", binary[j]);
    }

    printf("\n4th least signification bit is : ");
    for (int j=0; j<32; j++) {
    	if(j==31-bit)
    		printf("%d", binary[j]);
    }

    return 0;
}
