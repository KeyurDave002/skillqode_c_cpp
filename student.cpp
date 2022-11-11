//single inheritance 
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rn;
    char nm[20];

    public:
    void read();
    void display();
};
class marks:public student
{
    protected:
     int s1;
     int s2;
     int s3;
     public:
      void getmarks();
      void putmarks();
};
class result:public marks
{
   int t;
   float p;
   char div[10];

   public:
   void process();
   void printresult();
};
void student::read()
{
    cout<<"Enter roll no : ";
    cin>>rn;
    cout<<"Enter name : ";
    cin>>nm;
}
void student::display()
{
    cout<<"\n Roll no : "<<rn<<endl;
    cout<<"\n Name : "<<nm<<endl;
    cout<<"\n";
}
void marks::getmarks()
{
    cout<<"Enter marks for 3 subjects : "<<endl;
    cin>>s1>>s2>>s3;
}
void marks::putmarks()
{
    cout<<"subject 1 : "<<s1<<endl;
    cout<<"subject 2 : "<<s2<<endl;
    cout<<"subject 3 : "<<s3<<endl;
}
void result::process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60?strcpy(div,"First"):p>=50?strcpy(div,"Second"):strcpy(div,"Third");
}
void result::printresult()
{
    cout<<"total = "<<t<<endl;
    cout<<"\n";
    cout<<"perctange = "<<p<<endl;
    cout<<"Division  = "<<div<<endl;
}
int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}