#include<stdio.h>
main(){
	int a[5],b[5],c[10];
	int i,j,temp,ch;
	printf("\n enter first array of 5 element:");
	for(i=0;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter second array of 5 element:");
	for(j=0;j<5;j++){
		printf("\n enter b[%d]",j);
		scanf("%d",&b[j]);
	}
	for(i=0;i<5;i++){
		c[i]=a[i];
	}
	for(j=0;j<5;j++){
		c[i]=b[j];
		i++;
	}
	for(i=0;i<10;i++){
		printf("\n c[%d]=%d",i,c[i]);
	}
	printf("\nenter 1 for decending or 2 for accending order print:");
	scanf("%d",&ch);
	switch(ch){
	case 1:
	printf("\n Decending order of merged array:");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(c[i]<c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("\n c[%d]=%d",i,c[i]);
	}
	break;
	case 2:
	printf("\n accending order of merged array:");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(c[i]>c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("\n c[%d]=%d",i,c[i]);
	}
	break;
	default:
		printf("\nwrong choice entered");
	}
}