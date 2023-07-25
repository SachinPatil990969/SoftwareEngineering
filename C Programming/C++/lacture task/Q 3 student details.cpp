#include<iostream>
using namespace std;
class info{
	public:
		string a;
		int b;
		void s1(){
			cout<<"enter the name of student:";
			cin>>a;
			cout<<"enter the no of student:";
			cin>>b;
		}
};
class stream1:public info{
	public:
		string x;
		void st1(){
		cout<<"enter name of science stream student:";
		cin>>x;
	}
};
class stream2:public info{
	public:
		string x;
		void st2(){
		cout<<"enter name of commerce stream student:";
		cin>>x;
	}
};


int main(){
	stream1 obj;
	obj.st1();
	obj.s1();
	stream2 obj2;
	obj2.st2();
	obj2.s1();
	return 0;
}