#include<iostream>
using namespace std;
class A
{

    public:
    A()
    {
        cout<<"\n A Constructor Called...";
    }
    ~A()
    {
        cout<<"\n A Desctructor Called...";
    }
};
class B
{
    public:
    B()
    {
        cout<<"\n B Constructor Called...";
    }
    ~B()
    {
        cout<<"\n B Desctructor Called...";
    }
};
class C:public A, public B
{
    public:
    C()
    {
        cout<<"\n C Constructor Called...";
    }
    ~C()
    {
        cout<<"\n C Desctructor Called...";
    }
};
int main()
{
    C c;
}
