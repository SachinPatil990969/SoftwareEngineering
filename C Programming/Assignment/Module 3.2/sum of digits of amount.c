#include<stdio.h>
main(){
	int i,x,rem,sum=0;
	printf("\n Enter any amount:");
	scanf("%d",&x);
	while(x!=0){
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	printf("\n sum of digits of amount:%d",sum);
}