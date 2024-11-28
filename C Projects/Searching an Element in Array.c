/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include<stdio.h>
int main(){
	int e , n , i , found=0 , a[20] ;
	printf("Enter Number of Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	for(i=0;i<n;i++){
		if(e==a[i]){
			printf("Number found at location = %d ",i+1);
			found=1;
		}
	}
	if(!found){
		printf("Number not found\n");
	}
	return 0 ;
}


