#include <iostream>
using namespace std;
class volume
{
public:
    void vol(int l, int b, int h)
    {
        cout << "Squre shape volume:" << l * b * h << endl;
    }
    void vol(int a)
    {
        cout << "Cube shape volume:" << a * a * a << endl;
    }
    void vol(int b, int h)
    {
        cout << "Prism shape volume:" << b * h << endl;
    }
};
int main()
{
    volume a;
    a.vol(3, 4, 5);
    a.vol(9);
    a.vol(11, 14);
}