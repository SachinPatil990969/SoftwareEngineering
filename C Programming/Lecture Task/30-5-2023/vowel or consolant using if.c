#include<stdio.h>
main(){
	char ch;
	printf("\Enter any character : ");
	scanf("%c",&ch);
	if (ch=='a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U'){
		printf("%c is vowel",ch);
	}
	else {
		printf("%c is consolant",ch);
	}
}