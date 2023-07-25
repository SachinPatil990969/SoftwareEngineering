#include<iostream>
using namespace std;
class demo{
	public:
		double ans;
		void area(int a){
			cout<<"enter the side lenght of square:";
			cin>>a;
			ans=a*a;
			cout<<"area of square:"<<ans<<endl;
		}
		void area(int a,int b){
			cout<<"enter the lenght and width of rectangle:";
			cin>>a>>b;
			ans=a*b;
			cout<<"area of rectangle:"<<ans<<endl;
		}
		void area(double a){
			cout<<"enter the radius of circle:";
			cin>>a;
			ans=3.14*a*a;
			cout<<"area of circle:"<<ans<<endl;;
		}
		void area(double a,double b){
			cout<<"enter the base and height of triangle:";
			cin>>a>>b;
			ans=0.5*a*b;
			cout<<"area of triangle:"<<ans<<endl;
		}
};

int main(){
	int a,b;
	double c,d;
	demo obj;
	obj.area(a);
	obj.area(a,b);
	obj.area(c);
	obj.area(c,d);
	return 0;
}