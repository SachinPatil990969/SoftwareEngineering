#include<stdio.h>
int main(){
	int num,i;
	printf("\n Enter num ");
	scanf("%d",&num);
	printf("\n---------Even numbers are-----------");
	for(i=2;i<=num;i=i+2){
		printf("\n%d",i);
	}
	printf("\n---------Even numbers are-----------");
	for(i=1;i<=num;i+=2){
		printf("\n%d",i);
	}
	return 0;
}