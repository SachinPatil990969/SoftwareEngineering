#include<iostream>
using namespace std;

class add{
	public:
	int a,b,c;
	add(int a,int b){
		c=a+b;
		cout<<"Addition is "<<c<<endl;
	}	
};
class sub{
	public:
	int a,b,c;
	sub(int a,int b){
		c=a-b;
		cout<<"Substraction is "<<c<<endl;
	}	
};
class mul{
	public:
	int a,b,c;
	mul(int a,int b){
		c=a*b;
		cout<<"Multiplication is "<<c<<endl;
	}	
};
class di{
	public:
	int a,b;
	float c;
	di(int a,int b){
		c=(float)a/b;
		cout<<"Division is "<<c<<endl;
	}		
};
class modulo{
	public:
		int a,b,c;
		modulo(int a,int b){
			c=a%b;
			cout<<"Modulo is "<<c<<endl;
		}
};
int main(){
	int a,b;
	cout<<"enter value of a and b:";
	cin>>a>>b;
	add s1(a,b);
	sub s2(a,b);
	mul s3(a,b);
	di s4(a,b);
	modulo s5(a,b);
	return 0;
}