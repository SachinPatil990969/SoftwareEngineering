#include<stdio.h>
int main(){
	float distance,fuel,ave;
	printf("\n Enter the total distace covered:");
	scanf("%f",&distance);
	printf("\n Enter the fuel spend in liter:");
	scanf("%f",&fuel);
	ave=distance/fuel;
	printf("\n Average consumption is %0.2f km/liter",ave);
	return 0;
}