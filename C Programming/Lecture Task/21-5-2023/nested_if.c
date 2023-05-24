#include<stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n Enter marks of Maths, Phy, Chem:");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths>=65 && phy>=55 && chem>=50)
	{
		total=maths+phy+chem;
		subtotal=maths+phy;
		if(total>=190 || subtotal>=140)
		{
		printf("\n Eligibile for admission");
		}
	else{
		printf("\n Not eligible for admission");
		}
	}
	else{
		printf("\n Not eligible for admission");
	}
}