#include<iostream>
using namespace std;

class demo{
	public:
		void add(int x,int y){
			cout<<x<<' '<<y<<endl;
		}
		void add(int x,int y,int z){
			cout<<x<<' '<<y<<z<<endl;
		}
		void add(int x, double y){
			cout<<x<<' '<<y<<endl;
		}
		void add(double x,int y){
			cout<<x<<' '<<y<<endl;
		}
};
int main(){
	demo obj;
	obj.add(5,6);
	obj.add(5,6,7);
	obj.add(5,6.2);
	obj.add(6.8,2);
	return 0;
}