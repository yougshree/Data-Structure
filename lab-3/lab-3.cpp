/*Exercise 3:
Write a program that reverses the contents of a stack (the top and bottom elements exchange
positions, the second and the element just before the bottom exchange positions, and so forth
until the entire stack is reversed). (Hint: Use temporary stacks.)*/
#include<iostream>
#include "Stack_ADT.h"

using namespace std;

//function to reversed the stack
void reverseStack( Stack &originalStack)
{
    Stack tempS1; //temp stack to hold the reversed element
    Stack tempS2; //another temp for further transfer

// do LIFO until the original is empty
    while(!originalStack.isEmpty())
    {
        tempS1.push(originalStack.popValue());
        // originalStack.popValue();
    }
//pop element to temp1 to temp2
    while (!tempS1.isEmpty())
    {
        tempS2.push(tempS1.popValue());
        // tempStack.popValue();
    }
// while temp2 is empty transfer the reversed element
    while (!tempS2.isEmpty())
    {
        originalStack.push(tempS2.popValue());
    }

}

int main()
{
    Stack s;

    int n, value;

    cout<<"Number of elements to push into the stack: ";
    cin>> n;

    cout<<"\nEnter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>> value;
        s.push(value);
    }

    cout<<"\nOriginal Stack: ";
    s.display();

    reverseStack(s);
    cout<<"\nReversed stack: ";
    s.display();

    return 0;
}
