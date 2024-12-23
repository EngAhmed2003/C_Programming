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
	int arr1[20], arr2[20], temp[20], i;

	printf("Enter the first array : ");
	fflush(stdout);
	for(i=0;i<10;i++){
		scanf("%d",&arr1[i]);
	}


	printf("Enter second array : ");
	fflush(stdout);
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}

	printf("First array before swapping :\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr1[i]);
	}

	printf("\nSecond array before swapping :\n");
	for(i=0;i<5;i++){
		printf("%d\t",arr2[i]);
	}

	for(i=0;i<10;i++){
		temp[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];
	}

	printf("\nFirst array after swapping :\n");
	for(i=0;i<5;i++){
		printf("%d\t",arr1[i]);
	}
	printf("\nSecond array after swapping :\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr2[i]);
	}

	return 0;
}