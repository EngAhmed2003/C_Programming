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
	char choice_1, choice_2;
	double pi = 3.141592653589793;
	do {
		printf("Enter The Radius :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &radius);

		printf("a to print area,c to print circumference\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &choice_1);

		if (choice_1 == 'a' || choice_1 == 'A') {
			result = pi * pow(radius, 2);
			printf("Area:%f\n", result);
		}

		else if (choice_1 == 'c' || choice_1 == 'C') {
			result = (2 * pi * radius);
			printf("Circumference:%f\n", result);
		} else {
			printf("Wrong Choice Please Try Again");
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &choice_2);
	} while (choice_2 == 'Y' || choice_2 == 'y');

	printf("Exiting program.\n");
	return 0 ;
}