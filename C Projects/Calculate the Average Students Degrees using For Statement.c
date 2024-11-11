/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i , n ;
	float  d , a , s =0 ;
	char c ;
	do{
		printf("Enter the Number of the Student : ") ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%i", &n) ;

		for(i=1;i<=n;i++)
		{
			printf("Enter student %i degree : " , i ) ;
			fflush(stdin) ; fflush(stdout) ;
			scanf("%f", &d) ;
			s +=d ;
		}
		printf("Average Student Degree is : %f\n" , a=s/n) ;

		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
	return 0 ;
}