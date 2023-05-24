#include<stdio.h>
main(){
	int x,y,sum=0;
	printf("\n Enter the starting and ending point of range:");
	scanf("%d %d",&x,&y);
	while(x<=y){
		sum=sum+x;
		x++;
	}
	printf("%d\t",sum);
}