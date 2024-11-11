/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>

int main() {
	int i ;
	float x[10]  ;
	for (i =0 ; i<10 ; i++){
		printf("Enter Student %d Degree : ",i+1) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%f",&x[i]);
	}
	for (i=0;i<10;i++){
		printf("Student %d degree is %f\n", i+1, x[i]) ;
	}
	return 0 ;
}