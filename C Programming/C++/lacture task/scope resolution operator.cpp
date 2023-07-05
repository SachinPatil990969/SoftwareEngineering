#include<iostream>
using namespace std;
class area{
	public:
		float r,ans;
		void a();
};
void area::a(){
			cout<<"enter the radius"<<endl;
			cin>>r;
			ans=3.14*r*r;
			cout<<"area of circle "<<ans<<endl;
		}
int main(){
	area s;
	s.a();
	return 0;
}