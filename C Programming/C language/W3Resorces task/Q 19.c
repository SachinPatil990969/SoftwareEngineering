#include<stdio.h>
int main(){
	int p,q,r,s;
	printf("\n Enter 4 values");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if((q>r) && (s>p) && ((r+s)>(p+q)) && (r>0) && (s>0) && (p%2==0))
	 {
		printf("\nCorrect values");
	}
	else {
		printf("\nWrong values");
	}
	return 0;
}