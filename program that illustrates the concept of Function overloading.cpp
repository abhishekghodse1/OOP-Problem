//Prac 02: Program for Function/Method Overloading

#include <iostream>

using namespace std;

void Swap(int&x,int&y)
{
int temp;
temp=x;
x=y;
y=temp;
}


void Swap(float &f1,float &f2)
{
float temp;
temp=f1;
f1=f2;
f2=temp;
}

void Swap(char &c1,char &c2)
{
char temp;
temp=c1;
c1=c2;
c2=temp;
}

int main()
{
// For Interger Variables
int a=10,b=20;
cout<<"Before Swapping value of int a = "<<a<<endl;
cout<<"Before Swapping value of int b = "<<b<<endl<<endl;

Swap(a,b);

cout<<"After Swapping value of a = "<<a<<endl;
cout<<"After Swapping value of b = "<<b<<endl;
cout<<"---------------------------------------------------"<<endl;
// For Float Variables
float x=5.75,y=25.45;
cout<<"Before Swapping value of float x = "<<x<<endl;
cout<<"Before Swapping value of float y = "<<y<<endl<<endl;

Swap(x,y);

cout<<"After Swapping value of float x = "<<x<<endl;
cout<<"After Swapping value of float y = "<<y<<endl;
cout<<"---------------------------------------------------"<<endl;

// For Char Variables
char ch1='M',ch2='N';

cout<<"Before Swapping value of float x = "<<ch1<<endl;
cout<<"Before Swapping value of float y = "<<ch2<<endl<<endl;

Swap(ch1,ch2);

cout<<"After Swapping value of float x = "<<ch1<<endl;
cout<<"After Swapping value of float y = "<<ch2<<endl<<endl;
return 0;
}
