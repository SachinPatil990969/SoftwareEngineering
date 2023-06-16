#include<stdio.h>
main(){
	int i,x,oddsum=0,evensum=0,te=0,to=0;
	printf("Enter any 10 num:");
	for(i=1;i<=10;i++){
		printf("\n enter %d number :",i);
		scanf("%d",&x);
		if(x%2==0){
			printf("\t\t\t %d is even num",x);
			evensum=evensum+x;
			te++;
		}
		else{
			printf("\t\t\t %d is odd num",x);
			oddsum=oddsum+x;
			to++;
		}
	}
	printf("\n total %d num are the even num",te);
	printf("\n total %d num are the odd num",to);
	printf("\n even num sum is %d",evensum);
	printf("\n odd num sum is %d",oddsum);
}