#include<stdio.h>
main(){
	int x,i=1;
	printf("\n Enter the value:");
	scanf("%d",&x);
	printf("\n Table of %d",x);
	while(i<=10){\
	printf("\n%d*%d=%d",x,i,x*i);
	i++;
	}
}