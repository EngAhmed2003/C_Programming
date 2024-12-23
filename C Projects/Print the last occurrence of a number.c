/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main() {

	int size;

	printf("Enter the size of array : ");
	fflush(stdout);
	scanf("%d",&size);

	int arr[size],	last,found=0;

	for(int i=0;i<size;i++){

		printf("Enter element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);

		printf("\n");
	}

	printf("Enter the number you want to get its last occurrence : ");
	fflush(stdout);
	scanf("%d",&last);

	for(int i=size-1;i>=0;i--){

		if(arr[i]==last){
			found=i+1;
			break;
		}
	}
	if(found==0)
		printf("last occurrence is -1");
	else
		printf("last occurrence : %d",found);

	return 0;
}