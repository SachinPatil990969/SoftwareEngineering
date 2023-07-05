#include<stdio.h>
main(){
	int x,y,ch,i;
	printf("\n Enter the starting and ending point of range:");
	scanf("%d %d",&x,&y);
	printf("\n choose 1 for forward print:");
	printf("\n choose 2 for reverse print:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for(i=x;i<=y;i++)
			{
			printf("\n i=%d",x);
			x++;
		}
		break;
		case 2:
			for(i=y;i>=x;i--)
			{
				printf("\n i=%d",y);
				y--;
			}
		break;
		default:
			printf("\n wrong choice");
		break;
	}
}