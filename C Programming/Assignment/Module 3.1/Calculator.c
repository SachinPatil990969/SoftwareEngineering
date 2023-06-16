#include<stdio.h>
main(){
	int a,b,c,d,e,g;
	float f;
	printf("\n Enter the value of a & b:");
	scanf("%d %d",&a, &b);
	c=a+b;
	printf("\n Addition is %d",c);
	d=a-b;
	printf("\n Substraction is %d",d);
	e=a*b;
	printf("\n Multiplication is %d",e);
	f=(float)a/b;
	printf("\n Division is %f",f);
	g=a%b;
	printf("\n Modulo is %d",g);
}