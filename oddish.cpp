#include <iostream>
using namespace std;
string sum(int num1);
main()
{
  int num;
  string result;
  cout<<"Enter a 5 digit number ";
  cin>>num;
  result=sum(num);
  cout<<"The number is "<<result;
}
string sum(int num1)
{
  int mod1;
  int mod2;
  int mod3;
  int mod4;
  int mod5;
  int quotient1;
  int quotient2;
  int quotient3;
  int quotient4;
  int total;
  mod1= num1%10;
  quotient1= num1/10;
  mod2=quotient1%10;
  quotient2=quotient1/10;
  mod3=quotient2%10;
  quotient3=quotient2/10;
  mod4=quotient3%10;
  quotient4=quotient3/10;
  mod5=quotient4%10;
  total=mod1+mod2+mod3+mod4+mod5;
  if(total%2==0)
  {
    return "Evenish";
  }
  if(total%2!=0)
  {
    return "oddish";
  } 
  return 0;
}