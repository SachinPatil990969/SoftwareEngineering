#include<stdio.h>
main(){
	int i,j,x;
	printf("\n Enter the last point of range:");
	scanf("%d",&x);
	printf("\n Table\n");
	for(i=1;i<=10;i++){
		for(j=1;j<=x;j++){
		printf("\t %d * %d = %d",j,i,j*i);
		}
		printf("\n");
	}
}