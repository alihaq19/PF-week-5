#include <iostream>
#include <cmath>
using namespace std;
float quadratic(float num1,float num2,float num3);
float quadratic2(float num1,float num2,float num3);
main()
{
  float num1;
  float num2;
  float num3;
  float result;
  result=quadratic(5,6,1);
  cout<<"The first value of x is "<<result<<endl;
  result=quadratic2(5,6,1);
  cout<<"The second value of x is "<<result;
}
float quadratic(float num1,float num2,float num3)
{
  float square;
  float square_root;
  float operation1;
  float operation2;
  float result;
  float final_result;
  square=pow(num2,2);
  operation1=4*num1*num3;
  operation2=square-operation1;
  square_root=sqrt(operation2);
  result=-num2+square_root;
  final_result=result/(2*num1);
  return final_result;
}
float quadratic2(float num1,float num2,float num3)
{
  float square;
  float square_root;
  float operation1;
  float operation2;
  float result;
  float final_result;
  square=pow(num2,2);
  operation1=4*num1*num3;
  operation2=square-operation1;
  square_root=sqrt(operation2);
  result=-num2-square_root;
  final_result=result/(2*num1);
  return final_result;
}
