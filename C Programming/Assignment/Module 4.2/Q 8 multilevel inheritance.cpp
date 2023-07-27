#include<iostream>
using namespace std;
class student{
	public:
    	int rnum;
    	void rol(){
        	cout<<"Enter the Roll Number:";
        	cin>>rnum;
    }
};
class test:public student{
	public:
    	int maths, sci;
    	void marks(){
        cout<<"Enter the marks of maths:";
        cin>>maths;
        cout<<"Enter the marks of Science:";
        cin>>sci;
    }
};
class result:public test{
	public:
    	void output(){
    	cout<<"Students result"<<endl<<endl;
    	cout<<"Roll Number: "<<rnum<<endl;
    	cout<<"Marks of Maths: "<<maths<<endl;
    	cout<<"Marks of Science: "<<sci<<endl;
    	cout<<"Total Marks obtained: "<<maths+sci<<endl;
    }
};
int main()
{
    result obj;
    obj.rol();
    obj.marks();
    cout<<endl;
    obj.output();
    return 0;
}
