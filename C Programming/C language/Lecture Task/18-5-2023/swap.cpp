#include<stdio.h>
main(){
	float a=10,b=20,c;
	printf("old swap= a=%f,b=%f",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n a=%f b=%f",a,b);
}