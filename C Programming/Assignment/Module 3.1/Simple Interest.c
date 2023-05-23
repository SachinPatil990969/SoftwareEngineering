#include<stdio.h>
main(){
	float n,p,r,Interest;
	printf("\n Enter the Principle amount: ");
	scanf("%f",&p);
	printf("\n Enter Time period: ");
	scanf("%f",&n);
	printf("\n Enter the Interest rate: ");
	scanf("%f",&r);
	Interest=n*p*r/100;
	printf("\n The interest amount: %f",Interest);
}