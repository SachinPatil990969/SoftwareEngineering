#include<stdio.h>
int main(){
	int a[5],i,po=0,sum=0;
	float ave;
	for(i=0;i<5;i++){
		printf("\n Enter %d num:",i+1);
		scanf("%d",&a[i]);
		if(a[i]>0){
			sum=sum+a[i];
			po++;
		}
	}
	printf("Total positive numbers are %d\n",po);
	ave=sum/po;
	printf("Average of all positive numbers is %0.2f\n",ave);
	return 0;
}