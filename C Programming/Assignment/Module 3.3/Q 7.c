#include <stdio.h>
#include<string.h>
main(){
	char str[20];
	int i=0;
	printf("\n Enter the string :");
	gets(str);
	while (str[i]!='\0'){
		i++;
	}
	printf("\n Length of String = %d",i);
	return 0;
}