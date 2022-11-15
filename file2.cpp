#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string stg;
    ifstream filestream("file2.txt");
    if(filestream.is_open())
    {
        while(getline (filestream,stg))
      {
        cout<<stg<<endl;
      } 

        filestream.close();
    }
    else
    {
       cout<<"File opening is fail"<<endl;
    }
    return 0;
}