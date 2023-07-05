#include<iostream>
using namespace std;
class add{
	public:
	int a,b,c;
	add(){
		cout<<"enter the value of a and b"<<endl;
		cin>>a>>b;
		c=a+b;
		cout<<"addition of a and b: "<<c<<endl;
	}
};
int main(){
	add sum;
	return 0;
}