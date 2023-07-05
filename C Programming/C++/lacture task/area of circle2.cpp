#include<iostream>
using namespace std;
class area{
	public:
		float r,ans;
		area(){
			cout<<"enter the radius"<<endl;
			cin>>r;
			ans=3.14*r*r;
			cout<<"area of circle"<<ans<<endl;
		}
};
int main(){
	area s;
	return 0;
}