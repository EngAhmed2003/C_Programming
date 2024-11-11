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
	int i , x ;
	char c ;
	do{
		printf("Enter How many Times You Want to Print Hello World :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x );
		for(i=1;i<=x;i++)
		{
			printf("%d : Hello World\n",i) ;
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	}while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
	return 0 ;
}