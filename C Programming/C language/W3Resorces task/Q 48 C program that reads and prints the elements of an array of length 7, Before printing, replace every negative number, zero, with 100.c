#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n enter the element:");
		scanf("%d",&a[i]);
		if(a[i]>0){
			a[i];
		}
		else {
			a[i]=100;
		}
	}
	for(i=0;i<5;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}