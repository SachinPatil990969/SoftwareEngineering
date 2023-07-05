#include<stdio.h>
int main(){
	char f1[20],f2[20],f3[20];
	printf("enter the full name of person:");
	scanf("%s %s %s",&f1,&f2,&f3);
	printf("Abbreviated name of person:");
	printf("%c. %c. %s\n",f1[0],f2[0],f3);
	return 0;
}