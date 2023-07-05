#include<stdio.h>
int main(){
	int n,i,j=1,sum;
	printf("\n Enter the num less than 100:");
	scanf("%d",&n);
	for(i=1;j<=n;i++){
		sum=sum+(j*j*j*j);
		j=j+i;
	}
	printf("\n sum of series = %d",sum);
	return 0;
}