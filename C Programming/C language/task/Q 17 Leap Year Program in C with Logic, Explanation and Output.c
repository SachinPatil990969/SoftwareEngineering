#include<stdio.h>
int main(){
	int num;
	printf("enter the year:");
	scanf("%d",&num);
	(num%4==0)?printf("the year is leap year"):printf("the year is not leap year");
	return 0;
}