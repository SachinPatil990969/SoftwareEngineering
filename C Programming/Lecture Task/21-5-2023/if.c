#include<stdio.h>
main(){
	int num, sq;
	printf("\n Enter num:");
	scanf("%d",&num);
	if(num>0){
		sq=num*num;
		printf("\n Sruare of %d=%d",num,sq);
	}
}