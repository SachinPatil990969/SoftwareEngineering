#include<stdio.h>
float area(int r);
int main(){
	float r,c;
	printf("\n Enter the radius of cicle ");
	scanf("%f",&r);
	c=area(r);
	printf("%0.2f",c);
	return 0;
}
float area(int r){
	return 3.14*r*r;
}