#include <iostream>
using namespace std;
class fac
{
protected:
    int a, fact = 1, i;

public:
    void setdata(int x)
    {
        a = x;
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
    }
};
class fac1 : public fac
{
public:
    void getdata()
    {
        cout << "Factorial of " << a << ":" << fact << endl;
    }
};
int main()
{
    fac1 a;
    a.setdata(5);
    a.getdata();
}