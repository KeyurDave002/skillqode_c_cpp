#include <iostream>
using namespace std;
int isPerfect(int num)
{
    int loop, sum = 0;

    for (loop = 1; loop < num; loop++) {
        if (num % loop == 0)
            sum += loop;
    }

    if (sum == num)
        return 1; /*Perfect Number*/
    else
        return 0; /*Not Perfect Number*/
}

int main()
{
    int num, loop;
    int sum;

    cout<<"Enter an integer number: ";
    cin>>num;

    if (isPerfect(num))
        cout<<" is a perfect number."<<num;
    else
        cout<<" is not a perfect number. "<< num;

    return 0;
}