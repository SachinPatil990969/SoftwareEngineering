#include<stdio.h>
int main(){
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("Upper case latter");
	}
	else if(ch>=97 && ch<=122){
		printf("Lower case latter");
	}
	else if(ch>=48 && ch<=57){
		printf("number");
	} 
	else {
		printf("symbol");
	}
	return 0;
}