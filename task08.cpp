#include<iostream>
using namespace std;

float calculatebudget(float,string,int);

main()
{
    float budget;
    string category;
    int persons;
    float amount_left;

    cout<<"Enter your budget in Qatari Rial: ";
    cin>>budget;
    cout<<"Enter your category of ticket: ";
    cin>>category;
    cout<<"Enter the number of persons: ";
    cin>>persons;

    amount_left=calculatebudget(budget,category,persons);
    cout<<"Your left-over amount in Qatari Rial is: " <<amount_left;


}

float calculatebudget(float budget,string category,int persons)
{

    float amount_left;
    float vip_catg=499.99;
    float normal_catg=249.99;

    if((persons>=1 && persons<=4) && category=="VIP" )
    {
        amount_left=(budget)-((75.0/100.0)*budget+vip_catg*persons);
    }

    else if((persons>=1 && persons<=4) && category=="Normal" )
    {
        amount_left=(budget)-((75.0/100.0)*budget+normal_catg*persons);
    }

    else if((persons>=5 && persons<=9) && category=="VIP")
    {
        amount_left=(budget)-((60.0/100.0)*budget+vip_catg*persons);
    }

    else if((persons>=5 && persons<=9) && category=="Normal")
    {
        amount_left=(budget)-((60.0/100.0)*budget+normal_catg*persons);
    }

    else if((persons>=10 && persons<=24) && category=="VIP")
    {
        amount_left=(budget)-((50.0/100.0)*budget+vip_catg*persons);
    }

    else if((persons>=10 && persons<=24) && category=="Normal")
    {
        amount_left=(budget)-((50.0/100.0)*budget+normal_catg*persons);
    }

    else if((persons>=25 && persons<=49) && category=="VIP")
    {
        amount_left=(budget)-((40.0/100.0)*budget+vip_catg*persons);
    }

    else if((persons>=25 && persons<=49) && category=="Normal")
    {
        amount_left=(budget)-((40.0/100.0)*budget+normal_catg*persons);
    }

    else if((persons>=50) && category=="VIP")
    {
        amount_left=(budget)-((25.0/100.0)*budget+vip_catg*persons);
    }

    else if((persons>=50) && category=="Normal")
    {
        amount_left=(budget)-((25.0/100.0)*budget+normal_catg*persons);
    }


    return amount_left;
}

