#include<stdio.h>
int main(){
	int pa,days,i;
	float ri;
	printf("\n enter the principle amount:");
	scanf("%d",&pa);
	while(pa!=0){
		printf("\n enter the rate of interest:");
		scanf("%f",&ri);
		printf("\n enter the days:");
		scanf("%d",&days);
		i=pa*ri*days/365;
		printf("\n the interest amount:%d",i);
		printf("\n enter the principle amount 0 to exit or any amount to continue calculation:");
		scanf("%d",&pa);
	}
	return 0;
}