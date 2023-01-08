#include <iostream>
#include <cmath>
using namespace std;
main()
{
float hours;
float days;
float workers;
float not_working_days;
float working_days;
float total_hours;
float rounded_hours;
float hours_left;
cout<<"Enter the number of hours needed ";
cin>>hours;
cout<<"Enter the number of days ";
cin>>days;
cout<<"Enter the number of workers ";
cin>>workers;
not_working_days=0.1*days;
working_days=days-not_working_days;
total_hours=working_days*workers*10;
rounded_hours=ceil(total_hours);
if(rounded_hours>=hours)
{
    hours_left=rounded_hours-hours;
    cout<<"YES! " << hours_left << " left ";
}
if(rounded_hours<hours)
{
    hours_left=hours-rounded_hours;
    cout<<"NOT ENOUGH TIME! "<< hours_left << " hours needed";
}


}