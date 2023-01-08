#include <iostream>
using namespace std;
float volume(float,float,float,string);
main()
{
    float length,width,height;
    string unit;
    cout<<"Enter the length in meters ";
    cin>>length;
    cout<<"Enter the width in meters ";
    cin>>width;
    cout<<"Enter the height in meters ";
    cin>>height;
    cout<<"Enter the unit in which you want to your volume ";
    cin>>unit;
    float result;
    result=volume(length,width,height,unit);
    cout<<"The volume is " << result  <<  unit <<" cubic meters ";
}
float volume(float length,float width,float height,string unit)
{
   float volume;
   float total;
   float divide;

volume=length*width*height;
divide=volume/3;

if(unit=="millimeter")
{
    total=divide*1000*1000*1000;
    return total;
}
if(unit=="centimeter")
{
    total=divide*100*100*100;
    return total;
}
if(unit=="kilometer")
{
    total=divide*0.001*0.001*0.001;
    return total;
}
if(unit=="meters")
{
    total=divide;
    return total;
    
}
return 0;
}