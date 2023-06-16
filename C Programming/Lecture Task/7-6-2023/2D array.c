#include<stdio.h>
main(){
	int a[2][2];
	int i,j;
	printf("\n enter matrix value");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}