#include<stdio.h>
int main(){
	int year,weeks,days,num;
	printf("enter the number of days:");
	scanf("%d",&num);
	year=num/365;
	weeks=(num-(year*365))/7;
	days=num-(year*365)-(weeks*7);
	printf("year = %d\n",year);
	printf("weeks = %d\n",weeks);
	printf("days = %d\n",days);
}