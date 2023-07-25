#include<stdio.h>
int main(){
	int a[50];
	int i,n,max=0,min=999999999;
	printf("enter num of array element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	printf("max element of array:%d\n",max);
	for(i=0;i<n;i++){
		if(a[i]<=min){
			min=a[i];
		}
	}
	printf("min element of array:%d",min);
	return 0;
}