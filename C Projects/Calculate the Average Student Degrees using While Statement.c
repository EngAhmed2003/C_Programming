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
	int nStudent , i;
	float deg, sum ;
	char choice;
	do {

		i=0 ;
		sum=0 ;

		printf("Enter the Number of student : ");
		fflush(stdin), fflush(stdout);
		scanf("%d", &nStudent);

		while (1) {

			printf("Enter Student (%d) Degrees : ", i += 1);
			fflush(stdin), fflush(stdout);
			scanf("%f", &deg);

			sum += deg;
			if (i == nStudent)
				break;

		}
		printf("The Average Student Degrees is : %f\n", sum / nStudent);

		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &choice);
	} while (choice == 'Y' || choice == 'y');
	printf("Exiting program.\n");
	return 0 ;
}