/*Exercise 5:
Parenthesis parsing
Write a program using stack that will parse parenthesis of an equation. Use stack data structure
for parsing.*/
#include <iostream>
#include <string>
#include "Stack_ADT.h"

using namespace std;

// Function to check for balanced parentheses
bool parseParentheses(const string &equation, Stack &s1)
{
    for(char ch: equation)
    {
//If opening parenthesis, push onto the stack
        if(ch=='(')
        {
            s1.push(ch);
        }
// If closing parenthesis, check the stack
        else if(ch==')')
        {
            if(s1.isEmpty())
            {
                return false;
            }
            else
            {
                s1.popValue();
            }
        }
    }

// Check if the stack is empty at the end
    return s1.isEmpty();
}

int main()
{
    Stack s1;
    string equation;

    cout << "Enter an equation with parentheses: ";
    getline(cin, equation);

    if (parseParentheses(equation, s1))
    {
        cout << "The parentheses are balanced.";
    }
    else
    {
        cout << "The parentheses are not balanced.";
    }

    return 0;
}
