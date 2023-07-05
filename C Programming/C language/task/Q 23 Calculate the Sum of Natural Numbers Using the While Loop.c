#include<stdio.h>
int main(){
	int n,sum=0,c;
	printf("enter the last digit:");
	scanf("%d",&n);
	c=n;
	while(n!=0){
		sum=sum+n;
		n--;
	}
	printf("the sum of %d natural num:%d",c,sum);
	return 0;
}