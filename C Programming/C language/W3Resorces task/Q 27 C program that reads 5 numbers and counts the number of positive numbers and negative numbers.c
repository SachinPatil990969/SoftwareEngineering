#include<stdio.h>
int main(){
	int a[5],i,po=0,ne=0;
	for(i=0;i<5;i++){
		printf("\n Enter num:");
		scanf("%d",&a[i]);
		if(a[i]>0){
			po++;
		}
		else if(a[i]<0){
			ne++;
		}
	}
	printf("Total positive numbers are %d\n",po);
	printf("Total negative numbers are %d\n",ne);
	return 0;
}