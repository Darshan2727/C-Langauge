#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void seta(int x)
    {
        a = x;
    }
};
class derived : public base
{
protected:
    int b;

public:
    void setb(int y)
    {
        b = y;
    }
};
class abc : public derived
{
public:
    void get()
    {
        cout << "Cube of A:" << a * a * a << endl
             << "Cube of B:" << b * b * b;
    }
};
int main()
{
    abc a;
    a.seta(14);
    a.setb(6);
    a.get();
}