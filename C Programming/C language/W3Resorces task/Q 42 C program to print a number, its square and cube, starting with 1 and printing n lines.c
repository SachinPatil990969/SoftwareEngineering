#include<stdio.h>
int main(){
	int l,i;
	printf("\n enter the num of lines:");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		printf("%d %d %d\n",i,i*i,i*i*i);
	}
	return 0;
}