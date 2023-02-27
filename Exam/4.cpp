#include <iostream>
using namespace std;
class fac
{
protected:
    int x, fact = 1, i;

public:
    void setx(int a)
    {
        x = a;
        for (i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
    }
};
class fac1
{
protected:
    int y, fact1 = 1, j;

public:
    void sety(int a)
    {
        y = a;
        for (j = 1; j <= y; j++)
        {
            fact1 = fact1 * j;
        }
    }
};
class fac2 : public fac, public fac1
{
public:
    void get()
    {
        cout << "Factorial of "<<x<<":"<< fact << "\nFactorial of "<<y<<":"<< fact1;
    }
};
int main()
{
    fac2 a;
    a.setx(8);
    a.sety(4);
    a.get();
}