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
	int l , i ;
	char s[50] , r[50];

	printf("Enter a String : ") ;
	fflush(stdin) ; fflush(stdout) ;
	gets(s) ;
	l=strlen(s);
	for(i=0;i<l;i++){
		r[i]=s[l-i-1];
	}
	r[l]='\0';
	printf("Reverse is String : %s",r) ;
	return 0 ;
}
