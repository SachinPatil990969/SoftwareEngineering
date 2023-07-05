#include<stdio.h>
int main(){
	int a[3],i,max=0;
	printf("enter 3 num:");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("the max from 3 num is:%d",max);
	return 0;
}