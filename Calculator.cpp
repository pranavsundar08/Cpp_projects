//General calculator using two inputs.

#include<iostream>
#include<string>
using namespace std;

int add(int x,int y)
{
	return x+y;
	
}
 int subtract(int x,int y)
 {
 	return x-y;
 }
 int multiply(int x,int y)
 {
 	return x*y;

 }
  int main(){
  int x,y;
  
  	string operation;
  	cout<<"Please enter value of x: ";
  	cin>>x;
  	cout<<"Please enter the value of y: ";
  	cin>>y;
  	cout<<"Operation to be performed: ";
  	getline(cin,operation);
  	if (operation==add)
{	
	cout<<"The addition of x and y are ="<<add<<endl;
}	else if(operation==subtraction);
{
	cout<<"The subtraction of x and y are= "<<subtract<<endl;
}	else
{
	cout<<"The multiplication of x and y are= "<<multiply<<endl;
}
  }
