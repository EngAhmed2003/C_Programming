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
	int i ,  s , x , y ,z;
	char c ;

	do
	{ s=0;
	printf("Enter Two Value :\n") ;
	fflush(stdout);
	scanf("%d %d" ,&x , &y) ;
	if(x>y){
		z=x ;
		x=y	;
		y=z ;
	}
	if(x%2==0){
		x=x+1 ;

		for(i=x;i<=y;i+=2)
		{
			s+= i ;
		}
		printf("Summation of Odd Value Between %d and %d is : %d\n",x-1, y , s) ;
	}
	else {
		for(i=x;i<=y;i+=2)
		{
			s+= i ;
		}
		printf("Summation of Odd Value Between %d and %d is : %d\n",x, y , s) ;
	}
	printf("Do You Want to Try Again ? (Y/N): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	}
	while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
	return 0 ;
}