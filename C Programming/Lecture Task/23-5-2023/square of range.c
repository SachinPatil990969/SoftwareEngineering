#include<stdio.h>
main(){
	int i,x,y,square;
	printf("\n Enter the starting and ending point of range:");
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++){
		square=i*i;
		printf("\n Square of %d is %d",i,square);
	}
}