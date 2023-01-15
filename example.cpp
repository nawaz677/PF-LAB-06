#include<iostream>
using namespace std;


main()
{
    int price;
    string brand;
    cout<<"Enter the price of product : ";
    cin>>price;
    cout<<"Enter the brand name: ";
    cin>>brand;

    if(price<=1500)
    {
        if(brand=="Outfitters")
        {
            cout<<"Good!";
        }
    }

    else
    {
        cout<<"Not Good!"<<endl;
    }

}