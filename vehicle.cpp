#include <iostream>
using namespace std;
float taxcalculator(char vehicle_type,float item_price);
main()
{
    float item_price;
    char vehicle_type;
    float result;
    cout<<"Enter the price of the item ";
    cin>>item_price;
    cout<<"Enter the vehicle type ";
    cin>>vehicle_type;
    result=taxcalculator(vehicle_type,item_price);
    cout<<"The final price on a vehicle type of "<< vehicle_type <<" after adding the tax is "<< result;

}
float taxcalculator(char vehicle_type,float item_price)
{
     float tax_price;
     float final_price;
     if(vehicle_type=='M')
     {
        tax_price=item_price*0.06;
        final_price=item_price+tax_price;
        return final_price;

     }
     if(vehicle_type=='E')
     {   
        tax_price=item_price*0.08;
        final_price=item_price+tax_price;
        return final_price;
     }
     if(vehicle_type=='S')
     {
        tax_price=item_price*0.1;
        final_price=item_price+tax_price;
        return final_price;
     }
     if(vehicle_type=='V')
     {
        tax_price=item_price*0.12;
        final_price=item_price+tax_price;
        return final_price;
     }
     if(vehicle_type=='T')
     {
        tax_price=item_price*0.15;
        final_price=item_price+tax_price;
        return final_price;
     }
     return 0;
}