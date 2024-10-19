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

	float radius, result;
	double pi = 3.141592653589793;
	char y, choice;

	do {

		printf("Enter the Radius :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &radius);

		printf("a to print area,c to print circumference :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &y);

		switch (y) {
		case 'a':
		case 'A': {
			result = pi * pow(radius, 2);
			printf("The Area is : %f\n", result);
		}
			break;
		case 'c':
		case 'C': {
			result = (2 * pi * radius);
			printf("The circumference is : %f\n", result);
		}
			break;
		default: {
			printf("Wrong Choice Please Try Again \n");
			break;
		}
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &choice);
	} while (choice == 'Y' || choice == 'y');

	printf("Exiting program.\n");
	return 0 ;
}
