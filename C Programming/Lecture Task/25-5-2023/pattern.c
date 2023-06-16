#include<stdio.h>
main(){
	int i,j,k;
	for (i=1;i<=5;i++){
		for (j=1;j<=5;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			printf(" %d%d",i,j);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=1;j<=5;j++){
			printf(" %d%d",i,j);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (k=1;k<=5-i;k++){
			printf(" ");
		}
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (k=1;k<=5-i;k++){
			printf(" ");
		}
		for (j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for (i=1;i<=5;i++){
		for (k=1;k<i;k++){
			printf(" ");
		}
		for (j=5;j>=i;j--){
			printf("* ");
		}
		printf("\n");
		}
}