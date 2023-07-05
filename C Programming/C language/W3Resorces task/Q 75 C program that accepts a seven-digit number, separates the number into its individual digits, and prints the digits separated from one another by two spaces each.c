#include<stdio.h>
int main(){
	int num,rem,rev;
	printf("\n enter the num:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	num=rev;
	while(num!=0){
	rem=num%10;
	num=num/10;
	printf("%d  ",rem);	
	}
	return 0;
}