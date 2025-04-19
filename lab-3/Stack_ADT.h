#ifndef STACK_ADT_H
#define STACK_ADT_H
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=nullptr;
    }
};
class Stack
{
    Node*top=nullptr;
public:
//1.for push
    void push(int d)
    {
        Node* temp=new Node(d);
        if(top==nullptr)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
    }
//2.for pop
    void pop()
    {
        if(top==nullptr)
        {
            cout<<"Stack is empty";
        }
        else
        {
            Node*temp=top;
            top=top->next;
            delete temp;
        }
    }
//3.for display
    void display()
    {
        Node*temp=top;
        while(temp!=nullptr)
        {
            //  cout<<"temp->data";
            cout<< temp->data << "->";
            temp= temp->next;
        }
        cout << "NULL" << endl;
    }

    //5 empty
    bool isEmpty()
    {
        return top== nullptr;
    }
    void destroy()
    {
        while(top!=nullptr)
        {
            Node*temp=top;
            top=top->next;
            delete temp;
        }
        cout<<"stack cleared";
    }

    //6.top
    int topp()
    {
        if(top==nullptr)
        {
            cout<<"Stack is empty";
        }
        // return top->data;
        return -1;
    }
    int popValue()
    {
        if (top== nullptr)
        {
            cout<<"Stack is empty" << endl;
            return -1;
        }
        int data= top->data;
        pop();
        return data;
    }

    int topadd()
    {
        return popValue();
    }
    //4.for size
    int size()
    {
        int c=0;
        Node*temp=top;
        while(temp!=nullptr)
        {
            c++;
            temp= temp->next;

        }
        return c;
    }

};
#endif
