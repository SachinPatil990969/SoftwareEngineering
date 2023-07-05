#include<stdio.h>
int main(){
	int num,co=0;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0){
		num=num/10;
		co++;
	}
	printf("total digit in num:%d",co);
	return 0;
}
