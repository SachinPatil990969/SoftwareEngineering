#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the value of a and b:"<<endl;
	cin>>a>>b;
	cout<<"before swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}