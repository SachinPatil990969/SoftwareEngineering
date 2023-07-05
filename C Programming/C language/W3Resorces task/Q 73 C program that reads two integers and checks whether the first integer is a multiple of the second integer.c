#include<stdio.h>
int main(){
	int x,y,di;
	printf("enter the 2 number of pair:");
	scanf("%d%d",&x,&y);
	if(x%y==0){
		printf("\n %d is multiple of %d\n",x,y);
	}
	else{
		printf("\n %d is not multiple of %d\n",x,y);
	}
}