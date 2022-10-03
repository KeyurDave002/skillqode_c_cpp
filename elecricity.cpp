#include<iostream>
using namespace std;
int main()
{
	int unit,amount,surcharge;
    cout<<"\n Enetr unit :";
    cin>>unit;
	if(unit<=100)
	{    
		amount=unit*.60+50;
		cout<<"\n total amount"<<amount;
    }
	 else if(unit<=200)
	{
		amount=(unit-100)*.80+50+60;
		cout<<"\n total amount"<<amount;
	}
	 else if(unit>=300)
	{
		amount=(unit-300)*.90+50+60+160;
		cout<<"\n total amount"<<amount;
	}
	if(amount>300)
	{
		surcharge=amount*1.15;
		cout<<"\n total amount :"<<surcharge;
	}
	
}