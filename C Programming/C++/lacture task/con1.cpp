#include<iostream>
using namespace std;

class demo{
	public:
		int a,b,c;
	
	demo(int a){
		cout<<a<<endl;
	}
	demo(int a, int b){
		c=a+b;
		cout<<c<<endl;
	}
	void ans(){
		cout<<c<<endl;
	}
};

int main(){
	demo obj(10);
	demo obj1(10,20);
	obj1.ans();
	return 0;
}