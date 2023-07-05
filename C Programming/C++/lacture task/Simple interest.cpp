#include<iostream>
using namespace std;
int main(){
	int n,p,r,in;
	cout<<"enter the principle amount, rate of interest and time period:"<<endl;
	cin>>p>>r>>n;
	in=n*p*r/100;
	cout<<"simple interest:"<<in<<endl;
	return 0;
}