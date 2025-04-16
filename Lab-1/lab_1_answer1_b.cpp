#include <iostream>
using namespace std;

class Product{
    private:
      static int nextid;
      int id;
      string name;
      string brand_name;
      string type;
      int quantity;
      float price;
      
    public:
     Product() //using default constructor
     {
         id=++nextid;
         name="";
         brand_name="";
         type=="";
         quantity=0;
         price=0.0;
     }
//constructor parameter    
     Product(string name, string brand_name, string type, int quality, float price)
     {
         id=++nextid;
         this->name=name;
         this->brand_name=brand_name;
         this->type=type;
         this->quantity=quantity;
         this->price=price;
     }
//setter method     
     
     void setName(string name)
     {
        this->name=name; 
     }
     void setBrandName(string brand_name)
     {
        this->brand_name=brand_name; 
     }
     void setType(string type)
     {
        this->type=type; 
     }
     void setQuantity(int quantity)
     {
        this->quantity=quantity; 
     }
     void setPrice(float price)
     {
        this->price=price; 
     }
//getter method    
     int getID()
     {
        return id;
     }
     string getName()
     {
        return name;
     }
     string getBrandName()
     {
        return brand_name;
     }
     string getType()
     {
        return type;
     }
     int getQuantity()
     {
        return quantity;
     }
     float getPrice()
     {
        return price;
     }
     
     void displayProduct()
     {
         cout<<"\nProduct ID: "<<id<<"\nProduct Nmae: "<<name<<"\nProduct Brand Name: "<<brand_name<<"\nProduct Type: "<<type<<"\nProduct Quantity: "<<quantity<<"\nProduct Price: "<<price<<endl;
     }
     void displayProductGreaterThan40()
     {
         if(price>40)
         {
             cout<<"Product Nmae: "<<name<<", Price"<<price<<endl;
         }
     }
};
int Product::nextid=0;
int main()
{
 int size;
 
 cout<<"Enter the number of Products: ";
 cin>> size;
 //Product product[size];
 
Product*product= new Product[size]; //dynamically memory allocation for product array
 
 for(int i=0;i< size;i++)
 {
     int id, quantity;
     string name, brand_name, type;
     float price;
 
   cout<<"Enter details of the product: " << i+1<<"\n";
   
   //cout<<"Enter product id: ";
   //cin>>id;
   
   cout<<"Enter product Name: ";
   cin>>name;
   cout<<"Enter product Brand Name: ";
   cin>>brand_name;
   cout<<"Enter product Type: ";
   cin>>type;
   cout<<"Enter product quantity: ";
   cin>>quantity;
   cout<<"Enter product Price: ";
   cin>>price;
   
 //use setter method  
   //product[i].setID(id);
   product[i].setName(name);
   product[i].setBrandName(brand_name);
   product[i].setType(type);
   product[i].setQuantity(quantity);
   product[i].setPrice(price);
 }
//display all product
 cout<<"All Product Details: \n";
 for(int i=0; i<size; i++)
 {
     product[i].displayProduct();
 }
//display product greater than 40
   cout<<"\n Products with Price Greater Than 40:\n";
    for(int i=0; i<size;i++)
    {
        product[i].displayProductGreaterThan40();
    }
    delete[] product; //free dynamically allocate memory
    return 0;
}
