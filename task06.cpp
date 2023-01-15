#include<iostream>
using namespace std;

float lowestprice(int,string);

main()
{
    float kilometres;
    string time;
    float fare;

    cout<<"Enter the number of kilometres travelled: ";
    cin>>kilometres;
    cout<<"Enter the time either in day/night: ";
    cin>>time;

    fare=lowestprice(kilometres,time);
    cout<<"The lowest price is: "<<fare;


}

float lowestprice(int kilometres,string time)
{
    float fare;

    if(kilometres>=100 && time=="day" || time=="night")
    {
        fare=kilometres*0.06;
    }

    else if(kilometres>=20 && time=="day" || time=="night")
    {   
        fare=kilometres*0.09;
    }

    else if(kilometres<20 && time=="day")
    {
        fare=kilometres*0.79;
    }

    else if(kilometres<20 && time=="night")
    {
        fare=kilometres*0.90;
    }

    return fare;


}