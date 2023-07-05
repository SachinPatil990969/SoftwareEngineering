#include<stdio.h>
int main(){
	float cel,fer;
	printf("enter the temperature in celsius:");
	scanf("%f",&cel);
	printf("the temperature in fahrenhit:%0.2f",(cel*9/5)+32);
	return 0;
}