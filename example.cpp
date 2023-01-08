#include <iostream>
using namespace std;
int add(int num1,int num2);
float divide (float num1,float num2);
main()
{ float result;
  cout<<"program starts: "<<endl;
  result=add(12,14);
  cout<<"The result is "<<result<<endl;
  result=divide(12,7);
  cout<<"The result is "<<result<<endl;
  cout<<"program ends !"<<endl;
}
int add(int num1,int num2)
{
  int sum;
  sum=num1+num2;
  return sum;
}
float divide (float num1,float num2)
{
  float total;
  total=num1/num2;
  return total;
}