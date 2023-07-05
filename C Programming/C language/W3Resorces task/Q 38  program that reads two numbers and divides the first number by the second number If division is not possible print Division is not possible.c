#include<stdio.h>
int main(){
	int x,y,di;
	printf("enter the 2 number of pair:");
	scanf("%d%d",&x,&y);
	if(x<y){
		printf("\n division is not possible");
	}
	else{
		di=x/y;
		printf("\n Division is %d",di);
	}
}