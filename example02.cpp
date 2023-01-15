#include<iostream>
using namespace std;

int isGreatest(int,int,int);


main()
{
    int num1;
    int num2;
    int num3;
    int greatest;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;

    greatest=isGreatest(num1,num2,num3);
    cout<<greatest<<" is the greatest number"<<endl;
}


int isGreatest(int num1,int num2,int num3)
{
    int greatest;

    if(num1>num2 && num1>num3)
    {
        greatest=num1;
    }

    else if(num2>num1 && num2>num3)
    {
        greatest=num2;
    }

    else if(num3>num1 && num3>num2)
    {
        greatest=num3;
    }

    else
    {
        greatest=num1;
    }

    return greatest;

}