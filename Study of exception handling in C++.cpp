//Program : Write a C++ program for exception handling using try, catch block

#include <iostream>
using namespace std;
int main() {
	int numerator,denominator,result;
	cout<<"enter numerator & denominator\n";
	cin>> numerator>>denominator;

	try
	{
		if(denominator==0)
		throw denominator;
		result=numerator/denominator;
    	 }
    
    	catch(int e)
    	{
    		cout<<"don’t try to divide by zero!!!";
	}
	cout<<"division is"<<result;
	return 0;
}
