//
//  main.cpp
//  HW_2
//
//  Created by Rupinder Kaur on 10/31/20.
//  Copyright © 2020 Rupinder Kaur. All rights reserved.
//


#include <iostream>
#include <cstdlib>
using namespace std;

// default capacity of the stack
#define SIZE 10

// Class for stack
class stack
{
   int *arr;
   int top;
   int capacity;

public:
   stack(int size = SIZE);       // constructor

   void push(int);
   int pop();
   int peek();

   int size();
   bool isEmpty();
   bool isFull();
};

// Constructor to initialize stack
stack::stack(int size)
{
   arr = new int[size];
   capacity = size;
   top = -1;
}

// Utility function to add an element x in the stack
void stack::push(int x)
{
    // check for stack overflow
   if (isFull())
   {
       cout << "OverFlow\nTry again\n";
       exit(EXIT_FAILURE);
   }

   cout << "Inserting: " << x << endl;
   arr[++top] = x;
}

// Utility function to pop top element from the stack
int stack::pop()
{
   // check for stack underflow
   if (isEmpty())
   {
       cout << "UnderFlow\nTry again\n";
       exit(EXIT_FAILURE);
   }

   cout << "Removing: " << peek() << endl;

   // decrease stack size by 1 and (optionally) return the popped element
   return arr[top--];
}

// Utility function to return top element in a stack
int stack::peek()
{
   if (!isEmpty())
       return arr[top];
   else
       exit(EXIT_FAILURE);
}

// Utility function to return the size of the stack
int stack::size()
{
   return top + 1;
}

// Utility function to check if the stack is empty or not
bool stack::isEmpty()
{
   return top == -1;   // or return size() == 0;
}

// Utility function to check if the stack is full or not
bool stack::isFull()
{
   return top == capacity - 1;   // or return size() == capacity;
}

// Stack implementation in C++
int main()
{
   stack pt(5);

   pt.push(3);
   pt.push(1);

   pt.pop();
   pt.pop();

   pt.push(2);

   cout << "Top element is: " << pt.peek() << endl;

   cout << "Stack size is: " << pt.size() << endl;

   pt.pop();

    if (pt.isEmpty()){
       cout << "Stack Is Empty\n";
        cout << "---------------------------------\n";}
   else
       cout << "Stack Is Not Empty\n";
    cout << "---------------------------------\n";

   return 0;
}
