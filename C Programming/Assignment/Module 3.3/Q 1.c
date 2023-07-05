#include<stdio.h>
void ans(){
	int i,a[10],max=0;
	for(i=0;i<10;i++){
		printf("\n Enter %d value :",i+1);
		scanf("%d",&a[i]);
		if(a[i]>=max){
			 max=a[i];
			}
	}
	printf("\n Maximum Number from array is %d",max);
}

main(){
	ans();
	return 0;
}