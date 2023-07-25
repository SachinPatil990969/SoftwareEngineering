#include<iostream>
using namespace std;
class demo{
	public:
		void add(int x,int y){
			cout<<"addition is "<<x+y<<endl;
		}
		void add(int x,int y,int z){
			cout<<"addition is "<<x+y+z<<endl;
		}
};
int main(){
	int x,y,z;
	demo obj;
	cout<<"enter value of x and y"<<endl;
	cin>>x>>y;
	obj.add(x,y);
	cout<<"enter value of x, y and z"<<endl;
	cin>>x>>y>>z;
	obj.add(x,y,z);
	return 0;
}