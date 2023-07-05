#include<stdio.h>
int main(){
	int x,i,j;
	printf("\n enter the size of side:");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			if(i==1 || i==x || j==1 || j==x){
			printf("#");
		}
		else{
			printf(" ");
		}
	}
		printf("\n");
	}
	return 0;
}
