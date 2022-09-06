#include<iostream>
using namespace std;

int a, b, sum;
int add()
{
	cout<<"Please enter the value of a: ";
	cin>>a;
	cout<<"Please enter the value of b: ";
	cin>>b;
	sum=a+b;
	
	return sum;
}
	int main()
{
	int num{add()};
	cout<<"The answer for the addition is: "<<num;
}

