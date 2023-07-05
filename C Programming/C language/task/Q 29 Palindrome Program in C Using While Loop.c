#include<stdio.h>
int main(){
	int num,rev,rem,realnum;
	printf("enter the num:");
	scanf("%d",&num);
	realnum=num;
	for(;num!=0;num=num/10){
		rem=num%10;
		rev=rev*10+rem;
	}
	if(realnum==rev){
		printf("the num is palindrome");
	}
	else{
		printf("the num is not palindrome");
	}
	return 0;
}