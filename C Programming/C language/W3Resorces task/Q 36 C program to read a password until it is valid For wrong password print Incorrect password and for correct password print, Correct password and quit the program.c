#include<stdio.h>
int main(){
	int password,flag=1;
	while(x!=0){
		printf("\n Enter the password:");
		scanf("%d",&password);
		if(password==1234){
			printf("Correct Password");
			flag=0;
		}
		else {
		printf("\n Wrong password,try again");
		}
	}
	return 0;
}