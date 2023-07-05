#include<stdio.h>
int main(){
	int a1,a2,a3,max=0;
	printf("enter 3 values:");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1>a2 && a1>a3){
		printf("\n %d is the max",a1);
	}
	else if (a2>a1 && a2>a3){
		printf("\n %d is max",a2);
	}
	else if (a3>a1 && a3>a2){
		printf("\n %d is max",a3);
	}
}