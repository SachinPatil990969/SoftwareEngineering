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
	for(i=x+1;i<y;i++){
		if(i%7==2 || i%7==3){
			printf("%d\n",i);
		}
	}
	return 0;
}