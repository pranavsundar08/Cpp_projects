// To write a program using cout- Name & Age of the person.//
#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	cout <<"Please enter your name:"; 
	getline(cin,name);
	cout <<"Your name is:"<< name << endl;

	string age;
	cout <<"Please enter your age:"; 
	getline(cin,age);
	cout <<"Your age is:"<< age;
	
	return 0;

}
	
