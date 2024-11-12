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