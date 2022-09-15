/*Factorial program using recurrive method*/

#include<iostream>
using namespace std;

int fact(int a){
	if (a==1)
	{
		return(1);
	}
	else{
		return(a*fact(a-1));
		
	}
}

int main(){
	int a, ans;
	cout<<"Please enter an integer= ";
	cin>>a;
	ans= fact(a);
	cout<<"Your factorial output is= "<<ans;
}
