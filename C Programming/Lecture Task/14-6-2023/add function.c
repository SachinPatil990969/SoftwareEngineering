#include<stdio.h>
int add(int x,int y);
int main(){
	int a,b,c;
	printf("\n Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("%d",c);
	return 0;
}
int add(int x,int y){
	return x+y;
}