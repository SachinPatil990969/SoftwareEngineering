#include<stdio.h>
int main(){
	int num,a1,a2,a3,a4,a5,a6,a7;
	printf("\n Enter the amount:");
	scanf("%d",&num);
	a1=num/100;
	a2=(num-a1*100)/50;
	a3=(num-a1*100-a2*50)/20;
	a4=(num-a1*100-a2*50-a3*20)/10;
	a5=(num-a1*100-a2*50-a3*20-a4*10)/5;
	a6=(num-a1*100-a2*50-a3*20-a4*10-a5*5)/2;
	a7=(num-a1*100-a2*50-a3*20-a4*10-a5*5-a6*2);
	printf("%d notes of 100 rs\n",a1);
	printf("%d notes of 50 rs\n",a2);
	printf("%d notes of 20 rs\n",a3);
	printf("%d notes of 10 rs\n",a4);
	printf("%d notes of 5 rs\n",a5);
	printf("%d notes of 2 rs\n",a6);
	printf("%d notes of 1 rs\n",a7);
}