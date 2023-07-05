#include <stdio.h>
int main() {
	int  x,y,temp;
    printf("\nInput the 2 values:"); 
    scanf("%d%d",&x,&y);
    if(x > y) 
	{
		temp = x;
		x = y;
		y = temp;
	}
	if((y%x)==0) 
	{
		printf("\nMultiplied");
	}
	else 
	{
		printf("\nNot Multiplied");
	}
	return 0;
}