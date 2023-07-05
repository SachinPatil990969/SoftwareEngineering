#include<stdio.h>
int main(){
	int a[5],i,x;
	printf("\n enter the first element:");
	scanf("%d",&x);
	for(i=0;i<5;i++){
		a[i]=x;
		x=x*3;
	}
	for(i=0;i<5;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}