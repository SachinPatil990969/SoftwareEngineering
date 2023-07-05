#include<stdio.h>
main(){
	int x,y,z;
	printf("\n Q1: if both num are equal");
	printf("\n Enter two numbers:");
	scanf("%d %d",&x,&y);
	(x==y)?printf("\n Number1 and number2 are equal"):printf("\n Number1 and number2 are not equal");
	printf("\n--------------------------------------\n");
	printf("\n Q2: is given num is even or odd");
	printf("\n Enter one numbers:");
	scanf("%d",&z);
	(z%2==0)?printf("\n %d is even integer",z):printf("\n %d is odd integer",z);
	printf("\n--------------------------------------\n");
	printf("\n Q3: is given num is positive or negative");
	printf("\n Enter one numbers:");
	scanf("%d",&z);
	(z>0)?printf("\n %d is posotive number",z):printf("\n %d is negative number",z);
	printf("\n--------------------------------------\n");
	printf("\n Q5: check whether person is eligible to vote");
	printf("\n Enter the age:");
	scanf("%d",&z);
	(z>18)?printf("\n Congratulation! You are eligible for casting vote",z):printf("\n You are not eligible for casting vote",z);
	printf("\n--------------------------------------\n");
	printf("\n Q6: print 1 for positive,0 for 0, -1 for negative");
	printf("\n Enter any value:");
	scanf("%d",&z);
	if (z>0){
		printf("\n the value of n=1");
	}
	else if (z==0){
		printf("\n the value of n=0");
	}
	else if (z<0){
		printf("\n the value of n=-1");
	}
	printf("\n--------------------------------------\n");
	printf("\n Q7: divide mans in diff catagory according to height");
	printf("\n Enter height in centimeter:");
	scanf("%d",&z);
	if (z<150){
		printf("\n the man is short");
	}
	else if (z>=150 && z<165){
		printf("\n the man is average");
	}
	else if (z>=165){
		printf("\n the man is taller");
	}
	printf("\n--------------------------------------\n");
}