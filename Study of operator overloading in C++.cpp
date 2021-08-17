//Program : Write a program in C++ to perform following operations on complex numbers Add, Subtract, Multiply, Divide. Use operator overloading for these operations. The objective of this assignment is to learn the concepts operator overloading. 


#include <iostream>
#include <math.h>
using namespace std;

class complex
{
	int real,img;
public:
	//Read Function
	void read()
	{
		cout<<"Enter real and imaginary part : ";
		cin>>real>>img;
	}
	//Display function
	void display()
	{
		int i;
		if(img>0)
			cout<<real<<"+i"<<img<<endl;
		else
		{
			i=-img;
			cout<<real<<"-i"<<i<<endl;
		}
	}
	//Operator Overloading
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);


};
complex complex :: operator+(complex c)
{
	complex sum;
	sum.real = real+c.real;
	sum.img = img+c.img;
	return (sum);
}
complex complex :: operator-(complex c1)
{
	complex diff;
	diff.real = real-c1.real;
	diff.img = img-c1.img;
	return (diff);
}
complex complex :: operator*(complex c1)
{
	complex product;
	product.real = (real*c1.real)-(img*c1.img);
	product.img = (img*c1.real)+(real*c1.img);
	return (product);
}
complex complex :: operator/(complex c1)
{

	float r,i,ii,din;
	din=(pow(c1.real,2))+pow(c1.img,2);
	complex c,c2;
	c2.real = c1.real;
	c2.img = -c1.img;
	c= (*this)*c2;
	r=c.real/din;
	i=c.img/din;
	cout<<"Quotient is : ";
	if(i>0)
	  cout<<r<<"+i"<<i<<endl;
	else
	{
		ii=-i;
		cout<<r<<"-i"<<ii<<endl;
	}
}
int main() {
	complex c,c1,ans;
	c.read();
	c1.read();
	ans = c+c1;//operator overloading
	cout<<"Sum is : ";ans.display();
	ans = c-c1;
	cout<<"Difference is : ";ans.display();
	ans = c*c1;
	cout<<"Product is : ";ans.display();
	ans = c/c1;
	return 0;
}

