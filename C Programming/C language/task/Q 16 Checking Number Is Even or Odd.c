#include<stdio.h>
int main(){
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	(num%2==0)?printf("the num is even"):printf("the num is odd");
	return 0;
}