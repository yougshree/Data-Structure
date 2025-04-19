/*Exercise 4:
Infix to postfix conversion
Write a program that implements the inﬁx-to-postﬁx notation. The program should read an
inﬁx string consisting of single alphabetic characters for variables, parentheses, and the +, -, *,
and / operators.*/
#include <iostream>
#include<string>
#include "Stack_ADT.h"


using namespace std;

int precedence(char op)
{
    if(op=='*' ||op== '/')
        return 2;
    if(op=='+' || op=='-')
        return 1;

    return 0;
}

// Function to check if a character is an operator
bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}
string infixToPostfix(string infix)
{
    Stack s1;
    string postfix="";

    for(char ch:infix)
    {
        if(isalpha(ch))
        {
            postfix+= ch;
        }

        else if(ch== '(')
        {
            s1.push(ch);
        }

        else if(ch==')')
        {
            while(!s1.isEmpty() && s1.topp()!='(')
            {
                postfix+=static_cast<char>(s1.popValue());
            }
            s1.pop();

        }

        else if(isOperator(ch))
        {
            while(!s1.isEmpty() && precedence(ch)<= precedence(s1.topp()))

            {
                postfix+=static_cast<char>(s1.popValue());
            }
            s1.push(ch);
        }


    }

    while(!s1.isEmpty())
    {
        postfix+=static_cast<char>(s1.popValue());
    }
    return postfix;

}

int main()
{
    string formula;
    cout<<"Enter an infix expression:";
    getline(cin, formula);

    string postfix= infixToPostfix(formula);
    cout<<"Postfix expression: "<<postfix;

    return 0;
}


