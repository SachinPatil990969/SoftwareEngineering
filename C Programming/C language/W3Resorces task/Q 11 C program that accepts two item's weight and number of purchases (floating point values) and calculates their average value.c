#include<stdio.h>
int main(){
	float weight1,weight2,q1,q2,ave;
	printf("Enter the weight and quantity of item1:");
	scanf("%f%f",&weight1,&q1);
	printf("Enter the weight and quantity of item2:");
	scanf("%f%f",&weight2,&q2);
	ave=((weight1*q1)+(weight2*q2))/(q1+q2);
	printf("\n The average is %f",ave);
}