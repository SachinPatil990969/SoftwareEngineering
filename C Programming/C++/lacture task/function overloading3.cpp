#include<iostream>
using namespace std;
class demo{
	public:
		void add(int x,int y){
			cout<<"enter value of x and y"<<endl;
			cin>>x>>y;
			cout<<"addition is "<<x+y<<endl;
		}
		void add(int x,int y,int z){
			cout<<"enter value of x, y and z"<<endl;
			cin>>x>>y>>z;
			cout<<"addition is "<<x+y+z<<endl;
		}
};
int main(){
	int x,y,z;
	demo obj;
	obj.add(x,y);
	obj.add(x,y,z);
	return 0;
}