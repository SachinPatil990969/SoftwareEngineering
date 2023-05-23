#include<stdio.h>
main(){
	int x;
	printf("\n Enter value of year:");
	scanf("%d",&x);
	if(x%4==0){
		printf("\n Year is leap year");
	}
	else{
		printf("\n year is not leap year");
	}
}