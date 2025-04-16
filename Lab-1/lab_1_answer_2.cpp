#include <bits/stdc++.h>
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
};
//a. User will input the brand name 
void displayByBrand(Product*product, int size, string brand)
{
    bool found=false;
    cout<<"\n Products of Brand: "<<brand<<"\n";
    for(int i=0;i<size;i++)
    {
        if(product[i].getBrandName()==brand)
        {
            product[i].displayProduct();
            found=true;
        }
    }
    if(!found)
    {
        cout<<"No products found for this Brand\n";
    }
}
//b. User will input the type of product and you have to calculate the total asset of that

void totalAsset(Product*product, int size, string type)
{
    float totalAsset=0.0;
    for(int i=0; i<size;i++)
    {
        if(product[i].getType()==type)
        {
            totalAsset+=product[i].getQuantity()*product[i].getPrice();
        }
    }
    cout<<"(a) Total asset of the product type"<<type<<":"<<totalAsset<<"\n";
    
}
//c. Calculate the total asset of the grocery shop.
void totalAssetofGrocerryShop(Product*product, int size)
{
    float totalAsset=0.0;
    for(int i=0; i<size;i++)
    {
            totalAsset+=product[i].getQuantity()*product[i].getPrice();
    }
    cout<<"(c) Total asset of the Grocerry Shop"<<":"<<totalAsset<<"\n";
    
}
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
     int quantity;
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
//(a)display products by brand
string brand_name;
cout<<"(a) Enter the Brand name to search: ";
cin>>brand_name;
displayByBrand(product,size,brand_name);

//(b)display total asset by product type
string type;
cout<<"(b) Enter the Product type to calculate total asset:";
cin>>type;
totalAsset(product,size,type);

//(c)display total asset of the grocerry Shop
totalAssetofGrocerryShop(product,size);

    delete[] product; //free dynamically allocate memory
    return 0;
}
