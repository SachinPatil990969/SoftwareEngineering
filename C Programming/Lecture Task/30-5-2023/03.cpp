#include<stdio.h>
main(){
	int i,j,sum=0,n,sum2=0,x,sum3=0,cub,sum4=0;
	float avr=0;
	printf("\n Q1: first 10 natural numbers");
	printf("\n first 10 natural numbers are:");
	for (i=1;i<=10;i++)
	{      
		printf("%d ",i);
	}
		printf("\n");
	printf("\n--------------------------------------\n");
	
	printf("\n Q2: sum of first 10 natural numbers\n");
	for (i=1;i<=10; i++)
    {
        sum = sum+i;
        printf("%d ",i);    
    }
    printf("\nThe Sum is : %d\n", sum);
    printf("\n--------------------------------------\n");
    
	printf("\n Q3: n terms of natural numbers and their sum:\n");
	printf("Input number of terms : ");
   		scanf("%d",&n);
	printf("\n first %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum2=sum2+i;
   }
   	printf("\nThe Sum of %d natural numbers  : %d \n",n,sum2);
   	printf("\n--------------------------------------\n");
   	
	printf("\n Q4: program in C to read 10 numbers from the keyboard and find their sum and average:\n");
	printf("Enter any 10 num:");
	for(i=1;i<=10;i++){
		printf("\n enter %d number :",i);
		scanf("%d",&x);
		sum3=sum3+x;
	}
	avr=(float)sum3/10;
	printf("\n sum of 10 num: %d",sum3);
	printf("\n average of 10 num: %f",avr);
	printf("\n--------------------------------------\n");
	
	printf("\n Q5:program in C to display the cube of the number up to an integer:\n");
	printf("Input number of terms : ");
   	scanf("%d",&n);
	printf("\n cube of %d numbers are:\n",n);
	for(i=1;i<=n;i++)
   {
   	cub=i*i*i;
     printf("%d ",cub);
   }
   printf("\n--------------------------------------\n");
	
	printf("\n Q6:program in C to display the multiplication table for a given integer\n");
	printf("Input number of terms : ");
   	scanf("%d",&n);
	printf("\n table of %d numbers is:\n",n);
	for(i=1;i<=10;i++)
   {
   	 printf("%d X %d = %d \n",n,i,n*i);
   }
    printf("\n--------------------------------------\n");
	
	printf("\n Q7:program in C to display the multiplier table vertically from 1 to n\n");
	printf("Input number of terms : ");
   	scanf("%d",&n);
	printf("\n table of %d numbers are:\n",n);
	for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
	    printf("%dx%d = %d, ",j,i,i*j);
      }
     printf("\n");
    }
    printf("\n--------------------------------------\n");
	
	printf("\n Q8:C program to display the n terms of odd natural numbers and their sum:\n");
	printf("Input number of terms : ");
   	scanf("%d",&n);
   	printf("\nThe odd numbers are :");
  	 for(i=1;i<=n;i++)
  	 {
  	   printf("%d ",2*i-1);
  	   sum4+=2*i-1;
  	 }
  	 printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum4);
}