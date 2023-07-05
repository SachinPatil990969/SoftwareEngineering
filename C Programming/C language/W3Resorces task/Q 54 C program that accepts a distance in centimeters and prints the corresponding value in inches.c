#include<stdio.h>
int main(){
	float centi,inche;
	printf("\n enter the distance in centimeter:");
	scanf("%f",&centi);
	inche=centi/2.54;
	printf("\n Distance in inches : %0.2f",inche);
}