/*Program to find the prime numbers

Algorithm for the program
1. Get the user input as an positive integer
2. The input should be denoted as n.
3. If n= 1, print the output as the least prime number.
4. Apply for loop where (i=2;i<n ;i++)
5. If the i value has the remainder 0, then print it is a prime number else it is not a prime number.

*/

#include<iostream>
using namespace std;

int main(){
	int i,n;
	
	cout<<"Please enter any positive integer: ";
	cin>>n;
	
	if(n==1)
	{
		cout<<"It is the least prime number";
	}
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"The given number is not a prime number"<< n;
			break;  
		}
	}
	if(n==i)
	{
		cout<<"The given number is prime number";
	}
}

