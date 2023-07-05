#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	printf("\n Enter String :");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	(strcmp(str1,str2)==0)?printf("\n Given String is Palindrome"):printf("\n Given String is not palindrom");
	return 0;
}