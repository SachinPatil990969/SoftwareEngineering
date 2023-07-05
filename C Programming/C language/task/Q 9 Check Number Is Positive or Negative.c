#include<stdio.h>
int main(){
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	(num>=0)?printf("the num is positive"):printf("the num is negative");
	return 0;
}