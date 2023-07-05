#include<stdio.h>
int main(){
	int a[25],even[25],odd[25],i,j=0,k=0;
	printf("\n Enter 25 values ");
	for (i=0;i<25;i++){
		scanf("%d",&a[i]);
	if(a[i]%2==0){
		even[j]=a[i];
		j++;
	}
	else{
		odd[k]=a[i];
		k++;
	}
}
	printf("\n Even numbes are");
	for(i=0;i<j;i++){
		printf("\n%d",even[i]);
	}
	printf("\n odd numbes are");
	for(i=0;i<k;i++){
		printf("\n%d",odd[i]);
	}
}
