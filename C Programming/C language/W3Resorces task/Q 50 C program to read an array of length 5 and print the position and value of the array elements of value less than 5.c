#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
		}
	for(i=0;i<5;i++){
		if(a[i]<5){
		printf("a[%d]=%d\n",i,a[i]);
		}
	}
	return 0;
}