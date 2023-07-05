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
	printf("list of odd num:\n");
	for(i=x;i<=y;i++){
		if(i%2!=0){
			printf("%d\n",i);
			total=total+i;
		}
	}
	printf("Total of odd num is %d\n",total);
	return 0;
}