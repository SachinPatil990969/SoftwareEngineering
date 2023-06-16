#include<stdio.h>
int main(){
	int ch1,ch2,ch3,ch4,total=0,num;
	char ch;
	printf("\n Welcome to Food Cart ");
	printf("Please select the food to order");
	lable:{
	printf("\n Press 1 for Pizza; Press 2 for Burger; Press 3 for Francky; Press 4 for Coke: ");
	scanf("%d",&ch1);
	switch(ch1){
		case 1:printf("\n Press 1 for small pizza; Press 2 for Medium Pizza; Press 3 for Large Pizza: ");
		scanf("%d",&ch2);
		switch(ch2){
			case 1: printf("\n Your Small pizza will cost 99rs");
			printf(" Enter the quantity of Pizza you want: ");
			scanf("%d",&num);
			total=total+(99*num);
			break;
			case 2: printf("\n Your Medium pizza will cost 169rs");
			printf(" Enter the quantity of Pizza you want: ");
			scanf("%d",&num);
			total=total+(169*num);
			break;
			case 3: printf("\n Your large pizza will cost 219rs");
			printf(" Enter the quantity of Pizza you want: ");
			scanf("%d",&num);
			total=total+(219*num);
			break;
			default: printf("\n Wrong Choice");
		}
		break;
		case 2:printf("\n Press 1 for small Burger; Press 2 for Medium Burger; Press 3 for Large Burger: ");
		scanf("\n%d",&ch3);
		switch(ch3){
			case 1: printf("\n Your Small Burger will cost 69rs");
			printf(" Enter the quantity of Burger you want: ");
			scanf("%d",&num);
			total=total+(69*num);
			break;
			case 2: printf("\n Your Medium Burger will cost 109rs");
			printf(" Enter the quantity of Burger you want: ");
			scanf("%d",&num);
			total=total+(109*num);
			break;
			case 3: printf("\n Your large Burger will cost 199rs");
			printf(" Enter the quantity of Burger you want: ");
			scanf("%d",&num);
			total=total+(199*num);
			break;
			default: printf("\n Wrong Choice");
		}
		break;
		case 3:printf("\n Your Francky will cost 59rs");
		printf(" Enter the quantity of Francky you want: ");
		scanf("%d",&num);
		total=total+(59*num);
		break;
		case 4:printf("\n Press 1 for 500ml bottle; Press 2 for 1lt Bottle; Press 3 For 1.5lt Bottle: ");
		scanf("\n%d",&ch4);
		switch(ch4){
			case 1: printf("\n Your 500ml Bottle will cost 35rs");
			printf(" Enter the quantity of Bottle you want: ");
			scanf("%d",&num);
			total=total+(35*num);
			break;
			case 2: printf("\n Your 1lt will cost 58rs");
			printf(" Enter the quantity of Bottle you want: ");
			scanf("%d",&num);
			total=total+(58*num);
			break;
			case 3: printf("\n Your 1.5lt will cost 89rs");
			printf(" Enter the quantity of Bottle you want: ");
			scanf("%d",&num);
			total=total+(89*num);
			break;
			default: printf("\n Wrong Choice");
		}
		break;
		default : printf("\n Wrong choice");
	}
}
	printf("\n Would you like to add more items");
	printf("\n Press y to add more items or Press n to go to Total: ");
	scanf("%s",&ch);
	if(ch=='y'){
		goto lable;
	}
	else if(ch=='n'){
		printf("\n Your Total will be %d",total);
		printf("\n Thank you for visit");
	}
	else {
		printf("\n Wrong Choice");
		printf("\n Your Total will be %d",total);
		printf("\n Thank you for visit");
	}
	return 0;
}