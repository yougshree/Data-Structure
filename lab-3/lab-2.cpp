/*Exercise 2:
Reversing Data
Reversing data requires that a given set of data be reordered so that the first and last elements
are exchanged. The idea of reversing data can be used in solving classical problem such as
converting a decimal number to a binary number. Now write a program using stack that will
convert decimal number to binary number.*/
#include <iostream>
#include "Stack_ADT.h" // Include the header file

using namespace std;

void decimalToBinary(Stack& stack, int decimal)
{

    while (decimal> 0)
    {
        stack.push(decimal% 2);
        decimal/= 2; //divide decimal by 2
    }
    cout<<"\nBinary equivalent: ";
    while (!stack.isEmpty())
    {
        cout<< stack.popValue(); //pop and display each binary digit

    }
    cout<< endl;
}

int main()
{
    Stack s1; //stack adt

    int number;
    cout << "\nEnter a decimal number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "\nPlease enter a non-negative number!";
    }
    else
    {
        cout << "\nDecimal Number: " << number;
        decimalToBinary(s1,number); // decimalToBinary` function call
    }

    return 0;
}
