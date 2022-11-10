#include <iostream>
#include <string>
using namespace std;
class student
{
    string sname;
    float eng, match, science, total;
    int admno;

public:
    void takeData()
    {
        cout << "Enter admno";
        cin >> admno;

        cout << "Enter name";
        cin >> sname;

        cout << "Enter eng marks";
        cin >> eng;

        cout << "Enter match marks";
        cin >> match;

        cout << "Enter science marks";
        cin >> science;
    }

    void cTotal()
    {
        total = eng + match + science;
    }

    void showData()
    {
        cout << "marks of eng : " << eng;
        cout << "marks of match : " << match;
        cout << "marks of science : " << science;
        cout << "total of marks  : " << total;
    }
};
int main()
{
    student s1;
    s1.takeData();
    s1.cTotal();
    s1.showData();
}
