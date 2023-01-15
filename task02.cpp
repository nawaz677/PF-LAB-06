#include<iostream>
using namespace std;

float discount(string,string,float);
main()
{   
    string day;
    string month;
    float purchase;
    float payable;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the purchase amount: ";
    cin>>purchase;

    payable=discount(day,month,purchase);
    cout<<"The Payable Amount is: "<<payable;

}

float discount (string day,string month,float purchase)
{
    float payable;
    if(day=="Sunday" && (month=="October" || month=="March" || month=="August"))
    {
        payable=purchase-(purchase*10.0)/100.0;
    }
    if(day=="Monday" && (month=="November" || month=="December"))
    {
        payable=purchase-(purchase*5.0)/100.0;
    }

    return payable;


}