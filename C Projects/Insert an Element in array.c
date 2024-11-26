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
	int e , n , i , l , a[20] ;
	printf("Enter Number of Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&l);

	for(i=n;i>=l;i--){
		a[i]=a[i-1];
	}
	n++;
	a[l-1]=e;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0 ;
}
