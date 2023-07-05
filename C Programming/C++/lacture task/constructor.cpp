#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
	public:
		demo(){
		a=10,b=15;
		}
	void display(){
		cout<<"value of a and b "<<a<<" "<<b<<endl;
	}
};
int main(){
	demo s;
	s.display();
	return 0;
}