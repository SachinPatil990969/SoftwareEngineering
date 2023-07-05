#include<stdio.h>
int main(){
	int a[2],i,max=0;
	printf("enter 2 num:");
	for(i=0;i<2;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("the max from 2 num is:%d",max);
	return 0;
}