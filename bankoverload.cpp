#include<iostream>
using namespace std;
class Bank
{
    int accountbalance,initbal,withdrawblance,reminderbalance,depositebalance, totalbalance;
    public:
    void bankBalance(int);
    void bankBalance(int);
    void bankBalance();
    void bankBalance();
};
void Bank::bankBalance(int)
{
    accountbalance = 1000;
    cout << "\n default constructor called..";
}
void Bank::bankBalance()
{
     accountbalance = initbal;
    cout << "\n parameterlized constructor called...";
}
void Bank::bankBalance()
{
     cout << "\n account balance : "<<accountbalance;
    //  withdrawblance();
    cout << "\n";
}
void Bank::bankBalance()
{
    cout << "\n enter withdrawbalance : "<<accountbalance; 
    cin >> withdrawblance;

        reminderbalance = accountbalance - withdrawblance;
        cout << "reminderblance : " <<reminderbalance;

        cout << "\n enter depositebalance : "; 
        cin >> depositebalance;
        
        totalbalance = reminderbalance + depositebalance;
        cout << "totalblance : " << totalbalance;
}
int main()
{
  Bank reminderbalance,  totalbalance;
  reminderbalance.bankBalance();
  totalbalance.bankBalance();
}