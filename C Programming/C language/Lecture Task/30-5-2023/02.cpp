#include<stdio.h>
main(){
	char ch;
	printf("\Enter any character : ");
	scanf("%c",&ch);
	switch(ch)
	case 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U'{
		printf("%c is vowel",ch);}
	break;
	default;{
		printf("%c is consolant",ch);
	}
	break;
}