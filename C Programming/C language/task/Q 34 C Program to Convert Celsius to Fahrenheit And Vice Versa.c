#include<stdio.h>
int main(){
	float cel1,fer2;
	printf("\nenter the temperature in celsius:");
	scanf("%f",&cel1);
	printf("the temperature in fahrenhit:%0.2f\n",(cel1*9/5)+32);
	printf("\n____________________________________\n");
	printf("\nenter the temperature in fahrenhit:");
	scanf("%f",&fer2);
	printf("the temperature in fahrenhit:%0.2f\n",((fer2-32)*5/9));
	return 0;
}