/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include<stdio.h>
#include <string.h>
int main(){
	int l=0 , i ;
	char s[50] ;

	printf("Enter a String : ") ;
	fflush(stdin) ; fflush(stdout) ;
	gets(s) ;

	for(i=0;s[i]!='\0';i++){
		l+=1 ;
	}
	printf("Length of String : %d",l) ;
	return 0 ;
}