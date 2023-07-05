#include<stdio.h>
int main(){
	int i=1,n,x=0,x1=1,x2=1;
	printf("enter the num till fibonacci series needed:");
	scanf("%d",&n);
	do{
		i++;
		printf("%d\n",x);
		x1=x2;
		x2=x;
		x=x1+x2;
	}
	while(i<=n);
	return 0;
}