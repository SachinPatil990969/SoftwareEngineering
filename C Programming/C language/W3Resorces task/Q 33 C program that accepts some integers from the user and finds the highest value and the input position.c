#include<stdio.h>
int main(){
	int a[5],i,max=0,po;
	for(i=0;i<5;i++){
		printf("\nEnter the value:");
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
			po=i+1;
		}
	}
	printf("\n Highest value is %d at position %d",max,po);
	return 0;
}