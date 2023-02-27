#include <iostream>
using namespace std;
class flightt
{
    int flightnum;
    char destination[5];
    float fuel, distance;
    float calfuel()
    {
        if (distance <= 1000)
        {
            return fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            return fuel = 1100;
        }
        else if (distance > 2000)
        {
            return fuel = 2200;
        }
    }

public:
    void feedinfo()
    {
        cout << "Enter Flight number:";
        cin >> flightnum;
        cout << "Enter Destination:";
        cin >> destination;
        cout << "Enter Distance:";
        cin >> distance;
        fuel = calfuel();
    }
    void showinfo()
    {
        cout << "Flight Number:" << flightnum << endl;
        cout << "Destination:" << destination << endl;
        cout << "Distance:" << distance << endl;
        cout << "Fuel:" << fuel << endl;
    }
};
int main()
{
    flightt a;
    a.feedinfo();
    a.showinfo();
}
