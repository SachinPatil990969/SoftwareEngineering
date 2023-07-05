#include<stdio.h>
int main(){
	int n,p,r,si;
	printf("\n Enter principle amount,rate of interest and time:");
	scanf("%d%d%d",&p,&r,&n);
	si=p*r*n/100;
	printf("\n Simple interest : %d",si);
}