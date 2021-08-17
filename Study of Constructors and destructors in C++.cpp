
//Program : Write a program in C++ to implement Stack. Design the class for stack and the operations to be performed on stack. Use Constructors and destructors. The objective of this assignment is to learn the concepts classes and objects, constructors and destructors

#include<iostream>
using namespace std;
#define MAX 1000
class Stack
{
   int top;
   public:
   int myStack[MAX]; //stack array
   Stack() { top = -1; }
   bool push(int x);
   int pop();
   bool isEmpty();
~Stack(){}
};

bool Stack::push(int item)
   {
      if (top >= (MAX-1)) {
      cout << "Stack Overflow!!!";
      return false;
   }
else {
   myStack[++top] = item;
   cout<<item<<endl;
   return true;
   }
}

int Stack::pop()
{
   if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
   }
else {
       int item = myStack[top--];
      return item;
   }
}

bool Stack::isEmpty()
{
   return (top < 0);
}


int main()
{
  Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(2);
   stack.push(4);
   stack.push(6);
   cout<<"The Stack Pop : "<<endl;
   while(!stack.isEmpty())
      {
      cout<<stack.pop()<<endl;
      }
   return 0;
}


