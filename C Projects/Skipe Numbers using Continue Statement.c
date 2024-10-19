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
	int i , j , x , y , z ;
	char c ;
	do{
		printf("Enter The Number You Want to Skip :\n");
		fflush(stdout);
		scanf("%d", &j);

		printf("Enter the Start Number and End Number of list :\n");
		fflush(stdout);
		scanf("%d %d", &x , &y);
		if(x>y){
			z=x ;
			x=y ;
			y=z ;
		}
		for(i=x;i<=y;i++)
		{
			if(i==j)
			{
				continue ;
			}
			printf("%d\n" , i) ;
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin) ;
		fflush(stdout) ;
		scanf("%c", &c) ;
	}while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}
