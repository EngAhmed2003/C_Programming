/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main(void) {
	char c, a;
	do {
		printf("Enter a Character :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &a);

		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
			printf("%c is an Alphabet.\n", a);
		} else {
			printf("%c is not an Alphabet.\n", a);
		}

		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}
