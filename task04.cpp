#include<iostream>
using namespace std;

string checkSpeed(float);

main()
{   
    float speed;
    string info;
    cout<<"Enter the speed: ";
    cin>>speed;

    info=checkSpeed(speed);
    cout<<"The Speed is: "<<info;

}


string checkSpeed(float speed)
{
    string info;

    if(speed<=10)
    {
        info="slow";
    }

    else if(speed>10 && speed<=50)
    {
        info="average";
    }

    else if(speed>50 && speed<=150)
    {
        info="fast";
    }

    else if(speed>150 && speed<=1000)
    {
        info="ultra-fast";
    }

    else
    {
        info="extremely-fast";
    }

    return info;


}