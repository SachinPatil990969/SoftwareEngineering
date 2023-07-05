#include<stdio.h>
int main(){
	int num,y,m,d;
	printf("\n enter the total days:");
	scanf("%d",&num);
	y=num/365;
	m=(num-y*365)/30;
	d=(num-y*365-m*30);
	printf("%d Years %d Months %d Days",y,m,d);
}