#include<stdio.h>
int main(){
	float i,sum=0;
	for(i=1;i<=50;i++){
		sum=sum+(1/i);
	}
	printf("S = %0.2f",sum);
}