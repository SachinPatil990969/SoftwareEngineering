#include<stdio.h>
int main(){
	int num,ans,rem;
	printf("\n enter the number less than 500:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		ans=ans+rem;
		num=num/10;
	}
	printf("\n the reverse num :%d",ans);
	return 0;
}