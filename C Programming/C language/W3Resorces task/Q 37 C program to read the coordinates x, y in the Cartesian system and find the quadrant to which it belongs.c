#include<stdio.h>
main(){
	int x,y;
	printf("\n Enter value of x and y:");
	scanf("%d %d",&x,&y);
	if(x>0 && y>0){
		printf("\n x and y is in first quadrant");
	}
	else if(x<0 && y>0){
		printf("\n x and y is in second quadrant");
	}
	else if(x<0 && y<0){
		printf("\n x and y is in third quadrant");
	}
	else if(x>0 && y<0){
		printf("\n x and y is in fourth quadrant");
	}
	else{
		printf("\n x and y is on center line");
	}
	return 0;
}