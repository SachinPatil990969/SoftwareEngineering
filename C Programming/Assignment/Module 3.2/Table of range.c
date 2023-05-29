#include<stdio.h>
main(){
	int i,x;
	printf("\n Enter the last point of range:");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		printf("%d %d %d %d %d %d %d %d %d %d\n",i,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
	}
}