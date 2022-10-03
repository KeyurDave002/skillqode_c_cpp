#include<iostream>
using namespace std;
class Sum
{
  public:
  Sum(int,int);
  Sum(int,int,int);
  Sum(double,double);
  Sum(double,double,double);
};
Sum::Sum(int a,int b){
  cout<<"Two para int a+b : "<<a+b<<endl;
}
Sum::Sum(int a,int b,int c){
  cout<<"Three para int a+b+c : "<<a+b+c<<endl;
}
Sum::Sum(double a,double b){
  cout<<"Two para double a+b : "<<a+b<<endl;
}
Sum::Sum(double a,double b,double c){
  cout<<"Three para double a+b+c : "<<a+b+c<<endl;
}
int main()
{
    Sum obj1(10.1,20.2,30.0);//obj2(10.1,20.2),obj3(10,20,30),obj4(10.1,20.2,30.0);
}