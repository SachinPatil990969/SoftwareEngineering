#include<stdio.h>
int main(){
	int num,x,i,rem,rev;
	printf("\n ether the num:");
	scanf("%d",&num);
	x=num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(x==rev){
		printf("\n the num is palindrome.");	
	}
	else{
		printf("\n the num is not palindrome.");
	}
	return 0;
}