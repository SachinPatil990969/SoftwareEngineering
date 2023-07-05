#include<stdio.h>
int main(){
	int num,rev,rem;
	printf("enter the num:");
	scanf("%d",&num);
	for(;num!=0;num=num/10){
		rem=num%10;
		rev=rev*10+rem;
	}
	printf("reverse num:%d",rev);
	return 0;
}