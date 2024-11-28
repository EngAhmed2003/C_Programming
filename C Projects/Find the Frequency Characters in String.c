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
	int i , f=0 ,l;
	char s[50] , c;
	printf("Enter a String : ") ;
	fflush(stdin);fflush(stdout);
	gets(s);
	l=strlen(s);
	printf("Enter a Character to Find : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	for(i=0;i<l;i++){
		if(c==s[i]){
			f+=1;
		}
	}
	printf("Frequency of %c = %d",c,f);
	return 0 ;
}