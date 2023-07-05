#include<stdio.h>
int main(){
	int num;
	printf("\nenter any value:");
	scanf("%d",&num);
	if(num>=0){
		printf("\nabsolute value:%d",num);
	}
	else if(num<0){
		num=num*-1;
		printf("\nabsolute value:%d",num);
	}
}