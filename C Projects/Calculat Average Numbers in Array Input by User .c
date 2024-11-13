/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main(){
	int i , n;
	float num[100] , sum=0 , avg;

	printf("Enter the numbers of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter a number : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]) ;
	}
	for(i=0;i<n;i++){
		sum+=num[i] ;
	}
	avg=sum/n ;
	printf("Average = %.2f",avg) ;
	return 0 ;
}
