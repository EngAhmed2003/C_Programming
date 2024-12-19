/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int factorial(int a) {
	if(a==0||a==1){
		return 1;
	}
	else{
		a *=factorial(a-1);
	}
	return a ;
}
int main() {
	int a ;
	printf("Enter a positive integer : ");
	fflush(stdout);
	scanf("%d",&a);
    printf("The result is: %d\n", factorial(a));
    return 0;
}