#include<stdio.h>
main(){
	int a;
	printf("\n Enter the Value of Year: ");
	scanf("%d",&a);
	(a%4==0)?printf("\n The year is Leap year"):printf("\n The year is not Leap year");
}