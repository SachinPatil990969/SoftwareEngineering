#include<stdio.h>
int main(){
	int p,r,n;
	printf("enter the principle amount.rate of interest and time period:");
	scanf("%d%d%d",&p,&r,&n);
	printf("the simple interest:%d",p*n*r/100);
	return 0;
}