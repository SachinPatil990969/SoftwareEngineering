#include<iostream>
#include<string.h>
using namespace std;
class eventmnmt{
	public:
		int guestnum, minute;
		string event, custfname, custlname;
		void input(){
//			in this function we will take only the input from the user
			cout<<"****************Event Management System****************"<<endl<<endl;
			cout<<"Enter  the name of Event:"<<endl;
			cin>>event;
			cout<<"Enter the customer's first and last name:"<<endl;
			cin>>custfname>>custlname;
			cout<<"Enter the number of guests:"<<endl;
			cin>>guestnum;
			cout<<"Enter the number of minutes in the event:"<<endl;
			cin>>minute;
		}
};
class process:public eventmnmt{
	public:
		 const double CostPerHour = 18.50;
		 const double CostPerMinute = 0.40;
		 const double CostOfDinner = 20.70;
		 double cost1, cost2, costForOneServer, TotalFoodCost, AverageCost, TotalCost, DepositAmount;
		 int NumberOfServers;
		 void Calculation(){
//		 	in this fuction we will calculate all the cost which will come in total cost
		 	NumberOfServers = guestnum / 20;
		 	cost1 = (minute / 60) * CostPerHour;
			cost2 = (minute % 60) * CostPerMinute;
			costForOneServer = cost1 + cost2;  //This will be the cost for one server for required minutes
			
			TotalFoodCost = guestnum * CostOfDinner;  //This will be the total food cost according to the number of guests
			
			AverageCost = TotalFoodCost / guestnum;  //this will be the average food cost per guest
			
			TotalCost = TotalFoodCost + (costForOneServer * NumberOfServers);  //This will be the final cost for the event
			
			DepositAmount = TotalCost * 0.25;  //This will be the deposit ammount that custmer have to pay in advance to reserve the event
			
		 }
};
class output:public process{
	public:
		void out(){
//			in this function we will display different cost for better understanding to customer
			cout<<"============== Event estimate for : "<<custfname<<" "<<custlname<<"=============="<<endl;
			cout<<"Number of Servers : "<<NumberOfServers<<endl;
			cout<<"The cost for Servers : "<<costForOneServer<<endl;
			cout<<"The cost for Food : "<<TotalFoodCost<<endl;
			cout<<"Average cost per person : "<<AverageCost<<endl<<endl;
			cout<<"Total cost : "<<TotalCost<<endl;
			cout<<"Please deposit a 25% deposit to reserve the event."<<endl;
			cout<<"The deposit needed is :"<<DepositAmount<<endl;	
		}
};
int main(){
	output obj;
	obj.input();
	obj.Calculation();
	obj.out();
	return 0;
}