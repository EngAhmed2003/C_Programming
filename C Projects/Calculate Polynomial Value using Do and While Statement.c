/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <math.h>

int main(void) {

	float x, y;
	char choice;

	do {

		printf("Enter the Value of x : ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &x);

		y = 5 * x * x + 3 * x + 2;

		printf("y = %f \n", y);

		printf("Do You Want to Try Again (Y/N) : ");
		fflush(stdin), fflush(stdout);
		scanf("%c", &choice);
	} while (choice == 'Y' || choice == 'y');

	printf("Exiting program.\n");
	return 0;
}