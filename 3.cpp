#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<" Question #03"<<endl<<endl;
	int total_seconds,hour,minutes,seconds;
	cout<<"Enter the total time elapsed in seconds: ";
	cin>>total_seconds;
	hour=total_seconds/3600;
	minutes=(total_seconds%3600)/60;
	seconds=total_seconds%60;
	cout<<"Total time elapsed is "<<hour<<" : "<<minutes<<" : "<<seconds<<endl;
	return 0;
}

