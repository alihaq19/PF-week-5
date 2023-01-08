#include <iostream>
using namespace std;
bool reverse(int num);
main()
{
  int num;
  int result;
  cout<<"Enter a number ";
  cin>>num;
  result=reverse(num);
  cout<<result;
}
bool reverse(int num)
{
  int x;
  int y;
  int z;
  x=num%10;
  num=num/10;
  y=num%10;
  num=num/10;
  z=num;
  if(x==z)
  {
    return true;
  }
  if(x!=z)
  {
    return false;
  }
  return 0;
}