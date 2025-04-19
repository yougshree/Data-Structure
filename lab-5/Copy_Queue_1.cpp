/*Exercise 1:
CopyQueue
Write a program that copies the content one queue to another*/
#include <iostream>
#include "queue.h"
using namespace std;

void copyQueue( Queue &source, Queue &destination)
{
    Node*  temp= source.getFrontAddress();
    {
        while(temp!= nullptr)
        {
            destination.enqueue(temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    Queue q1, q2;
    int n, value;
    cout<<"Enter the number of elements in q1:";
    cin>>n;

    cout<<"Enter queue elements:";
    for(int i=0; i<n; i++)
    {
        cin>>value;
        q1.enqueue(value);
    }

    copyQueue(q1, q2);
    cout << "\nInput Data: ";
    q1.display();

    cout << "\nOutput (copy) Data: ";
    q2.display();

    return 0;
}
