#include<stdio.h>
int main(){
	int d,m,y;
	printf("enter tha date month and year:");
	scanf("%d%d%d",&d,&m,&y);
	if(d<=31 && m<=12 && y<=2023){
		printf("the date is correct");
	}
	else{
		printf("the date is incorrect");
	}
}