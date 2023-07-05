#include<stdio.h>
int main(){
	int i,a[100],count=0;
	float ave,total=0;
	printf("\n enter the marks of maths (0 to terminate):");
	for(i=0;i<100;i++){
		scanf("%d",&a[i]);
		if(a[i]<=0){
			break;
		}
		count++;
		total=total+a[i];
	}
	ave=total/count;
	printf("\n Average marks in maths is %0.2f",ave);
}