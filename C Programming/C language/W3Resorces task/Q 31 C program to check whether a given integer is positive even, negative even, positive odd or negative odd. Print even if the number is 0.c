#include<stdio.h>
int main(){
	int num;
	printf("\n Enter the num:");
	scanf("%d",&num);
	if(num>0 && num%2==0){
		printf("\n Number is positive even");
	}
	else if(num<0 && num%2==0){
		printf("\n Number is negative even");
	}
	else if(num>0 && num%2!=0){
		printf("\n Number is positive odd");
	}
	else if(num<0 && num%2!=0){
		printf("\n Number is negative odd");
	}
	return 0;
}