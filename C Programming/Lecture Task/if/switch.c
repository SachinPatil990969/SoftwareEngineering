#include<stdio.h>
main(){
	int ch,r,l,b,rect,base,height;
	float area,tri;
	printf("\n Press 1 for area of circle:");
	printf("\n Press 2 for area of rectangle:");
	printf("\n Press 3 for area of triangle:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n enter radius:");
			scanf("%d",&r);
			area=3.14*r*r;
			printf("\n Area of circle=%f",area);
			break;
		case 2:
			printf("\n enter l and b:");
			scanf("%d %d",&l,&b);
			rect=l*b;
			printf("\n Area of rectangle=%d",rect);
			break;
		case 3:
			printf("\n enter base and height:");
			scanf("%d %d",&base,&height);
			tri=(base*height)/2;
			printf("\n Area of triangle=%f",tri);
			break;
		default:
			printf("\n Wrong choice");
			break;
	}
}