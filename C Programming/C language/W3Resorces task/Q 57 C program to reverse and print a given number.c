#include<stdio.h>
int main(){
	int num,rev,rem;
	printf("\n enter the number:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n the reverse num :%d",rev);
	return 0;
}