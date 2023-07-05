#include<stdio.h>
int main(){
	float basic,da,hra,grosssalary;
	printf("enter the basic salary:");
	scanf("%f",&basic);
	if(basic<=25000){
		da=(basic*10)/100;
		hra=(basic*15)/100;
	}
	else if(basic<=40000){
		da=(basic*12)/100;
		hra=(basic*18)/100;
	}
	else{
		da=(basic*15)/100;
		hra=(basic*20)/100;
	}
	grosssalary=basic+da+hra;
	printf("Gross salary is: %0.2f",grosssalary);
	return 0;
}