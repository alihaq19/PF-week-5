#include <iostream>
#include <cmath>
using namespace std;
float angleofelevation(float angle,float base);
main()
{
  float angle;
  float base;
  float height;
  cout<<"Enter the angle of elevation ";
  cin>>angle;
  cout<<"Enter the base ";
  cin>>base;
  height=angleofelevation(angle,base);
  cout<<"The height is "<<height;
  
}
float angleofelevation(float angle,float base)
{
  float height;
  float radians;
  float tangent;
  radians=angle/57.3;
  tangent=tan(radians);
  height=tangent*base;
  return height;
  
}