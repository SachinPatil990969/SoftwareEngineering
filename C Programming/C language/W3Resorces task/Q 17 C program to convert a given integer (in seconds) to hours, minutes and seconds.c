#include<stdio.h>
int main(){
	int num,h,m,s;
	printf("\n enter the total seconds:");
	scanf("%d",&num);
	h=num/3600;
	m=(num-h*3600)/60;
	s=(num-h*3600-m*60);
	printf("H:M:S is %d:%d:%d",h,m,s);
}