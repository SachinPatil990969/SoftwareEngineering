#include<stdio.h>
main(){
	int i,j;
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			if((i+j)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	printf("\n---------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	printf("\n---------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=5-i;j++){
			printf(" ");
		}
		for (j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n---------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}	
	for (i=5;i>1;i--){
		for (j=i;j>1;j--){
			printf("*");
		}	
		printf("\n");
	}
}
