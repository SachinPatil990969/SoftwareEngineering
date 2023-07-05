#include<stdio.h>
int main(){
	int i,co=0;
	printf("\nMon \tTue \tWen \tThu \tFri \tSat \tSun\n");
	printf("\n_____________________________________________________\n");
	for(i=1;i<=31;i++){
		printf("%d\t",i);
		co++;
		if(co==7){
			printf("\n");
			co=0;
		}
	}
}