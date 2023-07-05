#include <stdio.h>
void reverse(){
	char c;
	scanf("%c",&c);
	if (c!='\n'){
		reverse();	
	}
	printf("%c",c);
}
main(){
	printf("\n Enter String :");
	reverse();
	return 0;
}