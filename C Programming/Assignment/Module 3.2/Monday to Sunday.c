#include<stdio.h>
main(){
	int ch;
	printf("\n Enter 1 for Monday");
	printf("\n Enter 2 for Tuesday");
	printf("\n Enter 3 for Wednesday");
	printf("\n Enter 4 for Thursday");
	printf("\n Enter 5 for Friday");
	printf("\n Enter 6 for Saturday");
	printf("\n Enter 7 for Sunday\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n Monday");
		break;
		case 2:
			printf("\n Tuesday");
		break;
		case 3:
			printf("\n Wednesday");
		break;
		case 4:
			printf("\n Thursday");
		break;
		case 5:
			printf("\n Friday");
		break;
		case 6:
			printf("\n saturday");
		break;
		case 7:
			printf("\n Sunday");
		break;
		default:
			printf("\n Wrong choice");
		break;
	}
}