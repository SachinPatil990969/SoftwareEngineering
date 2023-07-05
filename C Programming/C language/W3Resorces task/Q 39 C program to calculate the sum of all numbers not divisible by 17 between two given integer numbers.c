#include<stdio.h>
int main(){
	int x,y,total=0,i,temp;
	printf("enter the first and last number of pair:");
	scanf("%d%d",&x,&y);
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	for(i=x;i<=y;i++){
		if(i%17!=0){
			total=total+i;
		}
	}
	printf("Total is %d\n",total);
	return 0;
}