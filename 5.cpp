#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<" Question #05"<<endl<<endl;
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	if(a%b==0){
		cout<<a<<" is a multiple of "<<b<<endl;
	}
	else if(b%a==0){
		cout<<b<<" is a multiple of "<<a<<endl;
	}
	else{
		cout<<"Neither "<<a<<" nor "<<b<<" are multiples of eachother."<<endl;
	}
	return 0;
}

