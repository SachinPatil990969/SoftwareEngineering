#include<iostream>
using namespace std;
class demo{
	private:
	int a,b,c;
	public:
	demo(int x,int y){
		a=x;
		b=y;
		c=a+b;
		cout<<"addition "<<c;
	}	
};
int main(){
	demo obj(10,20);
	return 0;
}