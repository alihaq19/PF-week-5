#include <iostream>
using namespace std;
main()
{
    int hours;
    int minutes;
    int hrs;
    int mins;
    cout<<"Enter the time in hours ";
    cin>>hrs;
    cout<<"Enter the time in minutes ";
    cin>>mins;
    minutes=mins+15;
    if(minutes>=60)
    {
        hrs=hrs+1;
    }
    hours=hrs%24;
    minutes=minutes%60;
    cout<<"The time after 15 minutes will be "<<hours <<":"<<minutes;
}
