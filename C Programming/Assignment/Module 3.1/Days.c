#include<stdio.h>
main(){
	int a,b;
	printf("\n Enter the Nunber of year: ");
	scanf("%d",&a);
	b=a*12;
	printf("\n The Number of Months: %d",b);
	b=a*365;
	printf("\n The Number of Days; %d",b);
}