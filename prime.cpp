#include <iostream>
using namespace std;
void prime()
{
    int a;

    cout << "Enter a ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "a is  not prime  number : ";
    }
    else
    {
        cout << "a is  prime number :";
    }
}
int main()
{
    prime();
}