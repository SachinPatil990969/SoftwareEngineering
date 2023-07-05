#include<stdio.h>
int main(){
	int i,j,flag,count=0;
	printf("\n the prime num between 1 and 200:");
	for(i=2;i<200;i++){
		flag=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
			}
		}
		if(flag==1){
			printf("%5d",i);
			count++;
			if(count%20==0){
				printf("\n");
			}
		}
	}
	printf("\n");
	return 0;
}