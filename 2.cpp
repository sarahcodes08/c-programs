#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<" Question #02"<<endl<<endl;
	int a,b,c,sum,avg,prod;
	cout<<"Enter three different integers: ";
	cin>>a>>b>>c;
	sum=a+b+c;
	avg=(a+b+c)/3;
	prod=a*b*c;
	cout<<"Sum is "<<sum<<endl;
	cout<<"Average is "<<avg<<endl;
	cout<<"Product is "<<prod<<endl;
	if(a<b && a<c){
		cout<<"Smallest is "<<a<<endl;
	}
	if(b<a && b<c){
		cout<<"Smallest is "<<b<<endl;
	}
	if(c<a && c<b){
		cout<<"Smallest is "<<c<<endl;
	}
	if(a>b && a>c){
		cout<<"Largest is "<<a<<endl;
	}
	if(b>a && b>c){
		cout<<"Largest is "<<b<<endl;
	}
	if(c>a && c>b){
		cout<<"Largest is "<<c<<endl;
	}
	return 0;
}

