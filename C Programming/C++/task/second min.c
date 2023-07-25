#include<stdio.h>
int main(){
	int a[50];
	int i,n,min=999999999,secondmin=9999999999;
	printf("enter num of array element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<=min){
			min=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>min && a[i]<=secondmin){
			secondmin=a[i];
		}
	}
	printf("second min element of array:%d",secondmin);
	return 0;
}