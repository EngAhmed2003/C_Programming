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
	char names[5][14]={"Alaa","Osama","Ahmed","Ali","Samy"};
	char name[14];
	int i ;

	printf("Enter You Name : ") ;
	fflush(stdin);fflush(stdout);
	scanf("%s",name);

	for(i=0;i<5;i++){
		if(stricmp(name,names[i])==0){
			printf("Congratulation You Name In The List\n");
			break;
		}
	}
	if(i==5){
		printf("Sorry! Your Name Isn't In List");
	}
	return 0 ;
}
