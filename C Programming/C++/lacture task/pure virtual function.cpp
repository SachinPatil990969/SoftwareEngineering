#include<iostream>
using namespace std;
// task:area of circle and square using pure virtual function
class area{
	public:
	virtual void a1()=0;
	void a2(){
		int r;
		float ans;
		cout<<"Enter the radius of circle:";
		cin>>r;
		ans=3.14*r*r;
		cout<<"Area of circle is "<<ans<<endl;
	}
	void a3(){
		int x,ans2;
		cout<<"Enter the side size of square:";
		cin>>x;
		ans2=x*x;
		cout<<"Area of square is "<<ans2<<endl;
	}
};
class area2:public area{
	public:
		void a1(){
			cout<<"ans is";
		}
};
int main(){
	area2 obj;
	obj.a2();
	obj.a3();
	return 0;
}