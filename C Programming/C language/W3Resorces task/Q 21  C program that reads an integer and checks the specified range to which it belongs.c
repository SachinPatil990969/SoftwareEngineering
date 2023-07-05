#include <stdio.h>
int main(){
	int x;
	printf("\nInput an integer: "); 
	scanf("%d", &x);
	if(x>=0 && x<=20) 
	{
		printf("\nRange [0, 20]");
	} 
	else if(x>=21 && x<=40) 
	{
		printf("\nRange [21,40]");
	} 
	else if(x>=41 && x<=60) 
	{
		printf("\nRange [41,60]");
	} 
	else if(x>61 && x<=80)
	{
		printf("\nRange [61,80]");
	}
	else 
	{
	printf("\nOutside the range");
	}
	return 0;
}