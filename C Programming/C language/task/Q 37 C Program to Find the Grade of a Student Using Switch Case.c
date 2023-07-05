#include<stdio.h>
int main(){
	int mark;
	printf("enter the mark between 0 to 100:");
	scanf("%d",&mark);
	switch(mark/10){
	case 10:
		printf("The grade of student:A");
		break;	
	case 9:
		printf("The grade of student:A");
		break;	
	case 8:
		printf("The grade of student:B");
		break;
	case 7:
		printf("The grade of student:C");
		break;
	case 6:
		printf("The grade of student:D");
		break;
	case 5:
		printf("The grade of student:E");
		break;
	case 4:
		printf("The grade of student:E--");
		break;
	default :
		printf("The grade of student:F");
		break;
	}
	return 0;
}