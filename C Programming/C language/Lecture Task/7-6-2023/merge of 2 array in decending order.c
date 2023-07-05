#include<stdio.h>
main(){
	int a[5],b[5],c[10];
	int i,j,temp;
	for(i=0;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
	}
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
}