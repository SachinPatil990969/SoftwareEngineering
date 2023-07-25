#include<stdio.h>
int main(){
	int a[50];
	int i,n,sum=0;
	printf("enter the number of values:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d value:",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of arraay element:%d",sum);
	return 0;
}