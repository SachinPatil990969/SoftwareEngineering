#include<stdio.h>
int main(){
	int x,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;
	printf("enter the amount:");
	scanf("%d",&x);
	while(x>=2000){
		r1=x/2000;
		x=x%2000;
		break;
	}
	while(x>=500){
		r2=x/500;
		x=x%500;
		break;
	}
	while(x>=100){
		r3=x/100;
		x=x%100;
		break;
	}
	while(x>=50){
		r4=x/50;
		x=x%50;
		break;
	}
	while(x>=20){
		r5=x/20;
		x=x%20;
		break;
	}
	while(x>=10){
		r6=x/10;
		x=x%10;
		break;
	}
	while(x>=5){
		r7=x/5;
		x=x%5;
		break;
	}
	while(x>=2){
		r8=x/2;
		x=x%2;
		break;
	}
	while(x>=1){
		r9=x;
		break;
	}
	printf("total num of 2000 notes:%d\n",r1);
	printf("total num of 500 notes:%d\n",r2);
	printf("total num of 100 notes:%d\n",r3);
	printf("total num of 50 notes:%d\n",r4);
	printf("total num of 20 notes:%d\n",r5);
	printf("total num of 10 notes:%d\n",r6);
	printf("total num of 5 notes:%d\n",r7);
	printf("total num of 2 notes:%d\n",r8);
	printf("total num of 1 notes:%d\n",r9);
	printf("total num of notes required:%d",r1+r2+r3+r4+r5+r6+r7+r8+r9);
	return 0;
}