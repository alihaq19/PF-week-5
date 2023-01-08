#include <iostream>
using namespace std;
int isgreater(int num1,int num2);
int isminimum(int num1,int num2);
main()
{
  int num1;
  int num2;
  int result;
  cout<<"Enter a number ";
  cin>>num1;
  cout<<"Enter second number ";
  cin>>num2;
  result=isgreater(num1,num2);
  cout<<"The greater number is "<<result<<endl;
  result=isminimum(num1,num2);
  cout<<"The minimum number is "<<result;
  
}
int isgreater(int num1,int num2)
{
  if(num1>num2)
  {
    return num1;
  }
  if(num2>num1)
  {
    return num2;
  }
  return 0;
}
int isminimum(int num1,int num2)
{
  if(num1<num2)
  {
     return num1;
  }
  if(num2<num1)
  {
     return num2;
  }
  return 0;
}