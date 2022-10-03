#include<iostream>
using namespace std;
class Info
{
    int qty,price,amount;
    float dis,disamt,gst,disbad;
    
    public:
    void setVal()
    {
	     cout<<" Enter Qty :";
	     cin>>qty;
	     cout<<" Enter  Price : ";
	     cin>>price;
	 
    }
    void getVal()
    {
      cout<<"\n Qauty :"<<qty;
      cout<<"\n Price :"<<price;
    }
    void doSum()
    {
        amount=qty*price;
      cout<<"\n amount :"<<amount;
      dis=amount*10/100;
      cout<<"\n dis :"<<dis;
      cout<<"\n disbad :"<<amount-dis;
    
    }
};
int main()
{
    Info obj1;
    obj1.setVal();
    obj1.getVal();
    obj1.doSum();
}