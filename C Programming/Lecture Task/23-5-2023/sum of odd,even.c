#include<stdio.h>
main(){
	int i,x,y,evensum=0,oddsum=0;
	printf("\n Enter the starting and ending point of range:");
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++){
		if(i%2==0){
			evensum=evensum+i;
		}
		else{
			oddsum=oddsum+i;
		}
	}
	printf("\n Sum of even num within range is %d",evensum);
	printf("\n Sum of odd num within range is %d",oddsum);
}