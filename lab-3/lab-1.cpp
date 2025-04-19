/*Exercise 1:
Write the program called copyStack that copies the contents of one stack into another. The
algorithm passes two stacks, the source stack and the destination stack. The order of the stacks
must be identical.*/
#include <iostream>
#include "stack_adt.h"
using namespace std;

void copyStack(Stack& source, Stack& destination)
{
    Stack tempStack;
// Transfer elements from source to tempStack
    while(!source.isEmpty())
    {
        tempStack.push(source.popValue());
    }
    while(!tempStack.isEmpty())
    {
        destination.push(tempStack.popValue());
    }

}


int main()
{
    Stack source, destination;
    int n, value;

    cout<<"Enter number of elements for the source stack: ";
    cin>> n;
    cout<<"\nEnter elements for source stack: ";
    for(int i=0; i<n; i++)
    {
        cin>>value;
        source.push(value);

    }
    cout<<"\nSource stack: ";
    source.display();

    copyStack(source, destination);

    cout<<"\nCopy stacks: ";
    source.display();

    cout<<"\nDestination Stack: ";
    destination.display();

    return 0;


}
