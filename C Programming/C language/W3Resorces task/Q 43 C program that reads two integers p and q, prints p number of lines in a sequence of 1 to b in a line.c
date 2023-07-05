#include<stdio.h>
int main(){
	int p,q,i,j,k=1;
	printf("\n enter the num of lines:");
	scanf("%d",&p);
	printf("\n enter the num characters line:");
	scanf("%d",&q);
	for(i=1;i<=p;i++){
		for(j=1;j<=q;j++){
		printf("%d ",k);
		k++;
		}
		printf("\n");
	}
	return 0;
}