/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int clear_specifed_bit(int n, int bit) {
	return 	n&=~(1<<bit);
}
int main(){
	int n, bit;

	printf("Input number : ");
	fflush(stdout);
	scanf("%d",&n);

	printf("Bit position : ");
	fflush(stdout);
	scanf("%d",&bit);

	printf("Result = %d",clear_specifed_bit(n,bit)) ;
	return 0;
}