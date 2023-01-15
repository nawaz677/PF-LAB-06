#include<iostream>
using namespace std;


string checkTitle(int,char);


main()
{
    int age;
    char gender;
    string title;
    cout<<"Enter the age of person: ";
    cin>>age;
    cout<<"Enter the gender of person: ";
    cin>> gender;

    title=checkTitle(age,gender);
    cout<<"The Title of the Person is: "<<title;

}


string checkTitle(int age,char gender)
{
    
    string title;

    if(age<16 && gender=='m')
    {
        title="Master";
    }

    if(age>=16 && gender=='m')
    {
        title="Mr.";
    }

    if(age<16 && gender=='f')
    {
        title="Miss.";
    }

    if(age>=16 && gender=='f')
    {
        title="Ms.";
    }

    return title;


}