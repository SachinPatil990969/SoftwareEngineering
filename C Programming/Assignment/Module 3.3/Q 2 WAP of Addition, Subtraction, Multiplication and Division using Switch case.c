#include <stdio.h>
main(){
	int a,b,ch;
	float div;
	printf("enter 1 for Addition\n");
	printf("enter 2 for Subtraction\n");
	printf("enter 3 for Multiplication\n");
	printf("enter 4 for Division\n");
	printf("enter 5 for modulo\n");
	scanf("%d",&ch);
	printf("Enter the Value Of a and b :");
	scanf("%d %d",&a,&b);
	switch(ch){
		case 1:
			printf("Addition= %d",a+b);
		break;
		case 2:
			printf("Subtraction= %d",a-b);
		break;
		case 3:
			printf("Multiplication= %d",a*b);
		break;
		case 4:
			printf("Division= %.2f",(float)a/b);
		break;
		case 5:
			printf("Modulo= %d",a%b);
		break;
		default:
			printf("It's Wrong Choice");
		break;
	}
	return 0;
}