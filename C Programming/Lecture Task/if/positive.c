#include<stdio.h>
main(){
	int x;
	printf("\n Enter num:");
	scanf("%d",&x);
	if(x>0){
		printf("\n num is positive");
	}
	else if(x<0){
		printf("\n num is negative");
	}
	else {
		printf("\n num is zero");
	}
}