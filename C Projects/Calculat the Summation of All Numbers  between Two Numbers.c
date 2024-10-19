/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main(void) {
	char c ;
	int sum , i , x , y , z ;
	do {
		sum=0 ;
		printf("Enter Two Number :\n") ;
		fflush(stdout) ;
		scanf("%d %d", &x , &y ) ;
		if(x>y){
			z=x ;
			x=y ;
			y=z ;
		}
		for(i=x;i<=y;i++)
		{
			sum+=i ;
		}
		printf("Sum : %d\n",sum);

		printf("Do You Want to Check an Integer Again ? (Y/N): ") ;
		fflush(stdin) ;
		fflush(stdout) ;
		scanf("%c", &c) ;
	} while (c == 'Y' || c == 'y') ;

	printf("Exiting program.\n") ;
}
