#include<stdio.h>
int fact(int num){
	int f;
	if(num==1){
		return 1;
	}
	else{
		f=num*fact(num-1);
	}
	return f;
}
main(){
	printf("\n Factorial of 5 = %d",fact(5));
	return 0;
}