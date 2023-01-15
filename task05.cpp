#include<iostream>
using namespace std;


float totalIncome(string,int,int);

main()
{   
    string screening;
    int rows;
    int columns;
    float price;
    cout<<" Enter the type of screening: ";
    cin>>screening;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    price=totalIncome(screening,rows,columns);
    cout<<"The total price of the screening is: "<<price;


}


float totalIncome(string screening,int rows,int columns)
{   
    float price;

    if(screening=="Premiere")
    {
        price=rows*columns*12.00;
    }

    if(screening=="Normal")
    {
        price=rows*columns*7.50;
    }

    if(screening=="Discount")
    {
        price=rows*columns*5.00;
    }

    return price;


}