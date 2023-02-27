#include <iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float science, maths, english, total;
    float ctotal()
    {
        return english + maths + science;
    }

public:
    void takedata()
    {
        cout << "Enter admno:";
        cin >> admno;
        cout << "Enter sname:";
        cin >> sname;
        cout << "Enter Science marks:";
        cin >> science;
        cout << "Enter Maths marks:";
        cin >> maths;
        cout << "Enter English marks:";
        cin >> english;
        total = ctotal();
    }
    void showdata()
    {
        cout << "admno:" << admno << endl;
        cout << "sname:" << sname << endl;
        cout << "Science marks:" << science << endl;
        cout << "Maths marks:" << maths << endl;
        cout << "English marks:" << english << endl;
        cout << "Total marks:" << total << endl;
    }
};
int main()
{
    student a;
    a.takedata();
    a.showdata();
}