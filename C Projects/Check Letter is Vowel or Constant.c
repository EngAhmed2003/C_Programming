/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */

#include <stdio.h>
int main(void) {
	char c , x;
	do {
	printf("Enter an Alphabet : ") ;
    fflush(stdin); fflush(stdout);
    scanf("%c", &x);

    if (x=='A'|| x=='a' || x=='E' || x=='e' || x=='I' || x=='i' || x=='O' || x=='o' || x=='I' || x=='i') {
        printf("%c is Vowel\n", x);
    }
    else {
        printf("%c is Constant\n", x);
    }
    printf("Do You Want to Try Again ? (Y/N): ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &c);
	}
	while (c == 'Y' || c == 'y');

    printf("Exiting program.\n");
}
