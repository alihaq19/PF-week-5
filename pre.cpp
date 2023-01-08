#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float num1;
  float result;
  cout<<"Enter a number ";
  cin>>num1;
  result=floor(num1);
  cout<<"The rounded off number is "<<result<<endl;
  result=sqrt(num1);
  cout<<"The square root is "<<result<<endl;
  result=cbrt(num1);
  cout<<"The cube root is "<<result;
  result=ceil(num1);
  cout<<"The rounded off number is "<<result<<endl;
  


}