#include<stdio.h>
void hello(int n);
int main(){
	hello(7);
	return 0;
}
void hello(int n){
	if(n==0){
		return 0;
	}
	printf("Hello world\n");
	hello(n-1);
}
