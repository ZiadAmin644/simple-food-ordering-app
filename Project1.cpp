#include <iostream>
#include <cmath>
using namespace std;


int main()
{
cout<< "what do you want to eat?"<< endl;
string q1;
getline(cin,q1);
cout<<"what do you want to drink ?"<<endl;
string q2;
getline(cin,q2);
cout<<"what is the price of the food? "<<endl;
double q3;
cin>>q3;
cout<< "what is the price of the drink ?"<<endl;
double q4;
cin>>q4;
cout<<"Do you want anything else sir ?"<<endl;
string q5;
getline(cin,q5);

double q6=q4+q3;

cout<< "your order is :"<<q1<<"and"<<q2<<endl;
		return 0;
	
	
	
}








