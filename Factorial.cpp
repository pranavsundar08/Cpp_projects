/*To find the factorial of the given number.

Algorithm of the program.

1. Get the user input.
2. */


#include<iostream>
using namespace std;

int main(){
	int i,n,fact=1;
	cout<<"Please enter any positive integer: ";
	cin>>n;
	
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of the given number is= "<<fact;
	return 0;
}
