#include<stdio.h>
#include<math.h>
int main(){
	float x1,y1,x2,y2,d1;
	printf("Enter the value of x1 and y1:");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2:");
	scanf("%f%f",&x2,&y2);
	d1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("\n Distance between points %0.4f",sqrt(d1));
	return 0;
}