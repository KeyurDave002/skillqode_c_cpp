#include <iostream>
using namespace std;
class Area
{
public:
    void calcArea(int);
    void calcArea(int, int);
    double calcArea(double);
};
void Area::calcArea(int side)
{
    cout << "\n Area : " << side * side;
}
void Area::calcArea(int l, int b)
{
    cout << "\n Area : " << l * b;
}
double Area::calcArea(double side)
{ 
    return side*side;
}
int main()
{
    Area squre,react;
    squre.calcArea(9);
    cout<<"\n squre are in double : "<<squre.calcArea(7.5);
    react.calcArea(7,8);
    return 0;
}