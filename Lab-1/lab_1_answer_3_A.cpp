#include <bits/stdc++.h>
using namespace std;

class PrimeRange
{
    private: 
    int range1,range2;
    int counter;
    int *num;
    
    bool isPrime(int n)
    {
        if(n<=1)
         return false;
         
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            
             return false;
        }
    
    return true;
}

public:
PrimeRange(){
    range1=0;
    range2=0;
    counter=0;
    num=nullptr;
}

PrimeRange(int r1, int r2)
{
    if(r1<r2)
    {
        range1=r1;
        range2=r2;
        
    }
    else
    {
        cout<<"Range 1 must be smaller than Range 2 \n";
        exit(1);
    }
    counter =0;
    num=nullptr;
}
//setter method
void setRange1(int r1)
{
    range1=r1;
}
void setRange2(int r2)
{
    range2=r2;
}

//getter method
int getRange1() const
{
    return range1;
}

int getRange2() const
{
    return range2;
}

int getCounter() const
{
    return counter;
}

void generatePrime()
{
    for(int i=range1; i<=range2;i++)
    {
        if(isPrime(i))
        {
            counter++;
        }
    }
    
    num= new int[counter];
    int index=0;
    
    
    for(int i=range1;i<=range2;i++)
    {
        if(isPrime(i))
        {
            num[index++]=i;
        }
    }
}

void displayPrimes()const
{
    cout<<"Prime number:"<<range1<<" to "<<range2<<"\n";

    int*ptr=num;
    for(int i=0;i<counter;i++)
    {
        cout<<*(ptr+i)<<" "; //pointer arithmatic to access array elements
        
    }
    cout<<endl;
        cout<<"\nTotal prime numbers found: "<<counter<<".\n"; //display all prime numbers

}
~PrimeRange(){
delete[]num;
}
};

int main()
{
    int r1, r2;
    cout<<"Enter range1:";
    cin>>r1;
    cout<<"Enter range2: ";
    cin>>r2;
    
//create obj dynamically
PrimeRange*obj=new PrimeRange(r1,r2);
obj->generatePrime();
obj->displayPrimes();

delete obj;

return 0;
    
}