#include<stdio.h>
int main(){
	int x,y;
	printf("enter the first and last number of pair:");
	scanf("%d%d",&x,&y);
	if(x<y){
		printf("\n The pair is in ascending order");
	}
	else if(x>y){
		printf("\n The pair is in descending order");
	}
	return 0;
}