#include<iostream>
using namespace std;
class volume{
	public:
		int a,ans;
		volume(){
			cout<<"enter the side lenght of cube:";
			cin>>a;
			ans=a*a*a;
			cout<<"volume of cube:"<<ans<<endl;
		}
};
int main(){
	volume obj;
	return 0;
}