#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A constructor";
    }
    ~A()
    {
        cout<<"\n A Destructor ";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\n B constructor";
    }
};
int main()
{ 
    B b;
}