#include<iostream>
using namespace std;
class details{
	public:
		details(string a, int b){
		cout<<"enter the name of student:";
		cin>>a;
		cout<<"enter the ID no of details:";
		cin>>b;
		cout<<"Name of student:"<<a<<endl;
		cout<<"ID no of student:"<<b<<endl;
		}
};

int main(){
	string a;
	int b;
	details obj(a, b);
	return 0;
}