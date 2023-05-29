#include<stdio.h>
main(){
	int num,rev,rem,sum=0,x1,x2;
	printf("\n Enter any amount:");
	scanf("%d",&num);
	x1=num%10;
	while (num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	x2=rev%10;
	sum=x1+x2;
	printf("\n Sum of first and last digit of amount :%d",sum);
}