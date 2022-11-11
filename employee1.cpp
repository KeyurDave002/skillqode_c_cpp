#include<iostream>
using namespace std;
class Employee
{
    float salary,hra,da,z;
    public:
void harInfo()
{
	
	cout<<"\n Enter salary :";
	cin>>salary;
}
void infoSalary()
{
	if(salary<=5000)
		{
			hra=salary*.08;
			da=salary*.2;
			cout<<"\n har : "<<hra<<"da :"<<da;
		}
		else if(salary>=5000 && salary<=10000)
		{
			hra=salary*.12;
			da=salary*.3;
			cout<<"\n har :  \n da :"<<hra<<da;	
		}
        else if(salary>=10000 && salary<=15000)
		{
			hra=salary*.15;
			da=salary*.4;
			cout<<"\n har : "<<hra<<"\nda :"<<da;
		}
		z=salary+hra+da;
		cout<<"\n total salary :"<<z;
        
    }
};
int main()
{
    Employee ob1;
    ob1.harInfo();
    ob1.infoSalary();
    return 0;
}