#include<stdio.h>
main (){
	float a,b,c,d,e,f,g,h;
	printf("\n Enter Redius of circle:");
	scanf("%f",&a);
	b=3.14*a*a;
	printf("\n Area of Circle: %f",b);
	c=2*a;
	printf("\n Diameter of Circle: %f",c);
	printf("\n Enter Both side length of rectangle:");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("\n Area of Rectangle: %f",c);
	printf("\n Enter the Base size and Height of Triangle: ");
	scanf("%f %f",&a,&b);
	c=0.5*a*b;
	printf("\n Area of Triangle: %f",c);
	printf("\n Enter lenght of square side: ");
	scanf("%f",&a);
	b=a*a;
	printf("\n Area of Square; %f",b);
}