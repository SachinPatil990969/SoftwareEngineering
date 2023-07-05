#include<stdio.h>
main(){
	int i,j;
	char E, al='A';
	for (i=1;i<=('E'-'A'+1);i++){
		for (j=1;j<=i;j++){
		printf("%c",al);
	}
	al++;
	printf("\n");
	}
}