#include<stdio.h>
main(){
	float a=10,b=20;
	printf("old swap= a=%f,b=%f",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n a=%f b=%f",a,b);
}