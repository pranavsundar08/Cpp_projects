// Table creation to find the sum and average of the result.

#include<iostream>
using namespace std;

int main(){
	
	float mark [5];
	int i;
	float sum=0, avg;
	
	cout<<"Enter the marks for your subjects: \n\n";
	for(i=0;i<5;i++)
{
	cout<<"Enter the marks of your subjects ["<<i+1<<"]= ";
	cin>>mark[i];
	sum=sum+mark[i];
}
	avg = sum/5;
	cout<<"The average of 5 subjects is= \t"<<avg<<endl;
	
	if (avg>=80)
	{
		cout<<"/n/n The student has secured [A] grade !!";
	}
		else if (avg>50 && avg<80)
	{
		cout<<"/n/n The student has secured [B] grade !!";
	}
		else
	{
		cout<< "The student has secured [C] grade !!";
	}
 
	
}

