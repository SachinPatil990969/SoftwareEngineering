#include<stdio.h>
int main(){
	int id,hr,salary;
	float totalsalary;
	printf("\n Enter the ID number of employee:");
	scanf("%d",&id);
	printf("\n Enter the worked hour in month:");
	scanf("%d",&hr);
	printf("\n Enter the salary per hour:");
	scanf("%d",&salary);
	printf("\n The employee ID :%d\n",id);
	totalsalary=hr*salary;
	printf("Total salary is :%.2f",totalsalary);
	return 0;
}