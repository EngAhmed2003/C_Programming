/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <math.h>
int main() {
	unsigned int x;
	double y;

	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x);

	y=log(x)/log(3);

	y==trunc(y)?printf("%d==>0",x):printf("%d==>1",x);

	return 0;
}