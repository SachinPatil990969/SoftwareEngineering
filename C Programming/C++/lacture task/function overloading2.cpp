#include<iostream>
using namespace std;
class demo{
	public:
		void max(int x,int y){
			if(x>y){
				cout<<x<<" is max"<<endl;
			}
			else{
				cout<<y<<" is max"<<endl;
			}
		}
		void max(int x,int y,int z){
			if(x>y && x>z){
				cout<<x<<" is max"<<endl;
			}
			else if(y>x && y>z){
				cout<<y<<" is max"<<endl;
			}
			else{
				cout<<z<<" is max"<<endl;
			}
		}
		void max(int x,double y){
			if(x>y){
				cout<<x<<" is max"<<endl;
			}
			else{
				cout<<y<<" is max"<<endl;
			}
		}
		void max(double x,int y){
			if(x>y){
				cout<<x<<" is max"<<endl;
			}
			else{
				cout<<y<<" is max"<<endl;
			}
		}
};
int main(){
	demo obj;
	obj.max(5,7);
	obj.max(5,7,6);
	obj.max(5,6.2);
	obj.max(6.8,2);
	return 0;
}