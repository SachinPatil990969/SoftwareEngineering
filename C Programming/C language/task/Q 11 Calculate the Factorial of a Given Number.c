#include<stdio.h>
main(){
	int i,x,ans=1;
	printf("\n Enter the last point of range:");
	scanf("%d",&x);
	for(i=x;i>0;i--){
		ans=ans*i;
	}
	printf("\n Factorial of %d is %d",x,ans);
	return 0;
}