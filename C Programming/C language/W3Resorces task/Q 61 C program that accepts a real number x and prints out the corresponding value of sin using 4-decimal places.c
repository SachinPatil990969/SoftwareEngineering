#include<stdio.h> 
#include<math.h>
int main(){
    double x,ans;
    printf("\nInput value of x:");
    scanf("%lf",&x);
    if(x!=0.0){
      ans=sin(1/x);
      printf("Value of sin(1/x) is %0.4lf\n",ans);
    }
    else{
      printf("Value of x should not be zero.");
    }
   return 0;
}