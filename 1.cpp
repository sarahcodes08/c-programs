#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<" Question #01"<<endl<<endl;
	float u,a,t,s,v;
	cout<<"Enter the initial velocity (u) in ms-1: "<<endl;
	cin>>u;
	cout<<"Enter the acceleration of the object (a) in ms-2: "<<endl;
	cin>>a;
	cout<<"Enter the time that has elapsed (t) in seconds: "<<endl;
	cin>>t;
	v=u+a*t;
	s=u*t+0.5*a*pow(t,2);
	cout<<"The final velocity (v) is "<<v<<endl;
	cout<<"The distance traversed (s) is "<<s<<endl;
	return 0;
}

