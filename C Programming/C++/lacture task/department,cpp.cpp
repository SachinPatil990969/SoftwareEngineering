#include<iostream>
using namespace std;
class department{
	public:
		int id;
		string name;
		void depin(){
			cout<<"enter the id of department: ";
			cin>>id;
			cout<<"enter the name of department: ";
			cin>>name;
		}
		void depout(){
			cout<<id<<" is "<<name<<" department"<<endl;
		}
};
int main(){
	department d1;
	d1.depin();
	d1.depout();
	department d2;
	d2.depin();
	d2.depout();
	department d3;
	d3.depin();
	d3.depout();
	return 0;
}