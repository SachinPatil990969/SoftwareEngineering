#include<stdio.h>
int main(){
	int x=1;
	printf("x	x+2	x+4	x+6");
	for(x=1;x<=15;x=x+3){
		printf("\n %d	%d	%d	%d",x,x+2,x+4,x+6);
	}
	return 0;
}