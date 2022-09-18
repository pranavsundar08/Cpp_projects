//Program to find which is the largest number among the 3 inputs.

#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"Please enter the first integer= ";
	cin>>a;
	
	cout<<"Please enter the second integer= ";
	cin>>b;
	
	cout<<"Please enter the third integer= ";
	cin>>c;
	
	if(a>=b && a>=c)
	{
		cout<<"First integer is greater than other two integers"<<a;
	}
	
	if(b>=a && b>=c)
	{
		cout<<"Second integer is greater than other two integers"<<b;
	}

if(c>=a && c>=b)
	{
		cout<<"Third integer is greater than other two integers \n"<<c;
	}
return 0;
}
