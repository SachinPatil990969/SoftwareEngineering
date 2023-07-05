#include<stdio.h>
int main(){
	int a[5],i,po,less;
	for(i=0;i<5;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
		}
		less=a[0];
		po=0;
	for(i=0;i<5;i++){
		if(a[i]<less){
			less=a[i];
			po=i;
		}
	}
	printf("\n smallest value :%d",less);
	printf("\n Element position :%d",po);
}