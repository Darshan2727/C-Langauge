#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default constructor is called.."<<endl;
    }
    ~test()
    {
        cout<<"Destructor constructor is called.."<<endl;
    }
    test(int a)
    {
        cout<<"Parameterized constructor is caled..a:"<<a<<endl;
    }
    
};
int main()
{
    test a,b(20);
}