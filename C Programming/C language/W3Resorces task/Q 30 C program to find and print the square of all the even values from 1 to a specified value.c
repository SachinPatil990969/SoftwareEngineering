#include<stdio.h>
int main(){
	int num,i;
	printf("\n Enter num");
	scanf("%d",&num);
	for(i=2;i<=num;i=i+2){
		printf("%d^2=%d\n",i,i*i);
	}
}