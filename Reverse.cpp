/* Program to reverse the user input number.*/


/* 1. Get input from the user.
   2. Apply while loop.(The loop will repeat until the value is greater than 0.
   3. Using this formula r=no%10, the we get the remainder for eg. 162%10 is '2'
   4. The remainder should be stored in the variable named r.
   5. Next step is applying rev= rev*10+r formula, in the case of first digit rev=0 as mentioned in the begining,in
   	  the rest of the cases rev is the answer of the previous rev*10+r.
   */

#include<iostream>
using namespace std;

int main(){

int no,rev=0,r,n;

cout<<"Please enter the number to be reversed: ";
cin>>n;

no=n;

while(no>0)
{
	r=no%10;
	rev= rev*10+r;
	no=no/10;
}
cout<<"The reversed number is= "<<rev;
return 0;
}
