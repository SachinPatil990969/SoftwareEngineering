#include<stdio.h>
int main(){
	int x;
	printf("enter the age:");
	scanf("%d",&x);
	(x>=18)?printf("person is eligible for vote"):printf("person is not eligible for vote");
	return 0;
}