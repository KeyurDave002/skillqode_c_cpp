#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"\n Enter your day....";
    cin>>ch;
    switch (ch)
    {
    
    case 1:
        cout<<"\n Monday";
        break;

    case 2:
        cout<<"\n Tuesday";
        break;

    case 3:
        cout<<"\n Wednesday";
        break;
    
    case 4:
        cout<<"\n Thursday";
        break;

    case 5:
        cout<<"\n Friday";
        break;
    
    default:
      cout<<"\n Wrong choise";
        break;
    }
}