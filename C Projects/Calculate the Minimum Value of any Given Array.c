/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
int calcmin(int values[],int n){
	int i , min_value = values[0] ;
	for(i=0;i<n;i++){
		if(values[i]<min_value)
			min_value = values[i];
	}
	return min_value ;
}
void main(){
	int xvalues[10] = {35,67,27,54,76,44,59,32,43,25} ;
	int yvalues[5] = {28,71,67,83,62} ;
	int zvalues[13] = {87,21,74,36,34,45,81,45,65,97,19,21,47};
	printf("x , y , z = %d %d %d",calcmin(xvalues,10),calcmin(yvalues,5),calcmin(zvalues,13)) ;
}
