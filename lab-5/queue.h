#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int d)
    {
        data=d;
        next=nullptr;
    }
};
//queue class
class Queue
{
public:
    Node* Front= nullptr, *rear=nullptr;
//enqueu
    void enqueue(int data)
    {
        Node*newnode= new Node(data);
        if(Front==nullptr)
        {
            Front=newnode;
            rear=newnode;

        }
        else
        {
            Node*temp= Front;
            while(temp->next!= nullptr)
            {
                temp=temp-> next;
            }
            temp->next= newnode;
            rear= newnode;
        }
    }
//dequeue
    void dequeue()
    {
        if(Front== nullptr)
        {
            rear=nullptr;
        }

        else
        {
            Node*temp= Front;
            Front= Front->next;
            delete temp;
        }
    }
// size of queue
    int size()
    {
        int count=0;
        Node*temp=Front;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
// check empty
    bool isEmpty()
    {
        return Front==nullptr; //if head is null the list is empty
    }
//Return front address
    Node *getFrontAddress()
    {
        return Front;
    }
// rear value
    int getRear()
    {
        if(rear==nullptr)
        {
            cout<<"QUEUE is EMPTY";
            return -1;
        }
        return rear->data;
    }

//Return rear address
    Node *getRearAddress()
    {
        return rear;
    }
//destroy queue
    void destroyQueue()
    {
        if(Front!=nullptr)
        {
            Node *temp=Front;
            Front=Front->next;
            delete temp;
        }
        rear=nullptr;
    }
//for display
    void display()
    {
        Node*temp=Front;
        while(temp!=nullptr)
        {
            cout<< temp->data<< " ";
            temp= temp->next;
        }
        // cout << "NULL" << endl;
    }
};
