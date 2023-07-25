#include<iostream>
using namespace std;

class calculator{
	public:
		int a,b,c,d,e,g;
		float f;
		void add(int a,int b){
			c=a+b;
			cout<<"Addition is "<<c<<endl;
		}
		void sub(int a,int b){
			d=a-b;
			cout<<"Substraction is "<<d<<endl;
		}
		void mul(int a,int b){
			e=a*b;
			cout<<"Multiplication is "<<e<<endl;
		}
		void div(int a,int b){
			f=(float)a/b;
			cout<<"Division is "<<f<<endl;
		}
		void modulo(int a,int b){
			g=a%b;
			cout<<"Modulo is "<<g<<endl;
		}
};
int main(){
	int a,b;
	cout<<"enter value of a and b:";
	cin>>a>>b;
	calculator obj;
	obj.add(a,b);
	obj.sub(a,b);
	obj.mul(a,b);
	obj.div(a,b);
	obj.modulo(a,b);
	return 0;
}