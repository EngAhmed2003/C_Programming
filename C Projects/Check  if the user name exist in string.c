/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <string.h>
int main(){
	int arr1[100], arr2[100];
	puts("Enter a string : ");
	fflush(stdout);
	gets(arr1);

	puts("Enter your username :");
	fflush(stdout);
	gets(arr2);

	int result=stricmp(arr1,arr2);

	if(result==0)
		printf("exist");
	else
		printf("Not exist");
}
