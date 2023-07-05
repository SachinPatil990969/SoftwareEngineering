#include<stdio.h>
#include<string.h>

int main(){
	char x1[50],x2[50],x3[50],c,a;
	int ch,i,x=0;
	fun:{
	printf("\nenter 1 to reverse the string.");
	printf("\nenter 2 to concatenation of 2 strings.");
	printf("\nenter 3 to check string is palindrome or not.");
	printf("\nenter 4 to copy string to other string.");
	printf("\nenter 5 to check lenght of string.");
	printf("\nentet 6 to check frequency of the character in string.");
	printf("\nenter 7 to find number of vowels and consonants in string.");
	printf("\nenter 8 to find number of blank spaces and digits in string.\n\n");
	printf("\Please enter the choice to perform the operation:");
	scanf("%d",&ch);
	gets(x1);
	switch(ch){	
		case 1:
			printf("\nEnter the string:");
			scanf("%s",&x1);
			printf("\n");
			printf("Reverese of the string is %s\n",strrev(x1));
			break;
		case 2:
			printf("\nEnter the 1st string:");
			scanf("%s",&x1);
			printf("\nEnter the 2nd string:");
			scanf("%s",&x2);
			strcat(x1,x2);
			printf("concatenation of 2 strings is %s\n",x1);
		break;
		case 3:
			printf("\nEnter the string:");
			scanf("%s",&x1);
			strcpy(x2,x1);
			strrev(x1);
			(strcmp(x1,x2)==0)?printf("Given String is Palindrome"):printf("Given String is not palindrom");
		break;
		case 4:
			printf("\nEnter the string:");
			scanf("%s",&x1);
			strcpy(x2,x1);
			printf("copied string is %s",x2);
		break;
		case 5:
			printf("\nEnter the string:");
			scanf("%s",&x1);
			printf("\nThe lenght of the string is %d\n",strlen(x1));
		break;
		case 6:
			printf("\nEnter the string:");
			scanf("%s",&x1);
			printf("\nEnter the character to check its frequency:");
			scanf("%s",&c);
			for(i=0;x1[i]!=0;i++){
				if(x1[i]==c){
				x++;
			}
		}
		printf("\n%c is used %d times in string",c,x);
		break;
		case 7:
			printf("\nEnter the string:");
			gets(x1);
			for(i=0;x1[i]!=0;i++){
				if((x1[i]>='a' && x1[i]<='z') || (x1[i]>='A' && x1[i]>='Z')){
					x++;
				}
			}
		printf("\nTotal vowels and consonant in the string are:%d",x);
		break;
		case 8:printf("\nEnter the string:");
			gets(x1);
			for(i=0;x1[i]!=0;i++){
				if ((x1[i]>='0' && x1[i]<='9') || (x1[i]==' ')){
					x++;
				}
			}
		printf("\nTotal blank spaces and digits in the string are:%d",x);
		break;
		default :
			printf("\nYou entered thr wrong choice, Please enter the correct choice.");
		break;
		}
	}
	printf("\nDo you want to continue.");
	printf("\nPress Y to continue:");
	scanf("%s",&a);
	if(a=='y' || a=='Y'){
		goto fun;
	}
}