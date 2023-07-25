#include<iostream>
using namespace std;
class maths{
	public:
		int a=85;
		void m1(){
			cout<<"marks of maths:"<<a<<endl;
	}
};
class phy{
	public:
		int b=92;
		void p1(){
			cout<<"marks of physics:"<<b<<endl;
		}
		
};
class student:public maths,public phy
{
	public:
		void s1(){
		cout<<"student name:sachin"<<endl;
	}
};
int main(){
	student obj;
	obj.s1();
	obj.m1();
	obj.p1();
	return 0;
}