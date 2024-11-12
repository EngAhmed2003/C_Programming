/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int main(){
	int c , r ;
	float a[3][3] ;
	float t[3][3];
	for(r=0 ; r<3 ; r++){
		for(c=0;c<3;c++){
			printf("Enter the Item(%d , %d) : ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("\nThe Matrix is\n");
	for(r=0 ; r<3 ; r++){
		for(c=0;c<3;c++){
			printf("%2.2f\t : ",a[r][c]);
		}
		printf("\n");
	}
	printf("\nThe Transpose Matrix is\n");
	for(r=0 ; r<3 ; r++){
		for(c=0;c<3;c++){
			t[r][c]=a[c][r] ;
		}
	}
	for(r=0 ; r<3 ; r++){
		for(c=0;c<3;c++){
			printf("%.2f\t : ",t[r][c]);
		}
		printf("\n");
	}
	return 0 ;
}