#include<stdio.h>
int main(){
	int i,sum=1,num;
	printf("\n enter the num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum=sum+(1/i);
	}
	printf("\n sum = %d",sum);
}