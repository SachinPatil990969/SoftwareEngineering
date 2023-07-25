#include<iostream>
using namespace std;
inline void multiplication(){
		int a,b;
		cout<<"enter two values to multiple:";
		cin>>a>>b;
		cout<<"multiplication of two value is:"<<a*b<<endl<<endl;;
}
inline void cub(){
		int a;
		cout<<"enter number to find cub:";
		cin>>a;
		cout<<"cub of number is:"<<a*a*a;
}
int main(){
	multiplication();
	cub();
	return 0;
}