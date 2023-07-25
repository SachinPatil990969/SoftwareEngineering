#include<iostream>
using namespace std;

class demo{
	public:
		int a,b,c,d;
		inline void mul(){
			//cout<<"enter value of a and b:";
			//cin>>a>>b;
			a=10,b=5;
			c=a*b;
			cout<<"Multiplication is "<<c<<endl;
		}
		inline void cub(){
			//cout<<"enter value of a ";
			//cin>>a;
			a=5;
			d=a*a*a;
			cout<<"Cube is "<<d<<endl;
		}
};
int main(){
	demo o1;
	o1.mul();
	demo o2;
	o2.cub();
	return 0;
}