#include<iostream>
using namespace std;

float checkCost(string,string,int);

main()
{
    string city;
    string product;
    int quantity;
    float price;

    cout<<"Enter the city name: ";
    cin>>city;
    cout<<"Enter the product name: ";
    cin>>product;
    cout<<"Enter the quantity of product: ";
    cin>>quantity;
    
    price=checkCost(city,product,quantity);
    cout<<"The final price of  the product is: "<<price<<endl;

}

float checkCost(string city,string product,int quantity)
{
    float price;

if(product=="coffee" && city=="Sofia")
{
    price=quantity*0.50;
}

else if(product=="coffee" && city=="Plovdiv")
{
    price=quantity*0.40;
}

else if(product=="coffee" && city=="Varna")
{
    price=quantity*0.45;
}

else if(product=="water" && city=="Sofia")
{
    price=quantity*0.80;
}

else if(product=="water" && city=="Plovdiv")
{
    price=quantity*0.70;
}

else if(product=="water" && city=="Varna")
{
    price=quantity*0.70;
}

else if(product=="beer" && city=="Sofia")
{
    price=quantity*1.20;
}

else if(product=="beer" && city=="Plovdiv")
{
    price=quantity*1.15;
}

else if(product=="beer" && city=="Varna")
{
    price=quantity*1.10;
}

else if(product=="sweets" && city=="Sofia")
{
    price=quantity*1.45;
}

else if(product=="sweets" && city=="Plovdiv")
{
    price=quantity*1.30;
}

else if(product=="sweets" && city=="Varna")
{
    price=quantity*1.35;
}

else if(product=="peanuts" && city=="Sofia")
{
    price=quantity*1.60;
}

else if(product=="peanuts" && city=="Plovdiv")
{
    price=quantity*1.50;
}

else if(product=="peanuts" && city=="Varna")
{
    price=quantity*1.55;
}


return price;

}




