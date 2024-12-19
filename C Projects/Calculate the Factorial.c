/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <math.h>
int factorial(int x){
	int f=1;
	if (x==0)
		return f;
	for(;x>0;x--)
		f*=x;
	return f;
}
int main(){
	printf("Factorial(%d) = %d\n",10,factorial(10));
	printf("Factorial(%d) = %d\n",0,factorial(0));
	printf("Factorial(%d) = %d\n",5,factorial(5));
}