#include <stdio.h>
int main() {
	float  x,y,z,p,a;
    printf("\nInput the first number: "); 
    scanf("%f",&x);
    printf("\nInput the second number: ");
    scanf("%f",&y);
    printf("\nInput the third number: ");
    scanf("%f",&z);
    if(x<(y+z) && y<(x+z) && z<(y+x)){
		p=x+y+z;
		printf("\nPerimeter  = %.1f",p);
	}
    else {
    	printf("Not possible to create a triangle..!");
	}
}