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
	float a[2][2] ;
	float b[2][2] ;
	float sum[2][2];
	int r , c ;
	printf("Enter the elements of 1st matrix\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter the a%d%d:",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f;\n",&a[r][c]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter the b%d%d:",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=a[r][c]+b[r][c] ;
		}
	}
	printf("Sum Of Matrix:\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%.1f\t",sum[r][c]) ;
		}
		printf("\n");
	}
	return 0 ;
}
