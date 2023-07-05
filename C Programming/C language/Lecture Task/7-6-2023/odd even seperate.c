#include<stdio.h>
main(){
	int a[10],even[10],odd[10];
	int i,j,e=0,o=0;
	for(i=0;i<10;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even[e]=a[i];
			e++;
		}
		else{
			odd[o]=a[i];
			o++;
		}
	}
	printf("\n even element of array:");
	for(i=0;i<e;i++){
		printf("\n even[%d]=%d",i,even[i]);
	}
	printf("\n odd element of array:");
	for(i=0;i<o;i++){
		printf("\n odd[%d]=%d",i,odd[i]);
	}
}