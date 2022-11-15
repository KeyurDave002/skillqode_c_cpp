#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"Welcome to Skillqode";
        filestream<<"\n after exam";

        filestream.close();
    }
    else
    cout<<"File opening is fail";
    return 0;
}