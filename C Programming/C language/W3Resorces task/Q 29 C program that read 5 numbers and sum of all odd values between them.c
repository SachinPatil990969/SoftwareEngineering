#include<stdio.h>
int main(){
	int a[5],i,odd=0,sum=0;
	for(i=0;i<5;i++){
		printf("\n Enter %d num:",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			sum=sum+a[i];
		}
	}
	printf("Sum of all odd num is %d",sum);
	return 0;
}