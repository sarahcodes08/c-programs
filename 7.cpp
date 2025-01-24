#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<" Question #07"<<endl<<endl;
	float weight, height, bmi;
	cout<<"Enter your weight(in pounds) and height(in inches): "<<endl;
	cin>>weight>>height;
	bmi=(weight/(height*height))*703;
	cout<<"Your body mass index(bmi) is "<<bmi<<endl<<endl;
	cout<<"BMI VALUES"<<endl;
	cout<<"\tUnderweight: less than 18.5"<<endl;
	cout<<"\tNormal: between 18.5 and 24.9"<<endl;
	cout<<"\tOverweight: between 25 and 29.9"<<endl;
	cout<<"\tObese: 30 or greater"<<endl<<endl;
	if(bmi<18.5){
		cout<<"You are underweight."<<endl;
	}
	else if(bmi>=18.5 && bmi<=24.9){
		cout<<"You are normal."<<endl;
	}
	else if(bmi>=25 && bmi<=29.9){
		cout<<"You are overweight."<<endl;
	}
	else{
		cout<<"You are obese."<<endl;
	}
}

