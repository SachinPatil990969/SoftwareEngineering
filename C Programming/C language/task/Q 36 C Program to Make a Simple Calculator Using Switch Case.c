#include<stdio.h>
int main(){
	int x1,x2;
	float x;
	char ch;
	printf("enter the operation choice(+,-,*,/,module):");
	scanf("%c",&ch);
	printf("enter 2 values:");
	scanf("%d%d",&x1,&x2);
	switch(ch){
		case '+': printf("%d + %d = %d",x1,x2,x1+x2);
				  break;
		case '-': printf("%d + %d = %d",x1,x2,x1-x2);
				  break;
		case '*': printf("%d * %d = %d",x1,x2,x1*x2);
				  break;
		case '/': printf("%d / %d = %0.2f",x1,x2,(float)x1/x2);
				  break;
		case '%': printf("%d module %d = %d",x1,x2,x1%x2);
				  break;		  
		default : printf("wrong choice");
	}
	return 0;
}