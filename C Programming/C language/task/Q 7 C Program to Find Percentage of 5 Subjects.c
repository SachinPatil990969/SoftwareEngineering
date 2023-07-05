#include<stdio.h>
int main(){
	float a[5],ave,sum=0;
	int i;
	printf("enter the marks of 5 subject:\n");
	for(i=0;i<5;i++){
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	ave=sum/5;
	printf("the percantage of 5 subject:%0.2f",ave);
	return 0;
}