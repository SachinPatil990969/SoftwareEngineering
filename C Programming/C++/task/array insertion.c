#include<stdio.h>
int main(){
	int a[50];
	int i,n,x,num;
	printf("enter num of array element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d element:%d\n",i+1,a[i]);
	}
	printf("enter at which position you want to add element:");
	scanf("%d",&x);
	printf("enter element:");
	scanf("%d",&num);
	a[x-1]=num;
	for(i=n;i>x;i--){
		a[i]=a[i-1];
	}
	for(i=0;i<=n;i++){
		printf("%d element:%d\n",i+1,a[i]);
	}
	return 0;
}