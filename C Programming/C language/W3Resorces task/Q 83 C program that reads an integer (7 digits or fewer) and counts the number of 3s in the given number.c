#include<stdio.h>
int main(){
	int num,rem,rev,co=0;
	printf("\n ether the num:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		num=num/10;
		if(rem==3){
			co++;
		}
	}
	printf("\n the 3 num used %d times",co);
}