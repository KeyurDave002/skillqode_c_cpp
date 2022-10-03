// c++ program to demostrate getline() function
#include <iostream>
#include <string>
using namespace std;
void mystring(string newstr)
{
    cout << "Hello , " << newstr << " Welcome to skillqode!\n";
}
int main()
{
    string str;
    cout << "Please enter your name\n";
    // cin>>str;
    // cout<<"\n str :"<<str;
    getline(cin, str);
    mystring(str);
    return 0;
}
