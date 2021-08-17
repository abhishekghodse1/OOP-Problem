Program : Write a program in C++ to perform following operations on complex numbers Add, Subtract, Multiply, Divide, Complex conjugate. Design the class for complex number representation and the operations to be performed. The objective of this assignment is to learn the concepts classes and objects. 


#include <iostream>
#include <math.h>
using namespace std;

class complex
{
	int real,img;
public:
	void display();
	void read();
	void add(complex);
	void subt(complex);
	void multiply(complex);
	complex multiply1(complex);
	void divide(complex);
	void conjugate();
};
//Read Function
void complex :: read()
{
	cout<<"Enter real and imaginary part : ";
	cin>>real>>img;
}
//Display function
void complex :: display()
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
//Function to Add
void complex :: add(complex c1)
{
	complex sum;
	sum.real = real+c1.real;
	sum.img = img+c1.img;
	cout<<"Sum is : ";
	sum.display();
}
//Function to Subtract
void complex :: subt(complex c1)
{
	complex diff;
	diff.real = real-c1.real;
	diff.img = img-c1.img;
	cout<<"Difference is : ";
	diff.display();
}
//Function to Multiply
void complex :: multiply(complex c1)
{
	complex product;
	product.real = (real*c1.real)-(img*c1.img);
	product.img = (img*c1.real)+(real*c1.img);
	cout<<"Product is : ";
	product.display();
}
//Function to Divide
void complex :: divide(complex c1)
{
	float r,i,ii,din;
	din=(pow(c1.real,2))+pow(c1.img,2);
	complex c,c2;
	c2.real = c1.real;
	c2.img = -c1.img;
	c= multiply1(c2);
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
complex complex :: multiply1(complex c1)
{
	complex product;
	product.real = (real*c1.real)-(img*c1.img);
	product.img = (img*c1.real)+(real*c1.img);
	return(product);
}
//Function to find conjugate
void complex :: conjugate()
{
	complex conj;
	conj.real = real;
	conj.img = -img;
	cout<<"Complex Conjugate is : ";
	conj.display();
}
int main() {
	complex c,c1;
	c.read();
	c1.read();
	c.add(c1); 
	c.subt(c1);
	c.multiply(c1);
	c.divide(c1);
	c.conjugate();
	c1.conjugate();
	return 0;
}

