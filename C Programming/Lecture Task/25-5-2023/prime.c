#include<stdio.h>
main(){
	int i,num,flag=0;
	printf("\n Enter num=");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if (num%i==0){
			flag=1;
		}
	}
		(flag==0)?printf("\n Num is prime"):printf("\n num is not prime");
}