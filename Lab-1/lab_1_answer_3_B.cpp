#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    double height;
    double width;
    
    public:
     // Default constructor
    Rectangle(): height(0), width(0) {}

    // Parameterized constructor
    Rectangle(double h, double w)
    {
        height= h;
        width= w;
    }
//setter function    
    void setHeight(double h)
    {
        height=h;
    }
    
    void setWidth(double w)
    {
        width=w;
    }
//getter function    
    double getHeight()
    {
        return height;
    }
    
    double getWidth()
    {
        return width;
    }
//display the area of rectangle    
    void displayArea()
    {
        double area=height*width;
        cout<<"(1)Area of rectangle: "<<area<<endl;
    }
};

int main()
{
//i. Create normal object of Rectangle class, initialize after taking user inputs
    double h,w;
    cout<<"Enter height for rectangle 1: ";
    cin>>h;
    
    cout<<"Enter width for rectangle 1: ";
    cin>>w;
    
    Rectangle rect1;
    rect1.setHeight(h);
    rect1.setWidth(w);
    rect1.displayArea();

//ii another object so that you can allocate memory for that object dynamically
Rectangle *rect2=new Rectangle(h,w);
cout<<"(2)Area of dynamically created rectangle: ";
rect2->displayArea();


//iii array of objects of Rectangle class, initialize the whole array taking user
//inputs.
int n;
cout<<"Enter the number of rectangles: ";
cin>>n;

Rectangle*rectArray= new Rectangle[n];

for(int i=0;i<n;i++)
{
        cout << "Enter height for rectangle " << i + 1 << ": ";
        cin >> h;
        cout << "Enter width for rectangle " << i + 1 << ": ";
        cin >> w;
        
        rectArray[i].setHeight(h);
        rectArray[i].setWidth(w);
}

// Display the area of each rectangle
    for (int i= 0;i< n; i++)
    {
        cout<<"Area of rectangle "<<i+1<< ": ";
        rectArray[i].displayArea();
    }

    delete[] rectArray; 
    
//iv Create a pointer object of Rectangle class.
Rectangle *rectPointer = new Rectangle; 

    cout<< "Enter height for rectangle 1: ";
    cin>> h;
    cout<< "Enter width for rectangle 1: ";
    cin>> w;

    rectPointer->setHeight(h);
    rectPointer->setWidth(w);
    rectPointer->displayArea();

    delete rectPointer; // Free memory allocated for pointer object

    return 0;
}