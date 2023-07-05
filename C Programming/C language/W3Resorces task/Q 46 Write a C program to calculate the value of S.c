#include<stdio.h>
int main(){
	double i,j=1,sum=0;
	for(i=1;i<=7;i+=2){
		sum=sum+(i/j);
		j=j*2;
	}
	printf("S = %0.2lf",sum);
	return 0;
}