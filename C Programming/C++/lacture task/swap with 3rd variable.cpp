#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the value of a and b:";
	cin>>a>>b;
	cout<<"before swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"after swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}