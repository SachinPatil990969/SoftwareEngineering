#include<stdio.h>
int main(){
	int a[5],i,sum=0;
	for(i=0;i<5;i++){
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]%2 != 0){
			sum=sum+a[i];
		}
	}
	printf("Total of odd numbers is %d",sum);
}