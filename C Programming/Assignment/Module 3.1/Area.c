#include<stdio.h>
main (){
	float a,b,c,d,e,f,g,h;
	printf("\n Enter Redius of circle:");
	scanf("%f",&a);
	b=6.28*a;
	printf("\n Area of Circle: %f",b);
	printf("\n Enter Both side length of rectangle:");
	scanf("%f %f",&c,&d);
	e=c*d;
	printf("\n Area of Rectangle: %f",e);
	printf("\n Enter the Base size and Height of Triangle: ");
	scanf("%f %f",&f,&g);
	h=0.5*f*g;
	printf("\n Area of Triangle: %f",h);
}